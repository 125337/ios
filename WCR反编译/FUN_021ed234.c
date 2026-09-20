// FUN_021ed234 @ 021ed234

void FUN_021ed234(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 local_1b0;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_a8 = 0;
  local_b0 = 0;
  _swift_bridgeObjectRetain();
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::finalCenters);
  _swift_beginAccess(plVar1,auStack_50,0x21);
  lVar4 = *plVar1;
  *plVar1 = param_1;
  _swift_bridgeObjectRelease(lVar4);
  _swift_endAccess(auStack_50);
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
  _swift_beginAccess(puVar2,auStack_88,0x20,0);
  uVar5 = *puVar2;
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_88);
  puVar6 = &DAT_028c7100;
  local_90 = uVar5;
  FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
  puVar7 = puVar6;
  FUN_021e282c();
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(puVar6,puVar7);
  FUN_021e28a0(&local_90);
  FUN_021c77d4(&DAT_028c7138,&DAT_0233b140);
  __ss18EnumeratedSequenceV12makeIteratorAB0D0Vyx_GyF(&local_68);
  do {
    FUN_021c77d4(&DAT_028c7140,&DAT_0233b148);
    __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF(&local_a0);
    lVar3 = local_98;
    lVar4 = local_a0;
    if (local_98 == 0) {
LAB_021ed554:
      FUN_021ed05c(&local_68);
      FUN_021ed574();
      return;
    }
    local_a8 = local_a0;
    local_b0 = local_98;
    uVar5 = 0;
    FUN_021cc950();
    lVar8 = param_1;
    __sSa5countSivg();
    if (lVar8 <= lVar4) {
      (*(code *)PTR__objc_release_02578630)(lVar3);
      goto LAB_021ed554;
    }
    if ((param_2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(lVar3);
      __sSayxSicig(&local_c0,lVar4,param_1,uVar5);
      uVar5 = local_c0;
      uVar9 = local_b8;
      FUN_021ed0f8(lVar3);
      FUN_02222e40(uVar5,uVar9,lVar3,local_1b0);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_retain_02578638)(lVar3);
      FUN_02222cc0(lVar3,local_1b0);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_retain_02578638)(lVar3);
      local_100 = 0x3ff0000000000000;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0x3ff0000000000000;
      local_e0 = 0;
      local_d8 = 0;
      FUN_02223680(lVar3,local_1b0,&local_100);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      FUN_021da8d4(lVar3);
    }
    (*(code *)PTR__objc_release_02578630)(lVar3);
  } while( true );
}

