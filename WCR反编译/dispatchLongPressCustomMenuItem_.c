// dispatchLongPressCustomMenuItem: @ 0110290c

/* Function Stack Size: 0x18 bytes */

bool WCRefinePluginIconCatalog::dispatchLongPressCustomMenuItem_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a0;
  cfstringStruct *local_290;
  cfstringStruct *local_280;
  cfstringStruct *local_268;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  undefined *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined4 local_19c;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  cfstringStruct *local_158;
  cfstringStruct *local_150 [4];
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  SEL local_120;
  cfstringStruct *local_118;
  byte local_109;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_128 = (cfstringStruct *)0x0;
  local_120 = param_2;
  local_118 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_128,param_3);
  pcVar1 = DAT_028e3500;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar2 = local_128;
    _objc_getAssociatedObject(local_128,&DAT_028e3508);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_130;
    local_130 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_130;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_130, (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    pcVar1 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_menuItemTitle__026aee28,local_128);
    _objc_retainAutoreleasedReturnValue();
    local_150[0] = pcVar1;
    _memset(auStack_198,0,0x40);
    pcVar1 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_rawLongPressCustomItems_026aed90);
    _objc_retainAutoreleasedReturnValue();
    local_208 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_208 != (cfstringStruct *)0x0) {
      lVar7 = *local_188;
      local_210 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_188 - lVar7 != 0) {
            _objc_enumerationMutation(*local_188 - lVar7,pcVar1);
          }
          pcVar8 = *(cfstringStruct **)(local_190 + (long)local_210 * 8);
          local_158 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar8;
          FUN_010f4f48();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_150[0];
          FUN_010f4f48();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isEqualToString__0269ccc8);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar4 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_130;
            local_130 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_19c = 3;
            goto LAB_01102ce8;
          }
          local_210 = (cfstringStruct *)((long)&local_210->field0_0x0 + 1);
        } while (local_210 < local_208);
        local_208 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                   0x10);
        local_210 = (cfstringStruct *)0x0;
      } while (local_208 != (cfstringStruct *)0x0);
    }
    local_19c = 0;
LAB_01102ce8:
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_storeStrong(local_150,0);
  }
  pcVar2 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_118,PTR_s_longPressCustomEntryByID__026aedf8,local_130);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_130;
  local_1a8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__INUSyNX__W);
    local_109 = 0;
    local_19c = 1;
  }
  else {
    pcVar2 = &cf_lp_custom_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_lp_custom_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_108 = _WCRChatToolbarActionKey;
    local_1b0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_268 = &cf_lp;
    }
    else {
      local_268 = local_1b0;
    }
    pcVar1 = &cf_wcr_custom_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_wcr_custom_,PTR_s_stringByAppendingString__0269d398,local_268);
    _objc_retainAutoreleasedReturnValue();
    local_100 = _WCRChatToolbarTitleKey;
    pcVar2 = local_1a8;
    local_d8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    local_280 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_280 = &::cf___;
    }
    local_d0 = local_280;
    local_f8 = _WCRChatToolbarIconKey;
    pcVar4 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
    _objc_retainAutoreleasedReturnValue();
    local_290 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_290 = &cf_icons_outlined_more_circle;
    }
    local_c8 = local_290;
    local_f0 = _WCRChatToolbarCustomKindKey;
    pcVar5 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customKind);
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_2a0 = &cf_controller;
    }
    local_c0 = local_2a0;
    local_e8 = _WCRChatToolbarCustomPayloadKey;
    pcVar8 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customPayload);
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = pcVar8;
    if (pcVar8 == (cfstringStruct *)0x0) {
      local_2b0 = &::cf___;
    }
    local_b8 = local_2b0;
    local_e0 = _WCRChatToolbarSourceKey;
    local_b0 = &cf__u7b_IN;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_108,6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1b8 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonToolsHelper_026ce448,PTR_s_hideMenuController_026aa7a0);
    puVar3 = local_1b8;
    _WCRChatToolbarDispatch(local_1b8,DAT_028e3510);
    local_1b9 = (byte)puVar3;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = local_1b8;
      _WCRChatToolbarDispatchFailureMessage();
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      if (puVar3 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_1c8);
      }
      _objc_storeStrong(&local_1c8,0);
    }
    local_109 = local_1b9 & 1;
    local_19c = 1;
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_1b0,0);
  }
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_109 & 1;
}

