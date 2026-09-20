// rebuildStickyPreviewHostIfNeeded @ 01ebd000

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListSettingsViewController::rebuildStickyPreviewHostIfNeeded
               (ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_88 [5];
  undefined8 local_60;
  ID local_58;
  undefined1 local_49;
  ID local_48;
  undefined4 local_3c;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_toDoCardEnabled_026a3208);
  if (((ulong)puVar3 & 1) == 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStickyPreviewHost__026b7f78);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRealtimePreviewCard__026c7850,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStickyPreviewHost_026b7e98);
    local_3c = 1;
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    bVar2 = false;
    uVar1 = IVar4 != 0;
    if ((bool)uVar1) {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_realtimePreviewCard_026c7860);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar5 != 0;
      local_49 = uVar1;
      local_48 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      uVar1 = local_49;
    }
    local_49 = uVar1;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshRealtimePreviewCard_026c7840);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStickyPreviewHost_026b7e98);
      local_3c = 1;
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoRealtimePreviewView_026c7870);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_bounds_026ca548);
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_60 = in_d3;
      _objc_alloc();
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar9 = 0;
      uVar8 = 0;
      FUN_01ebb220();
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
      local_88[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c68);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
      puVar7 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3f800000);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_01ebbdd8();
      puVar3 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
      uVar9 = 0;
      uVar8 = uVar9;
      FUN_01ebb220();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,uVar8,in_d2,local_60,local_58,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAutoresizingMask__026ca878,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_addSubview__026ca4c0,local_58);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setStickyPreviewHost__026b7f78,local_88[0]);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStickyPreviewHost_026b7e98);
      _objc_storeStrong(local_88);
      _objc_storeStrong(&local_58,0);
      local_3c = 0;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

