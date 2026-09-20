// exportTheme @ 0171fa28

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropConsumedCodesDetailViewController::exportTheme(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_170;
  ulong local_168;
  char *local_130;
  cfstringStruct *local_128;
  uint local_11c;
  char *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_codes_026b3a80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_c0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_b0;
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_themeName_026b3a68);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar1;
  FUN_0171d9e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&::cf__);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _memset(auStack_110,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar6 = *local_100;
    local_170 = 0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,IVar1);
        }
        puVar2 = local_c8;
        uVar7 = *(undefined8 *)(local_108 + local_170 * 8);
        local_d0 = uVar7;
        FUN_0171e69c();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf___);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_appendString__0269ccb0,&cf_feU_);
  }
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = "WCUIAlertView";
  _objc_getClass();
  local_118 = pcVar4;
  if (pcVar4 != (char *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = &cf__Y6R0RjR4_g;
    pcVar5 = local_118;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_130 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,local_b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_show_0269d280);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Y6R_QQ_);
  }
  local_11c = (uint)(pcVar4 == (char *)0x0);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

