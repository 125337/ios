// FUN_0220ffec @ 0220ffec

void FUN_0220ffec(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar3;
  undefined8 uVar2;
  
  uVar3 = *param_2;
  uVar2 = uVar3;
  _swift_retain();
  bVar1 = (byte)uVar2;
  FUN_0220ff58();
  _swift_release(uVar3);
  *param_1 = bVar1 & 1;
  return;
}

