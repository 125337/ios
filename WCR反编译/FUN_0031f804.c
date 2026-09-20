// FUN_0031f804 @ 0031f804

void FUN_0031f804(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,undefined8 param_9,int param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = DAT_02323cb8;
  dVar1 = param_7 - param_1;
  dVar2 = param_8 - param_2;
  dVar3 = dVar1;
  _hypot(dVar1,dVar2);
  if ((7 < param_10) || (dVar3 < 0.5)) {
    FUN_0031f2a0(param_7,param_8,param_9);
  }
  else if ((dVar4 <= ABS((param_3 - param_7) * dVar2 - (param_4 - param_8) * dVar1) / dVar3) ||
          (dVar4 <= ABS((param_5 - param_7) * dVar2 - (param_6 - param_8) * dVar1) / dVar3)) {
    dVar4 = param_1;
    dVar2 = param_2;
    FUN_0031fb28(param_10 + -8,param_1,param_2,param_3,param_4);
    FUN_0031fb28(param_3,param_4,param_5,param_6);
    FUN_0031fb28(param_5,param_6,param_7,param_8);
    dVar3 = dVar4;
    dVar5 = dVar2;
    FUN_0031fb28(dVar4,dVar2,param_3,param_4);
    FUN_0031fb28(param_3,param_4,param_5,param_6);
    dVar1 = dVar3;
    dVar6 = dVar5;
    FUN_0031fb28(dVar3,dVar5,param_3,param_4);
    FUN_0031f804(param_1,param_2,dVar4,dVar2,dVar3,dVar5,dVar1,dVar6,param_9,param_10 + 1);
    FUN_0031f804(dVar1,dVar6,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10 + 1);
  }
  else {
    FUN_0031f2a0(param_7,param_8,param_9);
  }
  return;
}

