 #include <iostream>
 
 
 if (is_declared(name))
 {
  cout << name + ", declared twice. Would you like to reassign? y/n > ";
  cin.clear();
  cin.ignore(10000, '\n'); //clear the buffer
  string ans;
  getline(cin, ans);
  if (ans == "n")
   error(name, ", will not be reassigned; ");
  if (ans == "y")
  {
   cout << "Please enter new value: ";
   int val;
   cin >> val;
   set_value(name, val);
   double d = val; //return value to print to reset calculator
   return d;
  }
 }
