// FUN_007f0494 @ 007f0494

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_007f0494(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *local_e0;
  byte local_d1;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  if ((local_28 == (undefined *)0x0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    dVar5 = param_3;
    local_70 = param_1;
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    if (param_3 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_b0 = param_3;
      local_a8 = param_2;
      local_a0 = dVar5;
      local_98 = param_4;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      local_90 = param_3;
      local_88 = param_2;
      local_80 = dVar5;
      local_78 = param_4;
    }
    dVar8 = dVar5;
    local_50 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutCardWidthForAvailableWidth_026a8990,
               local_48);
    dVar4 = local_50;
    local_b8 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutCardHeightForConfig_tableW_026a8998,
               local_48);
    dVar5 = local_50;
    dVar6 = local_b8;
    local_c0 = dVar4;
    FUN_00800270(local_48);
    local_c8 = dVar5;
    FUN_007f14d0(local_28,local_48);
    local_d1 = 0;
    puVar2 = local_28;
    local_d0 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,FUN_0007f148);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineToDoCardView_026ce978;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineToDoCardView_026ce978,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_d1 = 1;
      puVar3 = PTR_WCRefineToDoCardView_026ce978;
      _objc_alloc();
      dVar5 = *(double *)PTR__CGRectZero_025782f0;
      dVar6 = *(double *)(PTR__CGRectZero_025782f0 + 8);
      dVar8 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
      param_4 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar2 = local_e0;
      local_e0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTag__026caa80,DAT_02324328);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setUserInteractionEnabled__026caad8,1);
      _objc_initWeak(auStack_e8,local_38);
      local_110 = PTR___NSConcreteStackBlock_02578660;
      local_108 = 0xc2000000;
      local_104 = 0;
      local_100 = FUN_008002e8;
      local_f8 = &DAT_0257be28;
      _objc_copyWeak(auStack_f0,auStack_e8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_setOnTapToOpenSettings__026a89a0,&local_110);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_e0);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_e8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
    dVar4 = local_c8;
    dVar7 = local_d0;
    dVar9 = local_b8;
    dVar10 = local_c0;
    FUN_007f1484();
    bVar1 = true;
    if (((ABS(dVar5 - dVar4) <= 0.5) && (bVar1 = true, ABS(dVar6 - dVar7) <= 0.5)) &&
       (bVar1 = true, ABS(dVar8 - dVar9) <= 0.5)) {
      bVar1 = 0.5 < ABS(param_4 - dVar10);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_50,local_e0,PTR_s_setReferenceTableWidth__026a89a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setUsesExpandedPreviewSlot__026a89b0,0);
    FUN_00800384(local_28,local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setDiagSlotName__026a89b8);
    (*(code *)PTR__objc_release_02578630)();
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,dVar7,dVar9,dVar10,local_e0,PTR_s_setFrame__026ca960);
    }
    FUN_007f84d0();
    DAT_028ccef0 = DAT_028ccef0 + 1;
    if ((local_d1 & 1) != 0) {
      DAT_028ccef8 = DAT_028ccef8 + 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_reloadContentWithReason__026a8988,&cf_configure_footer_create);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_resyncHostedWebGeometry_026a85a8);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

