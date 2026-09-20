// FUN_02210044 @ 02210044

void FUN_02210044(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *param_1;
  uVar2 = *param_2;
  _swift_retain(uVar2);
  FUN_02210090(bVar1 & 1);
  _swift_release(uVar2);
  return;
}

