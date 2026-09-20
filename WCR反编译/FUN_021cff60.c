// FUN_021cff60 @ 021cff60

undefined1  [16]
FUN_021cff60(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 local_d8;
  
  dVar2 = param_1;
  dVar1 = param_2;
  FUN_02222060();
  FUN_021b1f88(dVar2,dVar1);
  param_1 = param_1 - dVar2;
  FUN_021cfc34();
  dVar1 = param_1;
  FUN_02222060(param_5,local_d8);
  FUN_021b1f88(dVar1,dVar2);
  auVar3._0_8_ = param_1 + dVar1;
  dVar2 = auVar3._0_8_;
  FUN_02222060(param_5,local_d8);
  FUN_021b1fc4(dVar2,dVar1);
  dVar2 = param_2 - dVar2;
  FUN_021cfc34();
  dVar1 = dVar2;
  FUN_02222060(param_5,local_d8);
  FUN_021b1fc4(dVar1,param_2,param_3,param_4);
  auVar3._8_8_ = dVar2 + dVar1;
  return auVar3;
}

