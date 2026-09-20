// FUN_021e29f0 @ 021e29f0

void FUN_021e29f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  uVar1 = param_1[2];
  param_2[3] = param_1[3];
  param_2[2] = uVar1;
  return;
}

