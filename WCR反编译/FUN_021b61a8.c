// FUN_021b61a8 @ 021b61a8

uint FUN_021b61a8(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  uint local_54;
  undefined8 local_50;
  
  uVar1 = *(ulong *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = uVar1;
  FUN_022228e0(uVar1,local_50);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = uVar3;
    FUN_02223840(uVar3,local_50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar5 = 0;
    FUN_021c7714(0);
    uVar3 = uVar4;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar6 = &DAT_028c6d88;
    FUN_021c77d4(&DAT_028c6d88,&DAT_0233a800);
    puVar7 = puVar6;
    FUN_021c83e4();
    __sSlsE7isEmptySbvg(puVar6,puVar7);
    _swift_bridgeObjectRelease(uVar3);
    local_54 = (uint)puVar6 ^ 1;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_54 = 0;
  }
  return local_54 & 1;
}

