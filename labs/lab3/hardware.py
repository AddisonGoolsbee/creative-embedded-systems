import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
input_pin1 = 2  # GPIO pin 2
input_pin2 = 3  # GPIO pin 3

GPIO.setup(input_pin1, GPIO.IN)
GPIO.setup(input_pin2, GPIO.IN)

try:
    while True:
        input_state1 = GPIO.input(input_pin1)
        input_state2 = GPIO.input(input_pin2)

        print("x:", input_state1)
        print("y:", input_state2)
        
        time.sleep(0.1)

except KeyboardInterrupt:
    pass

GPIO.cleanup()
