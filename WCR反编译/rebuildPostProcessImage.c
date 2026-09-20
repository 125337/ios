// rebuildPostProcessImage @ 0166bf10

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::rebuildPostProcessImage(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ID local_318;
  ID local_278;
  ulong local_218;
  ulong local_210;
  ID local_1b8;
  ID local_198;
  ID local_150;
  byte local_141;
  ID local_140;
  ID local_138;
  undefined1 local_129;
  ID local_128;
  ID local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined4 local_d0;
  byte local_c9;
  ID local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessBaseImage_026b2518);
  _objc_retainAutoreleasedReturnValue();
  local_c9 = 0;
  local_1b8 = param_1;
  if (param_1 == 0) {
    local_1b8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_1b8;
  }
  local_c9 = param_1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_1b8;
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_c0 == 0) {
    local_d0 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_captureMediaDarkModeSnapshot_026a1f00);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setImage__026ca978,local_c0);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_restorePostProcessCropSnapshot_026b2558);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _memset(auStack_118,0,0x40);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_postProcessEffects_026b2508);
    _objc_retainAutoreleasedReturnValue();
    local_210 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_210 != 0) {
      lVar6 = *local_108;
      local_218 = 0;
      do {
        do {
          if (*local_108 - lVar6 != 0) {
            _objc_enumerationMutation(*local_108 - lVar6,IVar3);
          }
          uVar7 = *(ulong *)(local_110 + local_218 * 8);
          local_d8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isEqualToString__0269ccc8,&cf_watermark)
          ;
          if ((uVar7 & 1) == 0) {
            uVar7 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_shell);
            if ((uVar7 & 1) != 0) {
              IVar5 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_croppedImage_026b2310);
              _objc_retainAutoreleasedReturnValue();
              local_141 = 0;
              local_278 = IVar5;
              if (IVar5 == 0) {
                local_278 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_image_026ca678);
                _objc_retainAutoreleasedReturnValue();
                local_140 = local_278;
              }
              local_141 = IVar5 == 0;
              (*(code *)PTR__objc_retain_02578638)();
              local_138 = local_278;
              if ((local_141 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_140);
              }
              (*(code *)PTR__objc_release_02578630)(IVar5);
              IVar5 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_wcr_runShellOnImage__026b2560,local_138);
              _objc_retainAutoreleasedReturnValue();
              local_150 = IVar5;
              if (IVar5 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setImage__026ca978,IVar5);
                IVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_imageView_0269f230);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar5);
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCropShape__026b1f98,0);
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFreeformPath__026b1f38);
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFreeformClosed__026b1f48,0);
                IVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_freeformPoints_026b1f50);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar5);
                IVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_freeformPreviewLayer_026b1bc8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar5);
                IVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_freeformPreviewLayer_026b1bc8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar5);
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_imageDisplayFrame_026b1f90);
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCropRect__026b1b80);
              }
              _objc_storeStrong(&local_150);
              _objc_storeStrong(&local_138,0);
            }
          }
          else {
            IVar5 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = IVar5;
            FUN_0166cb18();
            _objc_retainAutoreleasedReturnValue();
            local_120 = IVar4;
            (*(code *)PTR__objc_release_02578630)(IVar5);
            IVar5 = local_120;
            local_129 = 0;
            bVar2 = false;
            uVar1 = local_120 != 0;
            if ((bool)uVar1) {
              IVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = IVar5 != IVar4;
              local_129 = uVar1;
              local_128 = IVar4;
              (*(code *)PTR__objc_release_02578630)(IVar4);
              uVar1 = local_129;
            }
            local_129 = uVar1;
            if (bVar2) {
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setImage__026ca978,local_120);
              IVar5 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_imageView_0269f230);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar5);
            }
            _objc_storeStrong(&local_120,0);
          }
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_218 = 0;
      } while (local_210 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_postProcessEffects_026b2508);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDidApplyWatermark__026b1c78,IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_postProcessEffects_026b2508);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDidApplyShell__026b1c80,IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_postProcessEffects_026b2508);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (IVar5 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPostProcessBaseImage__026b2500,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_refreshCropChrome_026b1e98);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_refreshEffectToggleUI_026b1dd8);
    IVar3 = local_b0;
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_croppedImage_026b2310);
    _objc_retainAutoreleasedReturnValue();
    local_318 = IVar5;
    if (IVar5 == 0) {
      local_198 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      local_318 = local_198;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_writeImageToPasteboardPreserving_026b2318,local_318);
    if (IVar5 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_198);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

