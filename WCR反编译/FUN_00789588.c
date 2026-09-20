// FUN_00789588 @ 00789588

bool FUN_00789588(double param_1,double param_2,long param_3)

{
  if (param_3 == 0) {
    if (0.0 < param_1) {
      return true;
    }
  }
  else if (param_1 < 0.0) {
    return true;
  }
  return ABS(param_1) * DAT_023242c8 < ABS(param_2);
}

