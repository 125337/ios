// isLikelySubpageControllerName: @ 01ccbb78

/* Function Stack Size: 0x18 bytes */

bool WCRefineProfileCardActionConfigViewController::isLikelySubpageControllerName_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  undefined *local_178;
  ulong local_170;
  int local_164;
  ulong local_160;
  SEL local_158;
  ID local_150;
  byte local_141;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  local_158 = param_2;
  local_150 = param_1;
  _objc_storeStrong(&local_160,param_3);
  uVar2 = local_160;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_141 = 0;
    local_164 = 1;
  }
  else {
    uVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = &cf_voice;
    local_b8 = &cf_redenvelop;
    local_b0 = &cf_css;
    local_a8 = &cf_disable;
    local_a0 = &cf_remsg;
    local_98 = &cf_autodownload;
    local_90 = &cf_special;
    local_88 = &cf_layout;
    local_80 = &cf_title;
    local_78 = &cf_profile;
    local_70 = &cf_session;
    local_68 = &cf_tabbar;
    local_60 = &cf_color;
    local_58 = &cf_animated;
    local_50 = &cf_group;
    local_48 = &cf_msg;
    local_40 = &cf_deepseek;
    local_38 = &cf_shield;
    local_30 = &cf_beautify;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,
               0x13);
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar1;
    _memset(auStack_1c0,0,0x40);
    puVar1 = local_178;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_140,0x10);
    if (local_1e8 != (undefined *)0x0) {
      lVar3 = *local_1b0;
      local_1f0 = (undefined *)0x0;
      do {
        do {
          if (*local_1b0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar3,puVar1);
          }
          local_180 = *(undefined8 *)(local_1b8 + (long)local_1f0 * 8);
          uVar2 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_containsString__0269d0b0,local_180);
          if ((uVar2 & 1) != 0) {
            local_141 = 1;
            local_164 = 1;
            goto LAB_01ccbed0;
          }
          local_1f0 = local_1f0 + 1;
        } while (local_1f0 < local_1e8);
        local_1e8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_140,
                   0x10);
        local_1f0 = (undefined *)0x0;
      } while (local_1e8 != (undefined *)0x0);
    }
    local_164 = 0;
LAB_01ccbed0:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_164 == 0) {
      local_141 = 0;
      local_164 = 1;
    }
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_141 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

