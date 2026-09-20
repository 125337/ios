// FUN_02219c1c @ 02219c1c

void FUN_02219c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = *param_1;
  uVar1 = param_1[1];
  _swift_retain();
  param_2[1] = uVar1;
  return;
}

