// FUN_0020766c @ 0020766c

bool FUN_0020766c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  dVar4 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar5 = param_5;
  _CGRectGetMinX(param_5,param_6,param_7,param_8);
  bVar1 = true;
  if (0.5 < ABS(dVar4 - dVar5)) {
    dVar4 = param_1;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar5 = in_stack_00000000;
    _CGRectGetMinX(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018);
    bVar1 = ABS(dVar4 - dVar5) <= 0.5;
  }
  dVar4 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_5,param_6,param_7,param_8);
  bVar2 = true;
  if (0.5 < ABS(dVar4 - param_5)) {
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetWidth(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018);
    bVar2 = ABS(param_1 - in_stack_00000000) <= 0.5;
  }
  bVar3 = false;
  if (bVar1) {
    bVar3 = bVar2;
  }
  return bVar3;
}

