// FUN_01aae4f8 @ 01aae4f8

void FUN_01aae4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  char *local_3c0;
  ulong local_360;
  ulong local_358;
  ulong local_340;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1e0;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  undefined *local_108;
  char *local_100;
  undefined *local_f8;
  char *local_f0 [3];
  undefined4 local_d4;
  char *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  pcVar1 = "MultiSelectContactsViewController";
  _objc_getClass();
  local_d0 = pcVar1;
  if ((local_b0 == 0) || (pcVar1 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    local_d4 = 1;
  }
  else {
    FUN_01acd938();
    pcVar1 = local_d0;
    _objc_alloc_init();
    puVar2 = PTR_WCRGroupContactPickerBridge_026cf340;
    local_f0[0] = pcVar1;
    _objc_alloc_init();
    local_f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPicker__026ab8b8,local_f0[0]);
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setCompletion__0269fdc8,local_c8);
    _objc_setAssociatedObject(local_f0[0],&DAT_028e4528,local_f8,1);
    FUN_01a9c680(local_f0[0],&cf_m_delegate,local_f8);
    pcVar1 = local_f0[0];
    pcVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1e0 = &cf_mRgS;
    }
    else {
      local_1e0 = local_b8;
    }
    FUN_01a9c680(pcVar1,&cf_m_viewcontrllerTitle,local_1e0);
    pcVar1 = local_f0[0];
    pcVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1f8 = &cf_mRgS;
    }
    else {
      local_1f8 = local_b8;
    }
    FUN_01a9c680(pcVar1,&cf_m_viewControllerTitle,local_1f8);
    FUN_01a9c680(local_f0[0],&cf_m_rightBarButtonTitle,&cf__b);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_bShowHistoryGroup);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_bShowContactTag);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_bShowSelectFromGroup);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_bKeepCurViewAfterSelect);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_onlyChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_bContainOpenIM);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_onlyImportChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xf);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_uiGroupScene);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1000);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_memberCountLimit);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_m_commonSearchScene);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_useNewSearchControllerAndBottomBar);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_f0[0];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar1,&cf_useNewSearchBarInChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = "CContactMgr";
    _objc_getClass();
    FUN_01aad60c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_100 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    _memset(auStack_150,0,0x40);
    if (local_c0 == 0) {
      local_340 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_340 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_358 = local_340;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_340,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10
              );
    if (local_358 != 0) {
      lVar4 = *local_140;
      local_360 = 0;
      do {
        do {
          if (*local_140 - lVar4 != 0) {
            _objc_enumerationMutation(*local_140 - lVar4,local_340);
          }
          uVar5 = *(ulong *)(local_148 + local_360 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_110 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((((uVar5 & 1) != 0) &&
              (uVar5 = local_110,
              (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0), uVar5 != 0))
             && (pcVar1 = local_100,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_100,PTR_s_respondsToSelector__026ca818,
                           PTR_s_getContactByName__0269d178), ((ulong)pcVar1 & 1) != 0)) {
            pcVar1 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_getContactByName__0269d178,local_110);
            _objc_retainAutoreleasedReturnValue();
            local_158 = pcVar1;
            if (pcVar1 != (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar1,local_110);
            }
            _objc_storeStrong(&local_158,0);
          }
          local_360 = local_360 + 1;
        } while (local_360 < local_358);
        local_358 = local_340;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_340,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        local_360 = 0;
      } while (local_358 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_340);
    FUN_01a9c680(local_f0[0],&cf_m_dicMultiSelect,local_108);
    local_3c0 = "MMUINavigationController";
    _objc_getClass();
    if (local_3c0 == (char *)0x0) {
      local_3c0 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_160 = local_3c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_3c0,PTR_s_initWithRootViewController__0269d2a0,local_f0[0]);
    lVar4 = local_b0;
    pcVar1 = local_f0[0];
    local_190 = PTR___NSConcreteStackBlock_02578660;
    local_188 = 0xc2000000;
    local_184 = 0;
    local_180 = FUN_01acd9a4;
    local_178 = &DAT_0257a800;
    local_168 = local_3c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar4,PTR_s_presentViewController_animated_c_0269d2b0,local_3c0,1,&local_190);
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(local_f0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

