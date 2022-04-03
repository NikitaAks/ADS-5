
template<typename T, int size>
class TStack {
 private:
  T arr[50];
  int top;

 public:
  TStack():top(-1) {}
  bool isFull() const {
    return size == size - 1;
  }
  bool isEmpty() const {
  return top == -1;
  }
  T get() {
    return arr[top];
  }
  void pop() {
    if (top >= 0)
      top--;
  }
  void push(T value) {
    if (top < size - 1)
      arr[++top] = value;
  }
};
#endif  // INCLUDE_TSTACK_H_
