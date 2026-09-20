// refreshPenColorSelectionUI @ 016516a0

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::refreshPenColorSelectionUI(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_378;
  ulong local_370;
  undefined *local_348;
  undefined *local_310;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  byte local_249;
  undefined *local_248;
  byte local_239;
  undefined *local_238;
  undefined1 local_229;
  undefined *local_228;
  byte local_219;
  undefined1 auStack_218 [48];
  undefined1 auStack_1e8 [55];
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  byte local_191;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar1 = DAT_023397a0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_penAttrBar_026b1de0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    puVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_annotateColorIndex_026b2028);
    puVar5 = local_130;
    local_140 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_annotatePickerColorIndex_026b2030);
    local_148 = puVar5;
    _memset(auStack_190,0,0x40);
    puVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_penAttrBar_026b1de0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_2d0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
    if (local_2d0 != (undefined *)0x0) {
      lVar7 = *local_180;
      local_2d8 = (undefined *)0x0;
      do {
        do {
          if (*local_180 - lVar7 != 0) {
            _objc_enumerationMutation(*local_180 - lVar7,puVar5);
          }
          uVar8 = *(ulong *)(local_188 + (long)local_2d8 * 8);
          local_150 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_tag_026cab98);
          if ((199 < (long)uVar8) &&
             (uVar8 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_tag_026cab98)
             , (long)uVar8 <= (long)(local_148 + 200))) {
            uVar8 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_tag_026cab98);
            local_191 = (undefined *)(uVar8 - 200) == local_140;
            uVar10 = 0x4004000000000000;
            if (!(bool)local_191) {
              uVar10 = 0x3ff0000000000000;
            }
            uVar8 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar10);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            local_1a1 = 0;
            local_1b1 = 0;
            local_310 = PTR__OBJC_CLASS___UIColor_026cdf78;
            if ((local_191 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,0x3fd6666666666666,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithWhite_alpha__0269cf30);
              _objc_retainAutoreleasedReturnValue();
              local_1b1 = 1;
              local_1b0 = local_310;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
              _objc_retainAutoreleasedReturnValue();
              local_1a1 = 1;
              local_1a0 = local_310;
            }
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_CGColor_026ca470);
            uVar8 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            if ((local_1b1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1b0);
            }
            if ((local_1a1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1a0);
            }
            if ((local_191 & 1) == 0) {
              _memcpy(auStack_1e8,PTR__CGAffineTransformIdentity_025782d8,0x30);
            }
            else {
              _CGAffineTransformMakeScale(auStack_1e8,uVar1);
            }
            uVar8 = local_150;
            _memcpy(auStack_218,auStack_1e8,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_setTransform__026caad0,auStack_218);
            uVar8 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_tag_026cab98);
            if ((undefined *)(uVar8 - 200) == local_148) {
              puVar4 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_annotateColorIndex_026b2028);
              local_229 = 0;
              uVar3 = puVar4 == local_148;
              bVar2 = false;
              if ((bool)uVar3) {
                puVar4 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_customAnnotateColor_026b2038);
                _objc_retainAutoreleasedReturnValue();
                local_229 = uVar3;
                local_228 = puVar4;
                (*(code *)PTR__objc_release_02578630)(puVar4);
                uVar3 = local_229;
                bVar2 = puVar4 != (undefined *)0x0;
              }
              local_219 = bVar2;
              local_229 = uVar3;
              local_239 = 0;
              local_249 = 0;
              if ((bool)local_219 == false) {
                local_348 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (0x3feb333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                           PTR_s_colorWithWhite_alpha__0269cf30);
                _objc_retainAutoreleasedReturnValue();
                local_249 = 1;
                local_248 = local_348;
              }
              else {
                local_348 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_customAnnotateColor_026b2038);
                _objc_retainAutoreleasedReturnValue();
                local_239 = 1;
                local_238 = local_348;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_setBackgroundColor__026ca888,local_348);
              if ((local_249 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_248);
              }
              if ((local_239 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_238);
              }
              _memset(auStack_298,0,0x40);
              uVar8 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)(uVar8);
              local_370 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                         auStack_128,0x10);
              if (local_370 != 0) {
                lVar9 = *local_288;
                local_378 = 0;
                do {
                  do {
                    if (*local_288 - lVar9 != 0) {
                      _objc_enumerationMutation(*local_288 - lVar9,uVar6);
                    }
                    uVar8 = *(ulong *)(local_290 + local_378 * 8);
                    puVar4 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
                    local_258 = uVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
                    if ((uVar8 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_258,PTR_s_setHidden__026ca970,local_219 & 1);
                    }
                    local_378 = local_378 + 1;
                  } while (local_378 < local_370);
                  local_370 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                             auStack_128,0x10);
                  local_378 = 0;
                } while (local_370 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
          }
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                   0x10);
        local_2d8 = (undefined *)0x0;
      } while (local_2d0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

