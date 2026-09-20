// FUN_0221ac08 @ 0221ac08

undefined8 * FUN_0221ac08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  _swift_bridgeObjectRetain();
  uVar2 = param_1[1];
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  _swift_bridgeObjectRetain();
  uVar2 = param_1[3];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}

