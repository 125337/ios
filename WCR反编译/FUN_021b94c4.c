// FUN_021b94c4 @ 021b94c4

/* WARNING: Removing unreachable block (ram,0x021b98d4) */

undefined4 FUN_021b94c4(void)

{
  byte *pbVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  code *pcVar15;
  long unaff_x20;
  long lVar16;
  undefined8 local_188;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  byte local_98;
  ulong local_90;
  ulong local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatLinked);
  _swift_beginAccess(pbVar1,auStack_50,0x20);
  bVar6 = *pbVar1;
  _swift_endAccess(auStack_50);
  if ((bVar6 & 1) != 0) {
    pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatTapOpen);
    _swift_beginAccess(pbVar1,auStack_68,0x20,0);
    bVar6 = *pbVar1;
    _swift_endAccess(auStack_68);
    if ((bVar6 & 1) != 0) {
      puVar2 = (ulong *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUsername);
      _swift_beginAccess(puVar2,auStack_80,0x20,0);
      uVar14 = *puVar2;
      uVar7 = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_endAccess(auStack_80);
      if (uVar7 != 0) {
        uVar8 = uVar14;
        local_90 = uVar14;
        local_88 = uVar7;
        __sSS7isEmptySbvg();
        if ((uVar8 & 1) == 0) {
          uVar9 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
          (*(code *)PTR__objc_retain_02578638)();
          uVar10 = uVar9;
          FUN_022228e0(uVar9,local_188);
          (*(code *)PTR__objc_release_02578630)(uVar9);
          uVar5 = (uint)uVar10 ^ 1;
          local_98 = (byte)uVar5 & 1;
          puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUsername);
          _swift_beginAccess(puVar3,auStack_b0,0x21);
          uVar10 = puVar3[1];
          *puVar3 = 0;
          puVar3[1] = 0;
          _swift_bridgeObjectRelease(uVar10);
          _swift_endAccess(auStack_b0);
          uVar9 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
          (*(code *)PTR__objc_retain_02578638)();
          uVar10 = uVar9;
          FUN_02223840(uVar9,local_188);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          uVar11 = 0;
          FUN_021c7714(0);
          uVar9 = uVar10;
          __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                    (uVar10,uVar11);
          (*(code *)PTR__objc_release_02578630)(uVar10);
          puVar12 = &DAT_028c6d88;
          local_b8 = uVar9;
          FUN_021c77d4(&DAT_028c6d88,&DAT_0233a800);
          puVar13 = puVar12;
          FUN_021c8348();
          __sSTsE7forEachyyy7ElementQzKXEKF(FUN_021b98d8,0,puVar12,puVar13);
          FUN_021c83bc(&local_b8);
          FUN_0219f880();
          if ((uVar5 & 1) != 0) {
            FUN_021a7da4();
          }
          FUN_021ad198();
          plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::onQuickChatOpenUsername);
          _swift_beginAccess(plVar4,auStack_d0,0x20,0);
          if (*plVar4 == 0) {
            _swift_endAccess(auStack_d0);
          }
          else {
            pcVar15 = (code *)*plVar4;
            lVar16 = plVar4[1];
            _swift_retain(lVar16);
            _swift_endAccess(auStack_d0);
            _swift_bridgeObjectRetain(uVar7);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,uVar7);
            _swift_bridgeObjectRelease(uVar7);
            (*pcVar15)(uVar14);
            (*(code *)PTR__objc_release_02578630)(uVar14);
            _swift_release(lVar16);
          }
          _swift_bridgeObjectRelease(uVar7);
          return 1;
        }
        _swift_bridgeObjectRelease(uVar7);
      }
    }
  }
  return 0;
}

