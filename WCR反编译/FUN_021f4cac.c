// FUN_021f4cac @ 021f4cac

void FUN_021f4cac(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
  return;
}

