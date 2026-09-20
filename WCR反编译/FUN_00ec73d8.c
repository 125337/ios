// FUN_00ec73d8 @ 00ec73d8

byte FUN_00ec73d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined *puVar9;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a0;
  cfstringStruct *local_290;
  cfstringStruct *local_280;
  ulong local_248;
  ulong local_240;
  byte local_1c4;
  cfstringStruct *local_1c0;
  undefined *local_190;
  byte local_181;
  ulong local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  undefined *local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined4 local_c4;
  ulong local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_a9 = 0;
    local_c4 = 1;
    goto LAB_00ec8438;
  }
  pcVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1c0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_1c0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_plugin);
  pcVar2 = local_d8;
  local_e9 = 0;
  local_1c4 = 1;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = &cf_wcr_attach_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_wcr_attach_,PTR_s_stringByAppendingString__0269d398,&cf_plugin_);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasPrefix__0269d320);
    local_1c4 = (byte)pcVar2;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  local_d9 = local_1c4 & 1;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_d0;
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_toolbar);
  if ((((ulong)pcVar2 & 1) == 0) && ((local_d9 & 1) == 0)) {
    pcVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_custom);
    pcVar2 = local_d8;
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = pcVar2;
      pcVar2 = local_d8;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_rangeOfString__0269d838,&cf_custom_);
      local_170 = pcVar2;
      local_168 = puVar1;
      if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
        pcVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_hasPrefix__0269d320,&cf_wcr_custom_);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_2b8 = &cf_attach;
          }
          else {
            local_2b8 = local_d8;
          }
          pcVar2 = &cf_wcr_custom_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_wcr_custom_,PTR_s_stringByAppendingString__0269d398,local_2b8);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_160;
          local_160 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
      }
      else {
        pcVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_substringFromIndex__0269d120,puVar1 + (long)pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_178 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_2b0 = &cf_attach;
        }
        else {
          local_2b0 = local_178;
        }
        pcVar2 = &cf_wcr_custom_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_wcr_custom_,PTR_s_stringByAppendingString__0269d398,local_2b0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_160;
        local_160 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        _objc_storeStrong(&local_178,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_160,
                 _WCRChatToolbarActionKey);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_2c8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_2c8 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_2c8,
                 _WCRChatToolbarTitleKey);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      local_2d8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_2d8 = &cf_icons_outlined_more_circle;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_2d8,
                 _WCRChatToolbarIconKey);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customKind);
      _objc_retainAutoreleasedReturnValue();
      local_2e8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_2e8 = &cf_auto;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_2e8,
                 _WCRChatToolbarCustomKindKey);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customPayload);
      _objc_retainAutoreleasedReturnValue();
      local_2f8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_2f8 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_2f8,
                 _WCRChatToolbarCustomPayloadKey);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,&cf__u7b_IN,
                 _WCRChatToolbarSourceKey);
      _objc_storeStrong(&local_160,0);
      goto LAB_00ec80e8;
    }
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = &cf_wcr_attach_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_wcr_attach_,PTR_s_stringByAppendingString__0269d398,&cf_toolbar_);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &cf_wcr_attach_;
      local_108 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_wcr_attach_,PTR_s_stringByAppendingString__0269d398,&cf_plugin_);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_d8;
      local_110 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_hasPrefix__0269d320,local_108);
      pcVar2 = local_d8;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_hasPrefix__0269d320,local_110);
        pcVar2 = local_d8;
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = &cf_wcr_builtin_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_wcr_builtin_,PTR_s_stringByAppendingString__0269d398);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_100;
          local_100 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
      }
      else {
        pcVar3 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_100;
        local_100 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      _objc_storeStrong(&local_110);
      _objc_storeStrong(&local_108,0);
    }
    _memset(auStack_158,0,0x40);
    uVar5 = local_c0;
    _WCRChatToolbarRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    local_240 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != 0) {
      lVar8 = *local_148;
      local_248 = 0;
      do {
        do {
          if (*local_148 - lVar8 != 0) {
            _objc_enumerationMutation(*local_148 - lVar8,uVar5);
          }
          puVar9 = *(undefined **)(local_150 + local_248 * 8);
          local_118 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar9);
          if (((ulong)puVar1 & 1) != 0) {
            puVar9 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_mutableCopy_0269d8a0);
            puVar1 = local_f8;
            local_f8 = puVar9;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            local_c4 = 2;
            goto LAB_00ec7a9c;
          }
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    local_c4 = 0;
LAB_00ec7a9c:
    (*(code *)PTR__objc_release_02578630)(uVar5);
    puVar1 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      if (local_100 == (cfstringStruct *)0x0) {
        local_280 = &cf___;
      }
      else {
        local_280 = local_100;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_280,
                 _WCRChatToolbarActionKey);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_290 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_290 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_290,
                 _WCRChatToolbarTitleKey);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      local_2a0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_2a0 = &cf_icons_outlined_add;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_2a0,
                 _WCRChatToolbarIconKey);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_100,0);
LAB_00ec80e8:
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customTitle);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,_WCRChatToolbarTitleKey
                );
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customTitle);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,
                 _WCRChatToolbarCustomTitleKey);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customIcon);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,_WCRChatToolbarIconKey)
      ;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customIcon);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,
                 _WCRChatToolbarCustomIconKey);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    uVar5 = local_c0;
    FUN_00ecb628();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_f8;
    local_180 = uVar5;
    _WCRChatToolbarDispatch(local_f8,uVar5);
    local_181 = (byte)puVar1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_f8;
      _WCRChatToolbarDispatchFailureMessage();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = "WCRefineHelper";
      local_190 = puVar1;
      _objc_getClass();
      puVar1 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
      if ((puVar1 != (undefined *)0x0) &&
         (pcVar7 = pcVar6,
         (*(code *)PTR__objc_msgSend_02578628)
                   (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_showModernToast__0269ce78),
         ((ulong)pcVar7 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showModernToast__0269ce78,local_190);
      }
      _objc_storeStrong(&local_190,0);
    }
    local_a9 = local_181 & 1;
    local_c4 = 1;
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
LAB_00ec8438:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

