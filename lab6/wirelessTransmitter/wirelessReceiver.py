import socket

ip_address = "0.0.0.0" 
port = 12345

udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

udp_socket.bind((ip_address, port))

print(f"Listening for UDP packets on {ip_address}:{port}...")

while True:
    data, address = udp_socket.recvfrom(1024)
    print(f"{data.decode('utf-8')}") 
