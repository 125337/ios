// FUN_021eef6c @ 021eef6c

long FUN_021eef6c(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 local_118;
  long local_f8;
  long local_e0;
  long local_d8;
  undefined1 auStack_90 [24];
  long local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  local_78 = 0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::gridPanelView);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  lVar3 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_40);
  if (lVar3 == 0) {
    local_e0 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    _objc_opt_self(PTR__OBJC_CLASS___UIVisualEffectView_026cdf98);
    local_d8 = lVar3;
    _swift_dynamicCastObjCClass(lVar3,puVar4);
    if (local_d8 == 0) {
      (*(code *)PTR__objc_release_02578630)(lVar3);
      local_d8 = 0;
    }
    local_e0 = local_d8;
  }
  if (local_e0 == 0) {
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::gridPanelView);
    _swift_beginAccess(plVar1,auStack_58,0x20,0);
    if (*plVar1 == 0) {
      _swift_endAccess(auStack_58);
    }
    else {
      lVar3 = *plVar1;
      (*(code *)PTR__objc_retain_02578638)();
      _swift_endAccess(auStack_58);
      FUN_02222b40(lVar3,local_118);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::gridPanelView);
    _swift_beginAccess();
    uVar5 = *puVar2;
    *puVar2 = 0;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _swift_endAccess(auStack_70);
    FUN_021c9e00();
    local_f8 = 0;
    FUN_021c9e60();
    FUN_021d00b8();
    FUN_021c4f58();
    FUN_021c4f8c();
    local_78 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_022236a0(local_f8,local_118,1);
    (*(code *)PTR__objc_release_02578630)(local_f8);
    (*(code *)PTR__objc_retain_02578638)(local_f8);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_022220e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_02222d60(local_f8,local_118);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(local_f8);
    (*(code *)PTR__objc_retain_02578638)(local_f8);
    lVar3 = local_f8;
    FUN_02222960(local_f8,local_118);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(local_f8);
    FUN_02222f40(0x4034000000000000,lVar3,local_118);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_retain_02578638)(local_f8);
    FUN_02222e60(local_f8,local_118,1);
    (*(code *)PTR__objc_release_02578630)(local_f8);
    (*(code *)PTR__objc_retain_02578638)(local_f8);
    lVar3 = local_f8;
    FUN_02222960(local_f8,local_118);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(local_f8);
    uVar5 = *(undefined8 *)PTR__kCACornerCurveContinuous_025783c8;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222f20(lVar3,local_118,uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    FUN_02222860(unaff_x20,local_118,local_f8,0);
    (*(code *)PTR__objc_retain_02578638)(local_f8);
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::gridPanelView);
    _swift_beginAccess(plVar1,auStack_90,0x21,0);
    lVar3 = *plVar1;
    *plVar1 = local_f8;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _swift_endAccess(auStack_90);
  }
  else {
    uVar5 = 0;
    FUN_021c9e60();
    FUN_021d00b8();
    FUN_021c4f58();
    FUN_02223000(local_e0,local_118);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_retain_02578638)(local_e0);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_022220e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_02222d60(local_e0,local_118);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(local_e0);
    (*(code *)PTR__objc_retain_02578638)(local_e0);
    lVar3 = local_e0;
    FUN_02222960(local_e0,local_118);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(local_e0);
    FUN_02222f40(0x4034000000000000,lVar3,local_118);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_retain_02578638)(local_e0);
    FUN_02222e60(local_e0,local_118,1);
    (*(code *)PTR__objc_release_02578630)(local_e0);
    (*(code *)PTR__objc_retain_02578638)(local_e0);
    lVar3 = local_e0;
    FUN_02222960(local_e0,local_118);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(local_e0);
    uVar5 = *(undefined8 *)PTR__kCACornerCurveContinuous_025783c8;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222f20(lVar3,local_118,uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_f8 = local_e0;
  }
  return local_f8;
}

