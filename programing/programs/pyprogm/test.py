import turtle

# Function to draw a circle with specified radius and color
def draw_circle(radius, color):
    turtle.fillcolor(color)
    turtle.begin_fill()
    turtle.circle(radius)
    turtle.end_fill()

# Function to draw the spiral of circles
def draw_spiral(num_circles, initial_radius, color_list):
    angle = 360 / num_circles
    for i in range(num_circles):
        color = color_list[i % len(color_list)]
        draw_circle(initial_radius + i * 5, color)
        turtle.right(angle)

# Main function
def main():
    turtle.speed(0)
    turtle.bgcolor("black")
    turtle.hideturtle()

    num_circles = 100  # Number of circles in the spiral
    initial_radius = 10  # Initial radius of the first circle
    color_list = ["red", "orange", "yellow", "green", "blue", "purple"]  # List of colors for the circles

    draw_spiral(num_circles, initial_radius, color_list)

    turtle.done()

if __name__ == "__main__":
    main()
