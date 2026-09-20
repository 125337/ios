// FUN_01ada098 @ 01ada098

void FUN_01ada098(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *local_380;
  cfstringStruct *local_378;
  ulong local_2c8;
  ulong local_2c0;
  long local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  long local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  long local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  long local_188;
  undefined *local_180;
  ulong local_178;
  undefined *local_170 [4];
  ulong local_150;
  ulong local_148;
  undefined4 local_13c;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_13c = 1;
    local_130 = puVar2;
  }
  else {
    FUN_01adb218();
    _objc_retainAutoreleasedReturnValue();
    local_150 = 0;
    local_148 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if ((uVar1 & 1) != 0) {
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_getContactByName__0269d178,local_138);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_150;
      local_150 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_150 == 0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_13c = 1;
      local_130 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_150;
      local_170[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_valueForKey__0269d128,&cf_m_nsChatRoomMemList);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_178 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = local_178, (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
         uVar1 != 0)) {
        puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
        _objc_retainAutoreleasedReturnValue();
        local_180 = puVar2;
        _memset(auStack_1c8,0,0x40);
        uVar1 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_178,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_180);
        _objc_retainAutoreleasedReturnValue();
        local_2c0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2c0 != 0) {
          lVar7 = *local_1b8;
          local_2c8 = 0;
          do {
            do {
              if (*local_1b8 - lVar7 != 0) {
                _objc_enumerationMutation(*local_1b8 - lVar7,uVar1);
              }
              lVar8 = *(long *)(local_1c0 + local_2c8 * 8);
              puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              local_188 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (lVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_1d0 = lVar8;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              lVar8 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
              if (lVar8 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170[0],PTR_s_addObject__0269d180,local_1d0);
              }
              _objc_storeStrong(&local_1d0,0);
              local_2c8 = local_2c8 + 1;
            } while (local_2c8 < local_2c0);
            local_2c0 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,
                       0x10);
            local_2c8 = 0;
          } while (local_2c0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        _objc_storeStrong(&local_180,0);
      }
      _objc_storeStrong(&local_178,0);
      puVar4 = local_170[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_170[0],PTR_s_count_0269cfe0);
      puVar2 = local_170[0];
      if (puVar4 == (undefined *)0x0) {
        pcVar5 = &cf_CContact;
        _NSClassFromString(0);
        pcVar6 = &cf_getChatRoomMemberWithoutMyself_;
        local_1e0 = pcVar5;
        _NSSelectorFromString();
        local_1e8 = pcVar6;
        if ((local_1e0 != (cfstringStruct *)0x0) &&
           (pcVar5 = local_1e0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1e0,PTR_s_respondsToSelector__026ca818,pcVar6), ((ulong)pcVar5 & 1) != 0
           )) {
          pcVar5 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,local_1e8,local_150);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1f0 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)pcVar5 & 1) != 0) {
            _memset(auStack_238,0,0x40);
            pcVar5 = local_1f0;
            (*(code *)PTR__objc_retain_02578638)();
            local_378 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                       auStack_128,0x10);
            if (local_378 != (cfstringStruct *)0x0) {
              lVar7 = *local_228;
              local_380 = (cfstringStruct *)0x0;
              do {
                do {
                  if (*local_228 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_228 - lVar7,pcVar5);
                  }
                  lVar8 = *(long *)(local_230 + (long)local_380 * 8);
                  local_1f8 = lVar8;
                  FUN_01adac6c();
                  _objc_retainAutoreleasedReturnValue();
                  local_240 = lVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
                  if (lVar8 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_170[0],PTR_s_addObject__0269d180,local_240);
                  }
                  _objc_storeStrong(&local_240,0);
                  local_380 = (cfstringStruct *)((long)&local_380->field0_0x0 + 1);
                } while (local_380 < local_378);
                local_378 = pcVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                           auStack_128,0x10);
                local_380 = (cfstringStruct *)0x0;
              } while (local_378 != (cfstringStruct *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
          _objc_storeStrong(&local_1f0,0);
        }
        puVar2 = local_170[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar2;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar2;
      }
      local_13c = 1;
      _objc_storeStrong(local_170,0);
    }
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

