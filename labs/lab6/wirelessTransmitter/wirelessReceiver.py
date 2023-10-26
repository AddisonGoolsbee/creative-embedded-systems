import socket
import os
import math

ip_address = "0.0.0.0" 
port = 12345

udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

udp_socket.bind((ip_address, port))

print(f"Listening for UDP packets on {ip_address}:{port}...")

def visualize(size):
    res = []
    for i in range(size // 40):
        res.append('o')
    print(''.join(res))

while True:
    data, address = udp_socket.recvfrom(1024)
    size = int(data.decode('utf-8'))
    visualize(size)
