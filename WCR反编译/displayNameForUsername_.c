// displayNameForUsername: @ 01adc308

/* Function Stack Size: 0x18 bytes */

ID WCRefineHomeAvatarStripEditorViewController::displayNameForUsername_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b0;
  undefined *local_270;
  undefined *local_268;
  cfstringStruct *local_240;
  cfstringStruct *local_230;
  cfstringStruct *local_220;
  cfstringStruct *local_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  byte local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  byte local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  char *local_128;
  cfstringStruct *local_120;
  undefined *local_100;
  cfstringStruct *local_f8;
  undefined *local_f0;
  int local_e4;
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
  local_e0 = (cfstringStruct *)0x0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = &::cf___;
    local_e4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_f8 = (cfstringStruct *)0x0;
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_valueForKey__0269d128,&cf_m_textForNameLabel);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_100 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar2 & 1) != 0) &&
       (puVar2 = local_100, (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0),
       puVar2 != (undefined *)0x0)) {
      _objc_storeStrong(puVar2,&local_f8,local_100);
    }
    _objc_storeStrong(&local_100,0);
    pcVar1 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
    if (((pcVar1 == (cfstringStruct *)0x0) ||
        (pcVar1 = local_f8,
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_isEqualToString__0269ccc8,local_e0),
        ((ulong)pcVar1 & 1) != 0)) ||
       (pcVar4 = local_f8,
       (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hasPrefix__0269d320,&cf_wxid_),
       pcVar1 = local_f8, ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = "MMServiceCenter";
      _objc_getClass();
      pcVar6 = "CContactMgr";
      local_120 = (cfstringStruct *)pcVar5;
      _objc_getClass();
      local_139 = 0;
      local_128 = pcVar6;
      if ((local_120 == (cfstringStruct *)0x0) ||
         (pcVar1 = local_120,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_120,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
         ((ulong)pcVar1 & 1) == 0)) {
        local_220 = (cfstringStruct *)0x0;
      }
      else {
        local_220 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        local_138 = local_220;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = local_220;
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      local_151 = 0;
      if ((local_130 == (cfstringStruct *)0x0) || (local_128 == (char *)0x0)) {
        local_230 = (cfstringStruct *)0x0;
      }
      else {
        local_230 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_getService__0269d170,local_128);
        _objc_retainAutoreleasedReturnValue();
        local_151 = 1;
        local_150 = local_230;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_230;
      if ((local_151 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      local_169 = 0;
      if ((local_148 == (cfstringStruct *)0x0) ||
         (pcVar1 = local_148,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_148,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
         ((ulong)pcVar1 & 1) == 0)) {
        local_240 = (cfstringStruct *)0x0;
      }
      else {
        local_240 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_getContactByName__0269d178,local_e0);
        _objc_retainAutoreleasedReturnValue();
        local_169 = 1;
        local_168 = local_240;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = local_240;
      if ((local_169 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_168);
      }
      _memset(auStack_1b8,0,0x40);
      local_c0 = &cf_m_nsRemark;
      local_b8 = &cf_m_nsNickName;
      local_b0 = &cf_getContactDisplayName;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_268 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_268 != (undefined *)0x0) {
        lVar7 = *local_1a8;
        local_270 = (undefined *)0x0;
        do {
          do {
            if (*local_1a8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1a8 - lVar7,puVar2);
            }
            uVar8 = *(undefined8 *)(local_1b0 + (long)local_270 * 8);
            local_178 = uVar8;
            _NSSelectorFromString();
            local_1c0 = uVar8;
            if ((local_160 != (cfstringStruct *)0x0) &&
               (pcVar1 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_160,PTR_s_respondsToSelector__026ca818,uVar8),
               ((ulong)pcVar1 & 1) != 0)) {
              local_1c8 = (cfstringStruct *)0x0;
              pcVar4 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,local_1c0);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_1c8;
              local_1c8 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              pcVar1 = local_1c8;
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((((ulong)pcVar1 & 1) == 0) ||
                 (((pcVar1 = local_1c8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0),
                   pcVar1 == (cfstringStruct *)0x0 ||
                   (pcVar1 = local_1c8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_1c8,PTR_s_isEqualToString__0269ccc8,local_e0),
                   ((ulong)pcVar1 & 1) != 0)) ||
                  (pcVar4 = local_1c8,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c8,PTR_s_hasPrefix__0269d320,&cf_wxid_), pcVar1 = local_1c8,
                  ((ulong)pcVar4 & 1) != 0)))) {
                local_e4 = 0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_c8 = pcVar1;
                local_e4 = 1;
              }
              _objc_storeStrong(&local_1c8,0);
              if (local_e4 != 0) goto LAB_01adcb70;
            }
            local_270 = local_270 + 1;
          } while (local_270 < local_268);
          local_268 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                     0x10);
          local_270 = (undefined *)0x0;
        } while (local_268 != (undefined *)0x0);
      }
      local_e4 = 0;
LAB_01adcb70:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_e4 == 0) {
        pcVar1 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          if (local_e0 == (cfstringStruct *)0x0) {
            local_2c0 = &::cf___;
          }
          else {
            local_2c0 = local_e0;
          }
          local_2b0 = local_2c0;
        }
        else {
          local_2b0 = local_f8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = local_2b0;
        local_e4 = 1;
      }
      _objc_storeStrong(&local_160);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_130,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = pcVar1;
      local_e4 = 1;
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

