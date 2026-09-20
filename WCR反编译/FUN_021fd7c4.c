// FUN_021fd7c4 @ 021fd7c4

void FUN_021fd7c4(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::columns);
  _swift_beginAccess(puVar1,auStack_38,0x21,0);
  *puVar1 = param_1;
  _swift_endAccess(auStack_38);
  return;
}

