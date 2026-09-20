// FUN_01bbcf8c @ 01bbcf8c

void FUN_01bbcf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  char *local_520;
  undefined *local_4a8;
  undefined *local_4a0;
  ulong local_3e8;
  ulong local_3e0;
  ulong local_3c8;
  ulong local_300;
  cfstringStruct *local_2f0;
  char *local_2c8;
  undefined *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  code *local_288;
  undefined *local_280;
  char *local_278;
  char *local_270;
  char *local_268;
  char *local_260;
  char *local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  char *local_208;
  char *local_1f8;
  char *local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  char *local_188 [3];
  undefined4 local_170;
  byte local_169;
  char *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  undefined8 local_148;
  ulong local_140;
  cfstringStruct *local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_138,param_2);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  pcVar1 = "MultiRoomContactSelectViewController";
  _objc_getClass();
  local_150 = pcVar1;
  FUN_01bc1dfc();
  _objc_retainAutoreleasedReturnValue();
  local_169 = 0;
  local_158 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar1 & 1) == 0)) {
    local_2c8 = (char *)0x0;
  }
  else {
    local_2c8 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_getContactByName__0269d178,local_138);
    _objc_retainAutoreleasedReturnValue();
    local_169 = 1;
    local_168 = local_2c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_2c8;
  if ((local_169 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_168);
  }
  if (((local_130 == 0) || (local_150 == (char *)0x0)) || (local_160 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    local_170 = 1;
  }
  else {
    FUN_01bc1f6c();
    pcVar1 = local_150;
    _objc_alloc_init();
    puVar2 = PTR_WCRMessageSyncRoomMemberPickerBridge_026cf418;
    local_188[0] = pcVar1;
    _objc_alloc_init();
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPicker__026ab8b8,local_188[0]);
    if (local_138 == (cfstringStruct *)0x0) {
      local_2f0 = &cf___;
    }
    else {
      local_2f0 = local_138;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setRoomID__026ab8c0,local_2f0);
    if (local_140 == 0) {
      local_300 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_300 = local_140;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setBaselineSelected__026c0598,local_300);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setCompletion__0269fdc8,local_148);
    _objc_setAssociatedObject(local_188[0],&DAT_028e45b8,local_190,1);
    FUN_01bc1fd8(local_188[0],&cf_m_roomContact,local_160);
    FUN_01bc1fd8(local_188[0],&cf_m_delegate,local_190);
    pcVar1 = local_188[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01bc1fd8(pcVar1,&cf_m_bMultiSelect);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_188[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01bc1fd8(pcVar1,&cf_m_bCustomMakeCell);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_188[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01bc1fd8(pcVar1,&cf_m_bSortByTime);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_188[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188[0],PTR_s_respondsToSelector__026ca818,PTR_s_setM_bShowSelf__026ab8c8);
    pcVar1 = local_188[0];
    if (((ulong)pcVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01bc1fd8(pcVar1,&cf_m_bShowSelf);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_setM_bShowSelf__026ab8c8,1);
    }
    pcVar3 = local_188[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188[0],PTR_s_respondsToSelector__026ca818,PTR_s_setM_scene__026ab8d0);
    pcVar1 = local_188[0];
    if (((ulong)pcVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01bc1fd8(pcVar1,&cf_m_scene);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_setM_scene__026ab8d0,0);
    }
    pcVar1 = local_188[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188[0],PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_setTitle__0269cef0,&cf_c__SS_T_);
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
    puVar5 = PTR_WCRefineMessageSyncRule_026ce708;
    local_198 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_chatRoomMemberIDsForRoom__026c0468,
               local_138);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _memset(auStack_1e8,0,0x40);
    if (local_140 == 0) {
      local_3c8 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_3c8 = local_140;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_3e0 = local_3c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_3c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10
              );
    if (local_3e0 != 0) {
      lVar6 = *local_1d8;
      local_3e8 = 0;
      do {
        do {
          if (*local_1d8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar6,local_3c8);
          }
          uVar7 = *(ulong *)(local_1e0 + local_3e8 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1a8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((((uVar7 & 1) != 0) &&
              (uVar7 = local_1a8,
              (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0), uVar7 != 0))
             && ((puVar2 = local_1a0,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0),
                 puVar2 == (undefined *)0x0 ||
                 (puVar2 = local_1a0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_1a0,PTR_s_containsObject__0269cbb8,local_1a8),
                 ((ulong)puVar2 & 1) != 0)))) {
            pcVar1 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_getContactByName__0269d178,local_1a8);
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = pcVar1;
            if (pcVar1 != (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar1,local_1a8);
            }
            _objc_storeStrong(&local_1f0,0);
          }
          local_3e8 = local_3e8 + 1;
        } while (local_3e8 < local_3e0);
        local_3e0 = local_3c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,
                   0x10);
        local_3e8 = 0;
      } while (local_3e0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_3c8);
    local_1f8 = (char *)0x0;
    pcVar3 = local_188[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188[0],PTR_s_valueForKey__0269d128,&cf_m_dicMultiSelect);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_1f8;
    local_1f8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_1f8 == (char *)0x0) {
      pcVar1 = "OrderedDictionary";
      _objc_getClass();
      local_208 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_dictionary_0269d240),
         ((ulong)pcVar1 & 1) == 0)) {
        pcVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_1f8;
        local_1f8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      else {
        pcVar3 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_1f8;
        local_1f8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      FUN_01bc1fd8(local_188[0],&cf_m_dicMultiSelect,local_1f8);
    }
    _memset(auStack_250,0,0x40);
    puVar2 = local_198;
    (*(code *)PTR__objc_retain_02578638)();
    local_4a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,0x10);
    if (local_4a0 != (undefined *)0x0) {
      lVar6 = *local_240;
      local_4a8 = (undefined *)0x0;
      do {
        do {
          if (*local_240 - lVar6 != 0) {
            _objc_enumerationMutation(*local_240 - lVar6,puVar2);
          }
          local_210 = *(undefined8 *)(local_248 + (long)local_4a8 * 8);
          pcVar3 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_respondsToSelector__026ca818,
                     PTR_s_safeSetObject_forKey__026ab8d8);
          pcVar1 = local_1f8;
          puVar4 = PTR_s_safeSetObject_forKey__026ab8d8;
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f8,PTR_s_respondsToSelector__026ca818,PTR_s_setObject_forKey__026ca9e8
                      );
            pcVar1 = local_1f8;
            if (((ulong)pcVar3 & 1) != 0) {
              puVar4 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_objectForKeyedSubscript__0269d098,local_210);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_setObject_forKey__026ca9e8,puVar4,local_210);
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
          }
          else {
            puVar5 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_objectForKeyedSubscript__0269d098,local_210);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar4,puVar5,local_210);
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          local_4a8 = local_4a8 + 1;
        } while (local_4a8 < local_4a0);
        local_4a0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,
                   0x10);
        local_4a8 = (undefined *)0x0;
      } while (local_4a0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_520 = "MMUINavigationController";
    _objc_getClass();
    if (local_520 == (char *)0x0) {
      local_520 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_258 = local_520;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_520,PTR_s_initWithRootViewController__0269d2a0,local_188[0]);
    pcVar1 = "MMUICommonUtil";
    local_260 = local_520;
    _objc_getClass();
    local_268 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,
                   PTR_s_getBarButtonWithTitle_target_act_026ab8e0), ((ulong)pcVar1 & 1) == 0)) {
      puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTitle_style_target_actio_0269cf00,&cf_Sm,0,local_190,
                 PTR_s_onCancelSelectContact_026ab8e8);
      pcVar1 = local_188[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      pcVar1 = local_268;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_268,PTR_s_getBarButtonWithTitle_target_act_026ab8e0,&cf_Sm,local_190,
                 PTR_s_onCancelSelectContact_026ab8e8,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_188[0];
      local_270 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_270,0);
    }
    lVar6 = local_130;
    pcVar3 = local_188[0];
    pcVar1 = local_260;
    local_298 = PTR___NSConcreteStackBlock_02578660;
    local_290 = 0xc2000000;
    local_28c = 0;
    local_288 = FUN_01bc2158;
    local_280 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_278 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar6,PTR_s_presentViewController_animated_c_0269d2b0,pcVar1,1,&local_298);
    _objc_storeStrong(&local_278);
    _objc_storeStrong(&local_260,0);
    _objc_storeStrong(&local_1f8,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(local_188,0);
    local_170 = 0;
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

