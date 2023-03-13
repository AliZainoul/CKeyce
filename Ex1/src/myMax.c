// Definition ==> Source program
float _max(float _a, float _b)
{

  // Method 1
  if ( _a >= _b)
    return _a;
  else
    return _b;

  // Method 2
  // This ternary operator will do exactly the same job as the four lines above
  /*

    return ( (_a >= _b) ? _a : _b );
  */
}
