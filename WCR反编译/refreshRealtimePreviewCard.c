// refreshRealtimePreviewCard @ 01ebc418

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListSettingsViewController::refreshRealtimePreviewCard(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  double in_d0;
  double dVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 uVar8;
  undefined8 in_d3;
  ID local_178;
  ID local_78;
  undefined1 local_69;
  ID local_68;
  bool local_59;
  ID local_58;
  ID local_50;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_realtimePreviewCard_026c7860);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_38;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_59 = false;
    bVar2 = (IVar5 & 1) == 0;
    if (bVar2) {
      local_178 = 0;
    }
    else {
      local_178 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_178;
    }
    local_59 = !bVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_178;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_applyPreviewLayoutToCard_scrollV_026c7858,local_38,local_50,local_48);
    local_69 = 0;
    bVar2 = false;
    uVar1 = local_50 != 0;
    if ((bool)uVar1) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar4 != 0;
      local_69 = uVar1;
      local_68 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      uVar1 = local_69;
    }
    local_69 = uVar1;
    if (bVar2) {
      IVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_78 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_frame_026ca640);
      dVar6 = in_d0;
      uVar7 = in_d1;
      uVar8 = in_d2;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
      _CGRectGetMaxY(dVar6,uVar7,uVar8,in_d3);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setFrame__026ca960);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,dVar6 + 10.0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      _objc_storeStrong(&local_78,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadContent_026be3a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layoutIfNeeded_026ca790);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStickyPreviewHost_026b7e98);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

