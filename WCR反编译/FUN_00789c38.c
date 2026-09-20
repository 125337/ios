// FUN_00789c38 @ 00789c38

double FUN_00789c38(double param_1,double param_2,long param_3)

{
  if (param_3 == 0) {
    if (0.0 <= param_1) {
      return 0.0;
    }
    if (param_1 <= -param_2) {
      return -param_2;
    }
  }
  else {
    if (param_1 <= 0.0) {
      return 0.0;
    }
    if (param_2 <= param_1) {
      return param_2;
    }
  }
  return param_1;
}

