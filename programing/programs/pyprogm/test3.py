import turtle

# Define colors
colors = ["red", "green", "blue", "yellow", "orange", "purple", "cyan", "magenta"]

# Set up Turtle
turtle.speed(0)  # Set the drawing speed to the maximum
turtle.bgcolor("black")  # Set background color

# Draw spirals or circular rings of different colors
for i in range(100):
    turtle.color(colors[i % len(colors)])  # Cycle through colors
    turtle.circle(5 * i)  # Draw a circle with radius proportional to iteration index
    turtle.left(10)  # Turn left by 10 degrees

# Keep the window open until it is closed manually
turtle.mainloop()
