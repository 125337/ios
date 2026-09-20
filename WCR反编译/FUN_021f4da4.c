// FUN_021f4da4 @ 021f4da4

void FUN_021f4da4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_1a0;
  undefined8 local_180;
  undefined1 auStack_110 [24];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  ulong local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar7 = DAT_02323c70;
  local_68 = 0;
  local_60 = 0;
  local_c8 = 0;
  puVar1 = (undefined8 *)(param_1 + WCRSuperFloatFanMenuView::actionButtons);
  local_58 = param_1;
  _swift_beginAccess(puVar1,auStack_80,0x20,0);
  uVar4 = *puVar1;
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_80);
  puVar5 = &DAT_028c7100;
  local_88 = uVar4;
  FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
  puVar6 = puVar5;
  FUN_021fafc8();
  __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_68,puVar5,puVar6);
  while( true ) {
    FUN_021c77d4(&DAT_028c7190,&DAT_0233b168);
    __ss16IndexingIteratorV4next7ElementQzSgyF(&local_90);
    uVar3 = local_90;
    if (local_90 == 0) break;
    local_c8 = local_90;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar3;
    FUN_02223880(uVar3,local_180);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_1a0 == 0) {
      local_1a0 = 0;
    }
    (*(code *)PTR__objc_retain_02578638)(param_1);
    uVar8 = local_1a0;
    __ss3eeeoiySbyXlSg_ABtF();
    _swift_unknownObjectRelease(param_1);
    _swift_unknownObjectRelease(local_1a0);
    if ((uVar8 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)(uVar3);
      puVar1 = (undefined8 *)(param_1 + WCRSuperFloatFanMenuView::origin);
      _swift_beginAccess(puVar1,auStack_110,0x20,0);
      uVar4 = *puVar1;
      uVar10 = puVar1[1];
      _swift_endAccess(auStack_110);
      FUN_02222e40(uVar4,uVar10,uVar3,local_180);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    (*(code *)PTR__objc_retain_02578638)(uVar3);
    FUN_02222cc0(0,uVar3,local_180);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_retain_02578638)(uVar3);
    FUN_021dbf50(&local_50,uVar7);
    local_f8 = local_50;
    local_f0 = local_48;
    local_e8 = local_40;
    local_e0 = local_38;
    local_d8 = local_30;
    local_d0 = local_28;
    FUN_02223680(uVar3,local_180,&local_f8);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  FUN_021fb03c(&local_68);
  uVar7 = *(undefined8 *)(param_1 + WCRSuperFloatFanMenuView::closeButton);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222cc0(0,uVar7,local_180);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  plVar2 = (long *)(param_1 + WCRSuperFloatFanMenuView::gridPanelView);
  _swift_beginAccess(plVar2,auStack_a8,0x20,0);
  if (*plVar2 == 0) {
    _swift_endAccess(auStack_a8);
  }
  else {
    lVar9 = *plVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_a8);
    FUN_02222cc0(0,lVar9,local_180);
    (*(code *)PTR__objc_release_02578630)(lVar9);
  }
  plVar2 = (long *)(param_1 + WCRSuperFloatFanMenuView::gridScrollView);
  _swift_beginAccess(plVar2,auStack_c0,0x20,0);
  if (*plVar2 == 0) {
    _swift_endAccess(auStack_c0);
  }
  else {
    lVar9 = *plVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_c0);
    FUN_02222cc0(0,lVar9,local_180);
    (*(code *)PTR__objc_release_02578630)(lVar9);
  }
  uVar7 = *(undefined8 *)(param_1 + WCRSuperFloatFanMenuView::previewContainer);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222cc0(0,uVar7,local_180);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  return;
}

