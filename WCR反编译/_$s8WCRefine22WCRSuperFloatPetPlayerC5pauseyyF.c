// _$s8WCRefine22WCRSuperFloatPetPlayerC5pauseyyF @ 02204be8

void __s8WCRefine22WCRSuperFloatPetPlayerC5pauseyyF(void)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 local_a0;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined1 *)(unaff_x20 + WCRSuperFloatPetPlayer::paused);
  _swift_beginAccess(puVar1,auStack_30,0x21);
  *puVar1 = 1;
  _swift_endAccess(auStack_30);
  lVar4 = WCRSuperFloatPetPlayer::timer;
  plVar2 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::timer);
  _swift_beginAccess(plVar2,auStack_48,0x20,0);
  if (*plVar2 == 0) {
    _swift_endAccess(auStack_48);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_48);
    FUN_022228a0(uVar5,local_a0);
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::timer);
  _swift_beginAccess(puVar3,auStack_60,0x21,0);
  uVar5 = *puVar3;
  *puVar3 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _swift_endAccess(auStack_60);
  return;
}

