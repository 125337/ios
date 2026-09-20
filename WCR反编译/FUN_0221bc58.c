// FUN_0221bc58 @ 0221bc58

undefined8 * FUN_0221bc58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_release(uVar1);
  return param_1;
}

