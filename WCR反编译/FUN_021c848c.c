// FUN_021c848c @ 021c848c

void FUN_021c848c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = *param_1;
  uVar1 = param_1[1];
  _swift_bridgeObjectRetain();
  param_2[1] = uVar1;
  return;
}

