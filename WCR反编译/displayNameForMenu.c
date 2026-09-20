// displayNameForMenu @ 00346ad0

/* Function Stack Size: 0x10 bytes */

ID WCRefineHomeAvatarStripPickerBridge::displayNameForMenu(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_270;
  undefined *local_268;
  cfstringStruct *local_240;
  cfstringStruct *local_230;
  cfstringStruct *local_220;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  byte local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  byte local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  char *local_118;
  cfstringStruct *local_110;
  int local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  SEL local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_1d0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_1d0;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = (cfstringStruct *)PTR_WCRefineGroupDataProvider_026ce540;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,&cf_m_textForNameLabel)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_f0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar7 = (ulong)pcVar1 & 0xffffffff;
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    uVar7 = 0;
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isEqualToString__0269ccc8,local_e0);
      uVar7 = (ulong)pcVar1 & 0xffffffff;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_hasPrefix__0269d320,&cf_wxid_);
        pcVar1 = local_f0;
        uVar7 = (ulong)pcVar2 & 0xffffffff;
        if (((ulong)pcVar2 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = pcVar1;
          uVar7 = 1;
          local_100 = 1;
          goto LAB_00346d44;
        }
      }
    }
  }
  local_100 = 0;
LAB_00346d44:
  _objc_storeStrong(uVar7,&local_f0,0);
  if (local_100 == 0) {
    pcVar4 = "MMServiceCenter";
    _objc_getClass();
    pcVar5 = "CContactMgr";
    local_110 = (cfstringStruct *)pcVar4;
    _objc_getClass();
    local_129 = 0;
    local_118 = pcVar5;
    if ((local_110 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_110,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_110,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar1 & 1) == 0)) {
      local_220 = (cfstringStruct *)0x0;
    }
    else {
      local_220 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_129 = 1;
      local_128 = local_220;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = local_220;
    if ((local_129 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    local_141 = 0;
    if ((local_120 == (cfstringStruct *)0x0) || (local_118 == (char *)0x0)) {
      local_230 = (cfstringStruct *)0x0;
    }
    else {
      local_230 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_getService__0269d170,local_118);
      _objc_retainAutoreleasedReturnValue();
      local_141 = 1;
      local_140 = local_230;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = local_230;
    if ((local_141 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_140);
    }
    local_159 = 0;
    if ((local_138 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_138,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar1 & 1) == 0)) {
      local_240 = (cfstringStruct *)0x0;
    }
    else {
      local_240 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_getContactByName__0269d178,local_e0);
      _objc_retainAutoreleasedReturnValue();
      local_159 = 1;
      local_158 = local_240;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_240;
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    _memset(auStack_1a8,0,0x40);
    local_c0 = &cf_m_nsRemark;
    local_b8 = &cf_m_nsNickName;
    local_b0 = &cf_getContactDisplayName;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_268 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_268 != (undefined *)0x0) {
      lVar8 = *local_198;
      local_270 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar8 != 0) {
            _objc_enumerationMutation(*local_198 - lVar8,puVar3);
          }
          uVar9 = *(undefined8 *)(local_1a0 + (long)local_270 * 8);
          local_168 = uVar9;
          _NSSelectorFromString();
          local_1b0 = uVar9;
          if ((local_150 != (cfstringStruct *)0x0) &&
             (pcVar1 = local_150,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_150,PTR_s_respondsToSelector__026ca818,uVar9),
             ((ulong)pcVar1 & 1) != 0)) {
            local_1b8 = (cfstringStruct *)0x0;
            pcVar2 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,local_1b0);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_1b8;
            local_1b8 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            pcVar1 = local_1b8;
            puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar6);
            if ((((ulong)pcVar1 & 1) == 0) ||
               (((pcVar1 = local_1b8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0),
                 pcVar1 == (cfstringStruct *)0x0 ||
                 (pcVar1 = local_1b8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_1b8,PTR_s_isEqualToString__0269ccc8,local_e0),
                 ((ulong)pcVar1 & 1) != 0)) ||
                (pcVar2 = local_1b8,
                (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_hasPrefix__0269d320,&cf_wxid_)
                , pcVar1 = local_1b8, ((ulong)pcVar2 & 1) != 0)))) {
              local_100 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_c8 = pcVar1;
              local_100 = 1;
            }
            _objc_storeStrong(&local_1b8,0);
            if (local_100 != 0) goto LAB_00347340;
          }
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_270 = (undefined *)0x0;
      } while (local_268 != (undefined *)0x0);
    }
    local_100 = 0;
LAB_00347340:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_e0;
    if (local_100 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = pcVar1;
      local_100 = 1;
    }
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

