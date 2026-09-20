// FUN_001a01e0 @ 001a01e0

bool FUN_001a01e0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5)

{
  bool bVar1;
  
  _CGRectIsNull(param_1,param_2,param_3,param_4);
  bVar1 = false;
  if ((param_5 & 1) == 0) {
    _CGRectIsInfinite(param_1,param_2,param_3,param_4);
    bVar1 = false;
    if (((param_5 & 1) == 0) && (bVar1 = false, 1.0 < param_3)) {
      bVar1 = 1.0 < param_4;
    }
  }
  return bVar1;
}

