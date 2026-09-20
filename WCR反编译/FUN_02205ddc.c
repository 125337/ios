// FUN_02205ddc @ 02205ddc

uint FUN_02205ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_022069b4();
  uVar2 = uVar1;
  FUN_021cd164();
  FUN_021ca854(param_1,param_2,param_3,uVar1,uVar2);
  return (uint)param_1 & 1;
}

