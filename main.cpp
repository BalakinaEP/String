void callme1(String& str);
void callme2(String str);

int main()
{
  String str1 ("String 1");
  String str2 ("String 2");
  cout << "str1: " << str1 << endl;
  cout << "str2: " << str2 << endl;
  String str3;
  str3 = str2;
  callme1(str2);
  callme2(str2);
  
  return 0;
}

void callme1(String& str)
{
  cout<<"Passed by reference: "<<str<<endl;
}

void callme2(String str)
{
  cout<<"Passed by value: "<<str<<endl;
}
