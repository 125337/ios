// FUN_0221aba4 @ 0221aba4

void FUN_0221aba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  _swift_bridgeObjectRetain();
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  _swift_bridgeObjectRetain();
  param_1[3] = uVar1;
  return;
}

