// applyWatermark @ 01681f90

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyWatermark(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  uint local_4c;
  ID local_48;
  undefined4 local_3c;
  undefined *local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitEditingModesIfNeeded_026b2470);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_didApplyWatermark_026b1d78);
  local_29 = 0;
  local_4c = 1;
  if ((IVar1 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postProcessEffects_026b2508);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)IVar1;
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  if ((local_4c & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_screenshotWatermarkGestureEnable_026a1ee8),
       ((ulong)puVar2 & 1) == 0)) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_restoringFullscreenEditorMemory_026b2578)
      ;
      if ((IVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                   &cf__bV4lpS_g,&cf_HQ_W0RR,&cf_wSN,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      local_3c = 1;
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar1;
      FUN_0166cb18();
      _objc_retainAutoreleasedReturnValue();
      local_48 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_48;
      if (local_48 == 0) {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_restoringFullscreenEditorMemory_026b2578);
        if ((IVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4lpSYt1Y_);
        }
        local_3c = 1;
      }
      else {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (IVar1 == IVar3) {
          IVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_restoringFullscreenEditorMemory_026b2578);
          if ((IVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                       &cf__g_b0RS_u4lpS_j_gHQ_W4lpS_b);
          }
          local_3c = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensurePostProcessBaseLocked_026b2580)
          ;
          IVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postProcessEffects_026b2508);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar1);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildPostProcessImage_026b2568);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_persistFullscreenEffectMemory_026b2570);
          IVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_restoringFullscreenEditorMemory_026b2578);
          if ((IVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                       &cf__WY_u4lpSv_Y6R0RjR4_g);
          }
          local_3c = 0;
        }
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postProcessEffects_026b2508);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildPostProcessImage_026b2568);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistFullscreenEffectMemory_026b2570);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_restoringFullscreenEditorMemory_026b2578);
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Sm4lpS);
    }
  }
  return;
}

