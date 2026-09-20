// FUN_0007e710 @ 0007e710

bool FUN_0007e710(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar3 = param_5;
  _CGRectGetMinX(param_5,param_6,param_7,param_8);
  bVar1 = false;
  if (ABS(dVar2 - dVar3) <= 0.5) {
    dVar2 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar3 = param_5;
    _CGRectGetMinY(param_5,param_6,param_7,param_8);
    bVar1 = false;
    if (ABS(dVar2 - dVar3) <= 0.5) {
      dVar2 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar3 = param_5;
      _CGRectGetWidth(param_5,param_6,param_7,param_8);
      bVar1 = false;
      if (ABS(dVar2 - dVar3) <= 0.5) {
        _CGRectGetHeight(param_1,param_2,param_3,param_4);
        _CGRectGetHeight(param_5,param_6,param_7,param_8);
        bVar1 = ABS(param_1 - param_5) <= 0.5;
      }
    }
  }
  return bVar1;
}

