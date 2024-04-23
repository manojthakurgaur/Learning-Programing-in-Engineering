import cv2
import numpy as np
import dlib
from PIL import Image, ImageDraw

# Load face detection model
detector = dlib.get_frontal_face_detector()

# Load the input image
image_path = 'input_image.jpg'
input_image = cv2.imread(image_path)

# Convert the image to grayscale
gray_image = cv2.cvtColor(input_image, cv2.COLOR_BGR2GRAY)

# Detect faces in the image
faces = detector(gray_image)

# Load the character image
character_path = 'character_image.png'
character = cv2.imread(character_path, cv2.IMREAD_UNCHANGED)

# Scale the character image to fit the face
face_width = faces[0].right() - faces[0].left()
face_height = faces[0].bottom() - faces[0].top()
character_resized = cv2.resize(character, (face_width, face_height))

# Overlay the character on the face region
overlay = input_image.copy()
overlay[faces[0].top():faces[0].bottom(), faces[0].left():faces[0].right()] = character_resized

# Display the result
cv2.imshow('Animating Character', overlay)
cv2.waitKey(0)
cv2.destroyAllWindows()
