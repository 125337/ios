// FUN_021fdaa8 @ 021fdaa8

void FUN_021fdaa8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_bridgeObjectRetain();
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::frameCache);
  _swift_beginAccess(puVar1,auStack_38,0x21,0);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  _swift_bridgeObjectRelease(uVar2);
  _swift_endAccess(auStack_38);
  _swift_bridgeObjectRelease(param_1);
  return;
}

