// FUN_02204248 @ 02204248

void FUN_02204248(void)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 local_100;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatPetPlayer::paused);
  _swift_beginAccess(pbVar1,auStack_40,0x20,0);
  bVar4 = *pbVar1;
  _swift_endAccess(auStack_40);
  if ((bVar4 & 1) == 0) {
    plVar2 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::state);
    _swift_beginAccess();
    lVar5 = *plVar2;
    _swift_endAccess(auStack_58);
    puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::frameIndex);
    _swift_beginAccess(puVar3,auStack_70,0x20,0);
    uVar6 = *puVar3;
    _swift_endAccess(auStack_70);
    FUN_02201ed4(lVar5,uVar6);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::imageView);
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_retain_02578638)(lVar5);
      FUN_02223120(uVar6,local_100,lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(lVar5);
    }
  }
  return;
}

