// FUN_021fdf48 @ 021fdf48

void FUN_021fdf48(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_40 [24];
  
  _swift_bridgeObjectRetain();
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::displayName);
  _swift_beginAccess(puVar1,auStack_40,0x21,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  _swift_endAccess(auStack_40);
  _swift_bridgeObjectRelease(param_2);
  return;
}

