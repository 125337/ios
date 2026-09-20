// refreshAnnotateTextFillSelectionUI @ 01666888

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::refreshAnnotateTextFillSelectionUI(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_288;
  undefined *local_250;
  undefined *local_218;
  undefined *local_210;
  undefined *local_1c8;
  undefined *local_1b8;
  undefined1 auStack_198 [48];
  undefined1 auStack_168 [55];
  byte local_131;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar1 = DAT_023397a0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_penAttrBar_026b1de0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    puVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_annotateTextFillIndex_026b2060);
    puVar4 = local_b0;
    local_c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_annotateTextFillPickerIndex_026b2058);
    local_c8 = puVar4;
    _memset(auStack_110,0,0x40);
    puVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_penAttrBar_026b1de0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_210 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_210 != (undefined *)0x0) {
      lVar5 = *local_100;
      local_218 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,puVar4);
          }
          lVar6 = *(long *)(local_108 + (long)local_218 * 8);
          local_d0 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_tag_026cab98);
          if ((399 < lVar6) &&
             (lVar6 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tag_026cab98),
             lVar6 <= (long)(local_c8 + 400))) {
            lVar6 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tag_026cab98);
            local_111 = (undefined *)(lVar6 + -400) == local_c0;
            uVar7 = 0x4004000000000000;
            if (!(bool)local_111) {
              uVar7 = 0x3ff0000000000000;
            }
            lVar6 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar7);
            (*(code *)PTR__objc_release_02578630)(lVar6);
            local_121 = 0;
            local_131 = 0;
            local_250 = PTR__OBJC_CLASS___UIColor_026cdf78;
            if ((local_111 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,0x3fd6666666666666,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithWhite_alpha__0269cf30);
              _objc_retainAutoreleasedReturnValue();
              local_131 = 1;
              local_130 = local_250;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
              _objc_retainAutoreleasedReturnValue();
              local_121 = 1;
              local_120 = local_250;
            }
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_CGColor_026ca470);
            lVar6 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar6);
            if ((local_131 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_130);
            }
            if ((local_121 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_120);
            }
            if ((local_111 & 1) == 0) {
              _memcpy(auStack_168,PTR__CGAffineTransformIdentity_025782d8,0x30);
            }
            else {
              _CGAffineTransformMakeScale(auStack_168,uVar1);
            }
            lVar6 = local_d0;
            _memcpy(auStack_198,auStack_168,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_setTransform__026caad0,auStack_198);
            lVar6 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tag_026cab98);
            if ((undefined *)(lVar6 + -400) == local_c8) {
              puVar3 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_annotateTextFillIndex_026b2060);
              bVar2 = false;
              if (puVar3 == local_c8) {
                puVar3 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b0,PTR_s_customAnnotateTextFillColor_026b2068);
                _objc_retainAutoreleasedReturnValue();
                bVar2 = puVar3 != (undefined *)0x0;
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              if (!bVar2) {
                local_288 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (0x3feb333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                           PTR_s_colorWithWhite_alpha__0269cf30);
                _objc_retainAutoreleasedReturnValue();
                local_1c8 = local_288;
              }
              else {
                local_288 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b0,PTR_s_customAnnotateTextFillColor_026b2068);
                _objc_retainAutoreleasedReturnValue();
                local_1b8 = local_288;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_setBackgroundColor__026ca888,local_288);
              if (!bVar2) {
                (*(code *)PTR__objc_release_02578630)(local_1c8);
              }
              else {
                (*(code *)PTR__objc_release_02578630)(local_1b8);
              }
            }
          }
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_218 = (undefined *)0x0;
      } while (local_210 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

