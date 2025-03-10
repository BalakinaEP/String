namespace STRING
{
class String
{
private:
  char* str;
  int len;
  static int numStrings;
public:
  String();
  String(const char* str);
  String(const String& other);
  ~String();
  String& operator=(const String& other);

  friend std::ostream& operator<<(std::ostream& os, const String& s);
};
}
