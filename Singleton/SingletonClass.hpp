class SingletonClass {
  private:
    static SingletonClass* instance;
    SingletonClass() {}
  public:
    static SingletonClass* getInstance() {
      if (instance == nullptr) {
        instance = new SingletonClass();
      }
      return instance;
    }
};

SingletonClass* SingletonClass::instance = nullptr;
