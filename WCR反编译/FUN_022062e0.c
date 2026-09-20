// FUN_022062e0 @ 022062e0

void FUN_022062e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  _swift_bridgeObjectRetain();
  param_1[2] = uVar1;
  return;
}

