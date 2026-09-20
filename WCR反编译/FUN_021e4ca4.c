// FUN_021e4ca4 @ 021e4ca4

void FUN_021e4ca4(void)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong local_188;
  undefined8 local_178;
  long local_100;
  long local_f8;
  undefined1 auStack_f0 [24];
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  local_90 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_d0 = 0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::gridScrollView);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  lVar4 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_40);
  if (lVar4 != 0) {
    puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
    local_90 = lVar4;
    _swift_beginAccess(puVar2,auStack_b8,0x20,0);
    uVar5 = *puVar2;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_b8);
    puVar6 = &DAT_028c7100;
    local_c0 = uVar5;
    FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
    puVar7 = puVar6;
    FUN_021fafc8();
    __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_a0,puVar6,puVar7);
    while( true ) {
      FUN_021c77d4(&DAT_028c7190,&DAT_0233b168);
      __ss16IndexingIteratorV4next7ElementQzSgyF(&local_c8);
      uVar3 = local_c8;
      if (local_c8 == 0) break;
      local_d0 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = uVar3;
      FUN_02223880(uVar3,local_178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_188 == 0) {
        local_188 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)(lVar4);
      uVar8 = local_188;
      __ss3eeeoiySbyXlSg_ABtF(local_188,lVar4);
      _swift_unknownObjectRelease(lVar4);
      _swift_unknownObjectRelease(local_188);
      if ((uVar8 & 1) == 0) {
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::gridPanelView);
        _swift_beginAccess(plVar1,auStack_f0,0x20,0);
        lVar9 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_f0);
        local_f8 = lVar9;
        (*(code *)PTR__objc_retain_02578638)(lVar4);
        local_100 = local_f8;
        if (local_f8 == 0) {
          (*(code *)PTR__objc_retain_02578638)(lVar4);
          local_d8 = lVar4;
          (*(code *)PTR__objc_release_02578630)();
          if (local_100 != 0) {
            FUN_021c87dc(&local_100);
          }
        }
        else {
          (*(code *)PTR__objc_release_02578630)(lVar4);
          local_d8 = local_100;
        }
        lVar9 = local_d8;
        FUN_02222840(unaff_x20,local_178,uVar3);
        (*(code *)PTR__objc_release_02578630)(lVar9);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    FUN_021fb03c(&local_a0);
    FUN_02222b40(lVar4,local_178);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::gridScrollView);
  _swift_beginAccess(puVar2,auStack_58,0x21);
  uVar5 = *puVar2;
  *puVar2 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _swift_endAccess(auStack_58);
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::gridPanelView);
  _swift_beginAccess(plVar1,auStack_70,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_70);
  }
  else {
    lVar4 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_70);
    FUN_02222b40(lVar4,local_178);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::gridPanelView);
  _swift_beginAccess(puVar2,auStack_88,0x21,0);
  uVar5 = *puVar2;
  *puVar2 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _swift_endAccess(auStack_88);
  return;
}

