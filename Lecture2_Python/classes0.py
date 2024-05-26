class Flight():
    def __init__(self, capacity):
        self.capacity = capacity
        self.passengers = []

    def add_passenger(self, name):
        if not self.open_seats():   # not equal =0
            return False
        self.passengers.append(name)
        return True


    def open_seats(self):
        return self.capacity - len(self.passengers)

flight = Flight(capacity=3)

people = ["A", "B", "C", "D"]
for person in people:
    if flight.add_passenger(person):
        print(f"Added {person} to flight")
    else:
        print(f"No avaiable seats for {person}")