// exportLogs @ 017243e0

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropLogViewController::exportLogs(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  byte local_1dc;
  ulong local_1c0;
  ulong local_1b8;
  ID local_190;
  char *local_180;
  undefined *local_178;
  uint local_16c;
  char *local_168;
  ID local_160;
  byte local_151;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  undefined1 local_119;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_displayLogs_026b3af8);
  _objc_retainAutoreleasedReturnValue();
  local_190 = IVar1;
  if (IVar1 == 0) {
    local_190 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_190;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_1b8 != 0) {
    lVar6 = *local_100;
    local_1c0 = 0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,IVar1);
        }
        uVar7 = *(ulong *)(local_108 + local_1c0 * 8);
        local_d0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        FUN_017212bc();
        _objc_retainAutoreleasedReturnValue();
        local_118 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar7);
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_success);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_119 = (undefined1)uVar7;
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_theme);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        FUN_017212bc();
        _objc_retainAutoreleasedReturnValue();
        local_128 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        FUN_017212bc();
        _objc_retainAutoreleasedReturnValue();
        local_130 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_targetWxid);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        FUN_017212bc();
        _objc_retainAutoreleasedReturnValue();
        local_138 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_targetAccount);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        FUN_017212bc();
        _objc_retainAutoreleasedReturnValue();
        local_140 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        FUN_017212bc();
        _objc_retainAutoreleasedReturnValue();
        local_148 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        FUN_017212bc();
        _objc_retainAutoreleasedReturnValue();
        local_150 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_stockRemoved);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1dc = 1;
        if ((uVar7 & 1) == 0) {
          uVar7 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsString__0269d0b0,&cf__NN_Rd)
          ;
          local_1dc = (byte)uVar7;
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar2 = local_c8;
        local_151 = local_1dc & 1;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_appendFormat__0269d148,&cf_____________________);
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_140,0);
        _objc_storeStrong(&local_138,0);
        _objc_storeStrong(&local_130,0);
        _objc_storeStrong(&local_128,0);
        _objc_storeStrong(&local_118,0);
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_1c0 = 0;
    } while (local_1b8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_c0;
  FUN_01724d2c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_c8;
  local_160 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_appendString__0269ccb0,&cf_fee_);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = "WCUIAlertView";
  _objc_getClass();
  local_168 = pcVar4;
  if (pcVar4 != (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Y6R0RjR4_g)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_168;
    local_178 = puVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_180 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,local_b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_show_0269d280);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_178,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Y6R_QQ_);
  }
  local_16c = (uint)(pcVar4 == (char *)0x0);
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

