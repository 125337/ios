// snappedExtraButtonOffsetValue: @ 019b5140

/* Function Stack Size: 0x18 bytes */

double WCRefineFloatingTabBarButtonActionViewController::snappedExtraButtonOffsetValue_
                 (ID param_1,SEL param_2,double param_3)

{
  double local_58;
  double local_50;
  
  local_50 = param_3;
  if (param_3 <= -80.0) {
    local_50 = -80.0;
  }
  if (local_50 <= 80.0) {
    local_58 = local_50;
  }
  else {
    local_58 = 80.0;
  }
  return (double)(float)(int)local_58;
}

