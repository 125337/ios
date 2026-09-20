// FUN_02219c80 @ 02219c80

void FUN_02219c80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = *param_1;
  uVar1 = param_1[1];
  _swift_retain();
  param_2[1] = uVar1;
  param_2[2] = param_1[2];
  uVar1 = param_1[3];
  _swift_retain();
  param_2[3] = uVar1;
  uVar1 = param_1[4];
  _swift_retain();
  param_2[4] = uVar1;
  return;
}

