// FUN_02219be0 @ 02219be0

void FUN_02219be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = *param_1;
  uVar1 = param_1[1];
  _swift_retain();
  param_2[1] = uVar1;
  return;
}

