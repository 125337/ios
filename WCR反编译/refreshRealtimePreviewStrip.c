// refreshRealtimePreviewStrip @ 01ae5214

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripSettingsViewController::refreshRealtimePreviewStrip
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double in_d2;
  double dVar5;
  double dVar6;
  double local_210;
  double local_208;
  double local_200;
  ID local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  double local_58;
  double local_50;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_realtimePreviewStrip_026be3b0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x406b800000000000;
    local_58 = 220.0;
    IVar2 = local_28;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = uVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_200 = in_d2;
    if (in_d2 <= local_58) {
      local_200 = local_58;
    }
    local_88 = local_200;
    local_50 = local_200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeAvatarStripView_026ce538,
               PTR_s_layoutRowHeightForConfig_tableWi_026a2210,local_48);
    local_a8 = local_200 + 16.0;
    local_b0 = 0x4052000000000000;
    local_208 = local_a8;
    if (local_a8 < 72.0) {
      local_208 = 72.0;
    }
    local_b8 = local_208;
    local_a0 = local_208;
    local_c0 = 0x406b800000000000;
    if (220.0 <= local_208) {
      local_210 = 220.0;
    }
    else {
      local_210 = local_208;
    }
    local_c8 = local_210;
    local_98 = local_210;
    uVar3 = 0;
    uVar4 = 0x4018000000000000;
    dVar5 = local_50;
    local_90 = local_200;
    FUN_01ae107c();
    local_110 = uVar3;
    uStack_108 = uVar4;
    local_100 = dVar5;
    dStack_f8 = local_210;
    local_e8 = uVar3;
    uStack_e0 = uVar4;
    local_d8 = dVar5;
    dStack_d0 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,uVar4,dVar5,local_210,local_38,PTR_s_setFrame__026ca960);
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_118 = IVar2;
    if (IVar2 != 0) {
      dVar6 = local_98 + 12.0;
      uVar4 = 0;
      uVar3 = 0;
      dVar5 = local_50;
      FUN_01ae107c();
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setFrame__026ca960);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar2 != 0) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_bounds_026ca548);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar4,dVar5,dVar6);
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadContent_026be3a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layoutIfNeeded_026ca790);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStickyPreviewHost_026b7e98);
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

