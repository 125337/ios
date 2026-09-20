// applyShellFrame @ 0166ced4

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyShellFrame(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  uint local_64;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitEditingModesIfNeeded_026b2470);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureCropSelection_026b24b8);
  if ((IVar1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_didApplyShell_026b1d80);
    local_29 = 0;
    local_64 = 1;
    if ((IVar1 & 1) == 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postProcessEffects_026b2508);
      _objc_retainAutoreleasedReturnValue();
      local_29 = 1;
      local_28 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_64 = (uint)IVar1;
    }
    if ((local_29 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
    if ((local_64 & 1) == 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_croppedImage_026b2310);
      _objc_retainAutoreleasedReturnValue();
      local_38 = IVar1;
      if (IVar1 == 0) {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_restoringFullscreenEditorMemory_026b2578);
        if ((IVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSWYXvVGr);
        }
        local_3c = 1;
      }
      else {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_runShellOnImage__026b2560,IVar1);
        _objc_retainAutoreleasedReturnValue();
        local_48 = IVar2;
        if (IVar2 == 0) {
          IVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_restoringFullscreenEditorMemory_026b2578);
          if ((IVar1 & 1) == 0) {
            pcVar3 = &cf_WCRefineScreenshotFrameProcessor;
            _NSClassFromString();
            local_58 = (cfstringStruct *)0x0;
            local_50 = pcVar3;
            if ((pcVar3 != (cfstringStruct *)0x0) &&
               ((*(code *)PTR__objc_msgSend_02578628)
                          (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_sharedProcessor_026a6d98)
               , ((ulong)pcVar3 & 1) != 0)) {
              pcVar4 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_performSelector__026ca7b8,PTR_s_sharedProcessor_026a6d98);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_58;
              local_58 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            pcVar3 = local_58;
            local_60 = (cfstringStruct *)0x0;
            if (local_58 != (cfstringStruct *)0x0) {
              pcVar4 = &cf_effectiveFrameTemplateRelativePath;
              _NSSelectorFromString(&cf_effectiveFrameTemplateRelativePath);
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
              pcVar4 = local_58;
              if (((ulong)pcVar3 & 1) != 0) {
                pcVar3 = &cf_effectiveFrameTemplateRelativePath;
                _NSSelectorFromString(&cf_effectiveFrameTemplateRelativePath);
                (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_performSelector__026ca7b8,pcVar3)
                ;
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_60;
                local_60 = pcVar4;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
            }
            pcVar3 = local_60;
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            if ((((ulong)pcVar3 & 1) == 0) ||
               (pcVar3 = local_60,
               (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
               pcVar3 == (cfstringStruct *)0x0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0
                         ,&cf__gbWYX,&cf_HQ_W0RR,&cf_wSN,0);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                         &cf_WYX1Y_hg_j_gMn_);
            }
            local_3c = 1;
            _objc_storeStrong(&local_60);
            _objc_storeStrong(&local_58,0);
          }
          else {
            local_3c = 1;
          }
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
                       &cf__WYXv_Y6R0RjR4_g);
          }
          local_3c = 0;
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
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_restoringFullscreenEditorMemory_026b2578)
      ;
      if ((IVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__SmWYX);
      }
    }
  }
  return;
}

