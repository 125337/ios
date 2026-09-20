// FUN_022104f8 @ 022104f8

void FUN_022104f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  _swift_bridgeObjectRetain();
  uVar2 = *param_2;
  _swift_retain(uVar2);
  FUN_0221054c(uVar1);
  _swift_release(uVar2);
  return;
}

