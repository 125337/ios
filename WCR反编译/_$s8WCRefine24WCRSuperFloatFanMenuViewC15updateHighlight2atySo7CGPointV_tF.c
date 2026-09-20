// _$s8WCRefine24WCRSuperFloatFanMenuViewC15updateHighlight2atySo7CGPointV_tF @ 021d8750

void __s8WCRefine24WCRSuperFloatFanMenuViewC15updateHighlight2atySo7CGPointV_tF(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 local_260;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  code *local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_160 = 0;
  local_168 = 0;
  __s8WCRefine24WCRSuperFloatFanMenuViewC13indexOfAction2atSiSo7CGPointV_tF();
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
  local_40 = param_1;
  _swift_beginAccess(plVar1,auStack_58,0x20,0);
  lVar10 = *plVar1;
  _swift_endAccess(auStack_58);
  if (param_1 == lVar10) {
    if (-1 < param_1) {
      FUN_021d8dfc(param_1,0);
    }
  }
  else {
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
    _swift_beginAccess(plVar1,auStack_70,0x20,0);
    lVar10 = *plVar1;
    _swift_endAccess(auStack_70);
    if (-1 < lVar10) {
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
      _swift_beginAccess();
      lVar11 = *plVar1;
      _swift_endAccess(auStack_108);
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
      _swift_beginAccess(plVar1,auStack_120,0x20,0);
      lVar3 = *plVar1;
      _swift_bridgeObjectRetain();
      _swift_endAccess(auStack_120);
      uVar4 = 0;
      FUN_021ce938();
      lVar10 = lVar3;
      __sSa5countSivg();
      _swift_bridgeObjectRelease(lVar3);
      if (lVar11 < lVar10) {
        puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
        _swift_beginAccess();
        uVar12 = *puVar2;
        _swift_endAccess(auStack_138);
        puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
        _swift_beginAccess(puVar2,auStack_150,0x20,0);
        __sSayxSicig(&local_158,uVar12,*puVar2,uVar4);
        local_160 = local_158;
        _swift_endAccess(auStack_150);
        uVar4 = local_158;
        FUN_02223ac0(local_158,local_260,0x77636963);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_168 = uVar4;
        _objc_opt_self();
        uVar6 = 0;
        FUN_021c720c();
        uVar7 = 0;
        __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,uVar6);
        uVar12 = uVar7;
        FUN_021c72a0();
        __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
                  (&local_170,uVar7,uVar6,uVar12);
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        (*(code *)PTR__objc_retain_02578638)(local_158);
        (*(code *)PTR__objc_retain_02578638)(uVar4);
        puVar8 = &DAT_0258de78;
        _swift_allocObject(&DAT_0258de78,0x28,7);
        *(long *)(puVar8 + 0x10) = unaff_x20;
        *(undefined8 *)(puVar8 + 0x18) = local_158;
        *(undefined8 *)(puVar8 + 0x20) = uVar4;
        local_180 = FUN_021f1f54;
        local_1a0 = PTR___NSConcreteStackBlock_02578660;
        local_198 = 0x42000000;
        local_194 = 0;
        local_190 = FUN_021ae198;
        local_188 = &DAT_0258de90;
        local_178 = puVar8;
        pvVar9 = __Block_copy(&local_1a0);
        _swift_release(local_178);
        FUN_02221f20(DAT_02323f10,0,DAT_02323f88,0x3fe0000000000000,puVar5,local_260,local_170,
                     pvVar9,0);
        __Block_release(pvVar9);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
    }
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
    _swift_beginAccess(plVar1,auStack_88,0x21,0);
    *plVar1 = param_1;
    _swift_endAccess(auStack_88);
    if (param_1 < 0) {
      FUN_021dc60c(1);
    }
    else {
      FUN_021db7fc();
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
      _swift_beginAccess(puVar2,auStack_a0,0x20);
      uVar12 = *puVar2;
      uVar4 = 0;
      FUN_021ce938();
      __sSayxSicig(&local_a8,param_1,uVar12,uVar4);
      local_b0 = local_a8;
      _swift_endAccess(auStack_a0);
      uVar4 = local_a8;
      FUN_02223ac0(local_a8,local_260,0x77636963);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_opt_self();
      uVar6 = 0;
      FUN_021c720c(0);
      uVar7 = 0;
      __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,uVar6);
      uVar12 = uVar7;
      FUN_021c72a0();
      __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
                (&local_c0,uVar7,uVar6,uVar12);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      (*(code *)PTR__objc_retain_02578638)(local_a8);
      (*(code *)PTR__objc_retain_02578638)(uVar4);
      puVar8 = &DAT_0258de28;
      _swift_allocObject(&DAT_0258de28,0x28,7);
      *(long *)(puVar8 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar8 + 0x18) = local_a8;
      *(undefined8 *)(puVar8 + 0x20) = uVar4;
      local_d0 = FUN_021f1e84;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0x42000000;
      local_e4 = 0;
      local_e0 = FUN_021ae198;
      local_d8 = &DAT_0258de40;
      local_c8 = puVar8;
      pvVar9 = __Block_copy(&local_f0);
      _swift_release(local_c8);
      FUN_02221f20(DAT_02323d40,0,DAT_02323f60,0x3fe6666666666666,puVar5,local_260,local_c0,pvVar9,0
                  );
      __Block_release(pvVar9);
      FUN_021d8dfc(param_1,1);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
  }
  return;
}

