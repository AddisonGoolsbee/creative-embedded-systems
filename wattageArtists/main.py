import pygatt
import time

adapter = pygatt.GATTToolBackend()

try:
    adapter.start()
    device = adapter.connect("30:AE:A4:DF:B3:0E")
    value = device.char_read("beb5483e-36e1-4688-b7f5-ea07361b26a8")
    print("Read value: %s" % value)
finally:
    adapter.stop()
