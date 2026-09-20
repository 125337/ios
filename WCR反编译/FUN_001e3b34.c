// FUN_001e3b34 @ 001e3b34

bool FUN_001e3b34(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double in_stack_00000000;
  
  dVar2 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar3 = param_5;
  _CGRectGetMinY(param_5,param_6,param_7,param_8);
  bVar1 = false;
  if (dVar3 + in_stack_00000000 < dVar2) {
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    _CGRectGetMaxY(param_5,param_6,param_7,param_8);
    bVar1 = param_1 < param_5 - in_stack_00000000;
  }
  return bVar1;
}

