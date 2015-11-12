#ifndef VECTOR_HPP
#define VECTOR_HPP


class Vector
{
	public:
		Vector();
		Vector(const Vector& vect);
		Vector(size_t taille);
		~Vector();

		size_t getSize() const;
		int* getData() const;

		Vector& Vector::operator=(const Vector& vect);
		int Vector::operator[](size_t i) const;
		int& Vector::operator[](size_t i);

		void print() const;

	private:
		size_t n_;
		int* data_;
};

#endif