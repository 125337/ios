// FUN_007dc26c @ 007dc26c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007dc26c(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_3f0;
  ulong local_398;
  ulong local_390;
  ulong local_310;
  ulong local_2c0;
  ulong local_2b8;
  ulong local_278;
  ulong local_250;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  byte local_1d9;
  ulong local_1d8;
  byte local_1c9;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  long local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  ulong local_140;
  int local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  if ((local_130 == 0) || ((DAT_028cce69 & 1) == 0)) {
    local_134 = 1;
  }
  else {
    uVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    local_278 = uVar2;
    if (uVar2 == 0) {
      local_278 = local_130;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = local_278;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar3 = &cf_WCFinderRedDotRichTextView;
    _NSClassFromString();
    pcVar4 = &cf_MMBadgeView;
    local_158 = pcVar3;
    _NSClassFromString();
    local_160 = pcVar4;
    if ((local_158 == (cfstringStruct *)0x0) ||
       (uVar2 = local_140, FUN_007de93c(local_140,local_158), (uVar2 & 1) == 0)) {
      local_168 = 0;
      _memset(auStack_1b0,0,0x40);
      uVar2 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2b8 != 0) {
        lVar6 = *local_1a0;
        local_2c0 = 0;
        do {
          do {
            if (*local_1a0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar6,uVar2);
            }
            uVar7 = *(ulong *)(local_1a8 + local_2c0 * 8);
            puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            local_170 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
            uVar8 = local_170;
            if ((uVar7 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b8 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              local_1c9 = 0;
              local_1d9 = 0;
              local_310 = uVar8;
              if (uVar8 == 0) {
                local_310 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_attributedText_0269fcf8);
                _objc_retainAutoreleasedReturnValue();
                local_1c9 = 1;
                local_1c8 = local_310;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_1d8 = local_310;
              }
              local_1d9 = uVar8 == 0;
              (*(code *)PTR__objc_retain_02578638)();
              local_1c0 = local_310;
              if ((local_1d9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1d8);
              }
              if ((local_1c9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c8);
              }
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_1c0;
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
              if (((uVar8 & 1) == 0) ||
                 (uVar8 = local_1c0,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0), uVar8 == 0)
                 ) {
                local_134 = 3;
              }
              else {
                uVar1 = (uint)local_1c0;
                FUN_007d0a9c();
                if ((uVar1 & 1) == 0) {
                  uVar1 = (uint)local_1c0;
                  FUN_007d0d5c();
                  if ((uVar1 & 1) == 0) {
                    local_134 = 0;
                    goto LAB_007dc8d0;
                  }
                }
                _objc_storeStrong(&local_168,local_1c0);
                local_134 = 2;
              }
LAB_007dc8d0:
              _objc_storeStrong(&local_1c0);
              _objc_storeStrong(&local_1b8,0);
              if ((local_134 != 0) && (local_134 != 3)) goto LAB_007dc988;
            }
            local_2c0 = local_2c0 + 1;
          } while (local_2c0 < local_2b8);
          local_2b8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_2c0 = 0;
        } while (local_2b8 != 0);
      }
      local_134 = 0;
LAB_007dc988:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      lVar6 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
      if (lVar6 == 0) {
        local_134 = 1;
      }
      else {
        _memset(auStack_228,0,0x40);
        uVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_390 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_390 != 0) {
          lVar6 = *local_218;
          local_398 = 0;
          do {
            do {
              if (*local_218 - lVar6 != 0) {
                _objc_enumerationMutation(*local_218 - lVar6,uVar2);
              }
              uVar8 = *(ulong *)(local_220 + local_398 * 8);
              local_1e8 = uVar8;
              if ((local_160 == (cfstringStruct *)0x0) ||
                 ((*(code *)PTR__objc_msgSend_02578628)
                            (uVar8,PTR_s_isKindOfClass__0269cd68,local_160), (uVar8 & 1) == 0)) {
                uVar8 = local_1e8;
                puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
                uVar7 = local_1e8;
                if ((uVar8 & 1) != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_230 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  local_3f0 = uVar7;
                  if (uVar7 == 0) {
                    local_240 = local_230;
                    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_attributedText_0269fcf8);
                    _objc_retainAutoreleasedReturnValue();
                    local_250 = local_240;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_3f0 = local_250;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_238 = local_3f0;
                  if (uVar7 == 0) {
                    (*(code *)PTR__objc_release_02578630)(local_250);
                    (*(code *)PTR__objc_release_02578630)(local_240);
                  }
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                  uVar8 = local_238;
                  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
                  if (((uVar8 & 1) == 0) ||
                     (uVar8 = local_238,
                     (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0),
                     uVar8 == 0)) {
                    local_134 = 5;
                  }
                  else {
                    uVar8 = local_238;
                    FUN_007dd650();
                    if ((uVar8 & 1) == 0) {
                      (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_setHidden__026ca970,1);
                      local_134 = 0;
                    }
                    else {
                      local_134 = 5;
                    }
                  }
                  _objc_storeStrong(&local_238);
                  _objc_storeStrong(&local_230,0);
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setHidden__026ca970,1);
              }
              local_398 = local_398 + 1;
            } while (local_398 < local_390);
            local_390 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128
                       ,0x10);
            local_398 = 0;
          } while (local_390 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_134 = 0;
      }
      _objc_storeStrong(&local_168,0);
    }
    else {
      FUN_007dec58(local_140,local_158,local_160,1);
      local_134 = 1;
    }
    _objc_storeStrong(&local_140,0);
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

