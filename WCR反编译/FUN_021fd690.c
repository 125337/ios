// FUN_021fd690 @ 021fd690

undefined8 FUN_021fd690(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::cellH);
  _swift_beginAccess(puVar1,auStack_30,0x20,0);
  uVar2 = *puVar1;
  _swift_endAccess(auStack_30);
  return uVar2;
}

