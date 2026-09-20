// applyPreviewLayoutToCard:scrollView:cfg: @ 01ebb7a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRefineToDoListSettingsViewController::applyPreviewLayoutToCard_scrollView_cfg_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_d2;
  double dVar8;
  double local_2d8;
  double local_2d0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_58;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if ((local_38 != 0) && (local_48 != 0)) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar6 = in_d2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_58 = in_d2;
    if (in_d2 <= 1.0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_58 = dVar6;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,local_38,PTR_s_setReferenceTableWidth__026a89a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUsesExpandedPreviewSlot__026a89b0,1);
    dVar6 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutCardWidthForAvailableWidth_026a8990,
               local_48);
    dVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutCardHeightForConfig_tableW_026a8998,
               local_48);
    local_2a8 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_toDoCardOffsetX_026a8978);
    local_2b8 = local_2a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_toDoCardOffsetY_026c6e28);
    local_2a0 = -local_2a8;
    if (local_2a0 <= 0.0) {
      local_2a0 = 0.0;
    }
    if (local_2a8 <= 0.0) {
      local_2a8 = 0.0;
    }
    local_2b0 = local_2b8;
    if (local_2b8 <= 0.0) {
      local_2b0 = 0.0;
    }
    local_2b8 = -local_2b8;
    if (local_2b8 <= 0.0) {
      local_2b8 = 0.0;
    }
    dVar4 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_toDoCardSideMargin_026a8968);
    dVar5 = dVar4 + local_2a0;
    dVar7 = local_2b0 + 4.0;
    dVar8 = dVar6;
    FUN_01ebb220();
    (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar7,local_38,PTR_s_setFrame__026ca960);
    local_2a8 = dVar4 + local_2a0 + dVar6 + local_2a8;
    local_2d0 = local_2a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_toDoCardSideMargin_026a8968);
    local_2d0 = local_2a8 + local_2d0;
    if (local_2d0 <= local_58) {
      local_2d0 = local_58;
    }
    dVar6 = local_2b0 + 4.0 + dVar3 + local_2b8 + 4.0;
    local_2d8 = dVar6;
    if (280.0 <= dVar6) {
      local_2d8 = 280.0;
    }
    if (local_40 != 0) {
      dVar3 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar3,0x4024000000000000,dVar8,local_2d8,local_40,PTR_s_setFrame__026ca960);
      dVar3 = dVar6;
      FUN_01ebbdd8();
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,dVar3,local_40,PTR_s_setContentSize__026ca8e8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setScrollEnabled__0269e428,local_2d8 + 1.0 < dVar6);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

