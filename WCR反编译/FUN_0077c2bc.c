// FUN_0077c2bc @ 0077c2bc

bool FUN_0077c2bc(double param_1,double param_2,long param_3)

{
  if (param_3 == 0) {
    if (0.0 <= param_1) {
      return false;
    }
  }
  else if (param_1 <= 0.0) {
    return false;
  }
  return ABS(param_2) * DAT_023241d0 <= ABS(param_1);
}

