// presentMemberPickerFromViewController:roomID:title:selectedMembers:completion: @ 00ee9700

/* Function Stack Size: 0x38 bytes */

void WCRefineChatRoomPicker::
     presentMemberPickerFromViewController_roomID_title_selectedMembers_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint local_69c;
  char *local_620;
  undefined *local_5a8;
  undefined *local_5a0;
  char *local_578;
  ulong local_508;
  ulong local_500;
  ulong local_4e8;
  cfstringStruct *local_4b0;
  cfstringStruct *local_408;
  char *local_3e0;
  undefined *local_340;
  undefined4 local_338;
  undefined4 local_334;
  code *local_330;
  undefined *local_328;
  char *local_320;
  byte local_311;
  long local_310;
  long local_308;
  char *local_300;
  char *local_2f8;
  char *local_2f0;
  char *local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  undefined8 local_2a0;
  byte local_291;
  char *local_290;
  byte local_281;
  char *local_280;
  char *local_278;
  char *local_270;
  char *local_268;
  long local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  long local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  char *local_1f8 [3];
  byte local_1d9;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  undefined4 local_1b4;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  long local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  ulong local_178;
  undefined8 local_170;
  ID local_168;
  undefined8 local_160;
  ulong local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  long local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_148,param_4);
  local_150 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_150,param_5);
  local_158 = 0;
  _objc_storeStrong(&local_158,param_6);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_7);
  puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar6 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = local_140;
    local_1b0 = PTR___NSConcreteStackBlock_02578660;
    local_1a8 = 0xc2000000;
    local_1a4 = 0;
    local_1a0 = FUN_00eead70;
    local_198 = &DAT_02581ff0;
    local_168 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_148;
    local_190 = lVar10;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar8 = local_150;
    local_188 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_158;
    local_180 = pcVar8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_160;
    local_178 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar1;
    _dispatch_async(puVar6,&local_1b0);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_1b4 = 1;
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_190,0);
  }
  else {
    pcVar5 = "MultiRoomContactSelectViewController";
    _objc_getClass();
    local_1c0 = pcVar5;
    FUN_00eeae68();
    _objc_retainAutoreleasedReturnValue();
    local_1d9 = 0;
    local_1c8 = pcVar5;
    if ((pcVar5 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar5 & 1) == 0)) {
      local_3e0 = (char *)0x0;
    }
    else {
      local_3e0 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_getContactByName__0269d178,local_148);
      _objc_retainAutoreleasedReturnValue();
      local_1d9 = 1;
      local_1d8 = local_3e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = local_3e0;
    if ((local_1d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
    if (((local_140 == 0) || (local_1c0 == (char *)0x0)) || (local_1d0 == (char *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_1b4 = 1;
    }
    else {
      FUN_00eeafd8();
      pcVar5 = local_1c0;
      _objc_alloc_init();
      puVar6 = PTR_WCRChatRoomMemberPickerBridge_026ceb38;
      local_1f8[0] = pcVar5;
      _objc_alloc_init();
      local_200 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setPicker__026ab8b8,local_1f8[0]);
      if (local_148 == (cfstringStruct *)0x0) {
        local_408 = &::cf___;
      }
      else {
        local_408 = local_148;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setRoomID__026ab8c0,local_408);
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setCompletion__0269fdc8,local_160);
      _objc_setAssociatedObject(local_1f8[0],DAT_0280e060,local_200,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8[0],PTR_s_setValue_forKey__0269d300,local_1d0,&cf_m_roomContact);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8[0],PTR_s_setValue_forKey__0269d300,local_200,&cf_m_delegate);
      pcVar5 = local_1f8[0];
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_bMultiSelect);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar5 = local_1f8[0];
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_bCustomMakeCell);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar5 = local_1f8[0];
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_bSortByTime);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar7 = local_1f8[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8[0],PTR_s_respondsToSelector__026ca818,PTR_s_setM_bShowSelf__026ab8c8);
      pcVar5 = local_1f8[0];
      if (((ulong)pcVar7 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_bShowSelf);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8[0],PTR_s_setM_bShowSelf__026ab8c8,0);
      }
      pcVar7 = local_1f8[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8[0],PTR_s_respondsToSelector__026ca818,PTR_s_setM_scene__026ab8d0);
      pcVar5 = local_1f8[0];
      if (((ulong)pcVar7 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_scene);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8[0],PTR_s_setM_scene__026ab8d0,0);
      }
      pcVar7 = local_1f8[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8[0],PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
      pcVar5 = local_1f8[0];
      if (((ulong)pcVar7 & 1) != 0) {
        pcVar8 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_4b0 = &cf_c__S;
        }
        else {
          local_4b0 = local_150;
        }
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_setTitle__0269cef0,local_4b0);
      }
      puVar6 = PTR__OBJC_CLASS___NSSet_026ce150;
      pcVar8 = local_148;
      FUN_00eeb044();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setWithArray__0269d9a0);
      _objc_retainAutoreleasedReturnValue();
      local_208 = puVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_210 = puVar6;
      _memset(auStack_258,0,0x40);
      if (local_158 == 0) {
        local_4e8 = *(ulong *)PTR____NSArray0___02578280;
      }
      else {
        local_4e8 = local_158;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_500 = local_4e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4e8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                 0x10);
      if (local_500 != 0) {
        lVar10 = *local_248;
        local_508 = 0;
        do {
          do {
            if (*local_248 - lVar10 != 0) {
              _objc_enumerationMutation(*local_248 - lVar10,local_4e8);
            }
            lVar11 = *(long *)(local_250 + local_508 * 8);
            local_218 = lVar11;
            FUN_00eeb5a8();
            _objc_retainAutoreleasedReturnValue();
            local_260 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_length_0269cca0);
            if (lVar11 == 0) {
              local_1b4 = 4;
            }
            else {
              puVar6 = local_208;
              (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
              if ((puVar6 == (undefined *)0x0) ||
                 (puVar6 = local_208,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_208,PTR_s_containsObject__0269cbb8,local_260),
                 ((ulong)puVar6 & 1) != 0)) {
                pcVar5 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c8,PTR_s_getContactByName__0269d178,local_260);
                _objc_retainAutoreleasedReturnValue();
                local_268 = pcVar5;
                if (pcVar5 != (char *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_210,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar5,local_260)
                  ;
                }
                _objc_storeStrong(&local_268,0);
                local_1b4 = 0;
              }
              else {
                local_1b4 = 4;
              }
            }
            _objc_storeStrong(&local_260,0);
            local_508 = local_508 + 1;
          } while (local_508 < local_500);
          local_500 = local_4e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4e8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,
                     auStack_a8,0x10);
          local_508 = 0;
        } while (local_500 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(local_4e8);
      pcVar5 = local_1f8[0];
      FUN_00eeb684(local_1f8[0],&cf_m_dicMultiSelect);
      _objc_retainAutoreleasedReturnValue();
      local_270 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "OrderedDictionary";
        _objc_getClass();
        local_281 = 0;
        local_291 = 0;
        local_278 = pcVar5;
        if ((pcVar5 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_dictionary_0269d240),
           ((ulong)pcVar5 & 1) == 0)) {
          local_578 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          local_291 = 1;
          local_290 = local_578;
        }
        else {
          local_578 = local_278;
          (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          local_281 = 1;
          local_280 = local_578;
        }
        _objc_storeStrong(&local_270,local_578);
        if ((local_291 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_290);
        }
        if ((local_281 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_280);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f8[0],PTR_s_setValue_forKey__0269d300,local_270,&cf_m_dicMultiSelect);
      }
      _memset(auStack_2e0,0,0x40);
      puVar6 = local_210;
      (*(code *)PTR__objc_retain_02578638)();
      local_5a0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_128,0x10
                );
      if (local_5a0 != (undefined *)0x0) {
        lVar10 = *local_2d0;
        local_5a8 = (undefined *)0x0;
        do {
          do {
            if (*local_2d0 - lVar10 != 0) {
              _objc_enumerationMutation(*local_2d0 - lVar10,puVar6);
            }
            local_2a0 = *(undefined8 *)(local_2d8 + (long)local_5a8 * 8);
            pcVar7 = local_270;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_270,PTR_s_respondsToSelector__026ca818,
                       PTR_s_safeSetObject_forKey__026ab8d8);
            pcVar5 = local_270;
            puVar4 = PTR_s_safeSetObject_forKey__026ab8d8;
            if (((ulong)pcVar7 & 1) == 0) {
              pcVar7 = local_270;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_270,PTR_s_respondsToSelector__026ca818,
                         PTR_s_setObject_forKey__026ca9e8);
              pcVar5 = local_270;
              if (((ulong)pcVar7 & 1) != 0) {
                puVar4 = local_210;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_210,PTR_s_objectForKeyedSubscript__0269d098,local_2a0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar5,PTR_s_setObject_forKey__026ca9e8,puVar4,local_2a0);
                (*(code *)PTR__objc_release_02578630)(puVar4);
              }
            }
            else {
              puVar9 = local_210;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_210,PTR_s_objectForKeyedSubscript__0269d098,local_2a0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar4,puVar9,local_2a0);
              (*(code *)PTR__objc_release_02578630)(puVar9);
            }
            local_5a8 = local_5a8 + 1;
          } while (local_5a8 < local_5a0);
          local_5a0 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_128,
                     0x10);
          local_5a8 = (undefined *)0x0;
        } while (local_5a0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_620 = "MMUINavigationController";
      _objc_getClass();
      if (local_620 == (char *)0x0) {
        local_620 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      }
      local_2e8 = local_620;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_620,PTR_s_initWithRootViewController__0269d2a0,local_1f8[0]);
      pcVar5 = "MMUICommonUtil";
      local_2f0 = local_620;
      _objc_getClass();
      local_2f8 = pcVar5;
      if ((pcVar5 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_respondsToSelector__026ca818,
                     PTR_s_getBarButtonWithTitle_target_act_026ab8e0), ((ulong)pcVar5 & 1) == 0)) {
        puVar6 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_initWithTitle_style_target_actio_0269cf00,&cf_Sm,0,local_200,
                   PTR_s_onCancelSelectContact_026ab8e8);
        pcVar5 = local_1f8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8[0],PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        pcVar5 = local_2f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2f8,PTR_s_getBarButtonWithTitle_target_act_026ab8e0,&cf_Sm,local_200,
                   PTR_s_onCancelSelectContact_026ab8e8,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_1f8[0];
        local_300 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8[0],PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        _objc_storeStrong(&local_300,0);
      }
      lVar10 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_308 = lVar10;
      while( true ) {
        local_311 = 0;
        lVar10 = local_308;
        (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        local_69c = 0;
        if (lVar10 != 0) {
          lVar11 = local_308;
          (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          local_311 = 1;
          local_310 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_69c = (uint)lVar11 ^ 1;
        }
        if ((local_311 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_310);
        }
        (*(code *)PTR__objc_release_02578630)(lVar10);
        local_320 = local_1f8[0];
        pcVar5 = local_2f0;
        lVar10 = local_308;
        if ((local_69c & 1) == 0) break;
        lVar11 = local_308;
        (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = local_308;
        local_308 = lVar11;
        (*(code *)PTR__objc_release_02578630)(lVar10);
      }
      local_340 = PTR___NSConcreteStackBlock_02578660;
      local_338 = 0xc2000000;
      local_334 = 0;
      local_330 = FUN_00eeb7cc;
      local_328 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar10,PTR_s_presentViewController_animated_c_0269d2b0,pcVar5,1,&local_340);
      _objc_storeStrong(&local_320);
      _objc_storeStrong(&local_308,0);
      _objc_storeStrong(&local_2f0,0);
      _objc_storeStrong(&local_270,0);
      _objc_storeStrong(&local_210,0);
      _objc_storeStrong(&local_208,0);
      _objc_storeStrong(&local_200,0);
      _objc_storeStrong(local_1f8,0);
      local_1b4 = 0;
    }
    _objc_storeStrong(&local_1d0);
    _objc_storeStrong(&local_1c8,0);
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

