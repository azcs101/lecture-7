#include <iostream>

class Entity {
public:
	const char *name;

	Entity(const char *name_) : name(name_) {}
	virtual void describe() = 0;
};

void Entity::describe() {
	std::cout << "Entity: " << name << "\n";
}

class Person : public Entity {
public:
	int height;

	Person(const char *name_, int height_) : Entity(name_), height(height_) {}

	void describe();
};

void Person::describe() {
	std::cout << "[Person] " << name << "\n";
	std::cout << " - Height: " << height << "\n";
}

class Animal : public Entity {
public:
	bool canFly;

	Animal(const char *name_, bool canFly_) : Entity(name_), canFly(canFly_) {}

	void describe();
};

void Animal::describe() {
	std::cout << "[Animal] " << name << "\n";
	std::cout << " - Can Fly: " << (canFly ? "Yes" : "No") << "\n";
}

class Vehicle : public Entity {
public:
	const char *model;
	int year;
	int hp;

	Vehicle(const char *name_, int year_, int hp_) : Entity(name_), year(year_), hp(hp_) {}

	void describe();
};

void Vehicle::describe() {
	std::cout << "[Vehicle] " << name << "\n";
	std::cout << " - Year: " << year << "\n";
	std::cout << " - Horse Power: " << hp << "km\n";
}


int main() {

	Entity *entities[] = {
		new Vehicle("BMW M3", 2019, 450),
		new Animal("Kiwi", false),
		new Person("John Doe", 182)
	};

	for (int i = 0; i < 3; ++i) {
		entities[i]->describe();
	}

	return 0;
}
