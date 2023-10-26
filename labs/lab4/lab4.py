import serial

serial_port = '/dev/ttyUSB0'
baud_rate = 9600

try:
    ser = serial.Serial(serial_port, baud_rate)
    while True:
        data = ser.readline().decode('ascii').strip()
        print(data)

except KeyboardInterrupt:
    print("Serial communication stopped.")

except Exception as e:
    print(f"An error occurred: {str(e)}")

finally:
    if ser.is_open:
        ser.close()
