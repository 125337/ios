// FUN_007a2564 @ 007a2564

void FUN_007a2564(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,undefined8 param_7,int param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_5 - param_1;
  dVar2 = dVar1;
  _hypot(dVar1,param_6 - param_2);
  if ((7 < param_8) || (dVar2 < 0.5)) {
    FUN_007a2224(param_8 + -8,param_5,param_6,param_7);
  }
  else if (DAT_02323cb8 <=
           ABS((param_3 - param_5) * (param_6 - param_2) - (param_4 - param_6) * dVar1) / dVar2) {
    dVar2 = param_1;
    dVar3 = param_2;
    FUN_007a2aac(param_1,param_2,param_3,param_4);
    FUN_007a2aac(param_3,param_4,param_5,param_6);
    dVar1 = dVar2;
    dVar4 = dVar3;
    FUN_007a2aac(dVar2,dVar3,param_3,param_4);
    FUN_007a2564(param_1,param_2,dVar2,dVar3,dVar1,dVar4,param_7,param_8 + 1);
    FUN_007a2564(dVar1,dVar4,param_3,param_4,param_5,param_6,param_7,param_8 + 1);
  }
  else {
    FUN_007a2224(param_5,param_6,param_7);
  }
  return;
}

