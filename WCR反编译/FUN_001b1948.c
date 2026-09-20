// FUN_001b1948 @ 001b1948

void FUN_001b1948(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_330;
  undefined *local_328;
  undefined *local_2a0;
  undefined *local_298;
  cfstringStruct *local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  cfstringStruct *local_208 [2];
  int local_1f4;
  cfstringStruct *local_1f0;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  cfstringStruct *local_198 [3];
  cfstringStruct *local_180;
  undefined8 local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_170 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_170,param_1);
  local_178 = 0;
  _objc_storeStrong(&local_178,param_2);
  pcVar1 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_roomContact);
  _objc_retainAutoreleasedReturnValue();
  local_180 = pcVar1;
  FUN_001aa170(pcVar1,&cf_m_ChatRoomData);
  _objc_retainAutoreleasedReturnValue();
  local_198[0] = pcVar1;
  _memset(auStack_1e0,0,0x40);
  local_b8 = &cf_getDisplayName_;
  local_b0 = &cf_getDislayNameForUserName_;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_298 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_298 != (undefined *)0x0) {
    lVar4 = *local_1d0;
    local_2a0 = (undefined *)0x0;
    do {
      do {
        if (*local_1d0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar4,puVar2);
        }
        uVar5 = *(undefined8 *)(local_1d8 + (long)local_2a0 * 8);
        local_1a0 = uVar5;
        _NSSelectorFromString();
        local_1e8 = uVar5;
        if ((local_198[0] != (cfstringStruct *)0x0) &&
           (pcVar1 = local_198[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_198[0],PTR_s_respondsToSelector__026ca818,uVar5),
           ((ulong)pcVar1 & 1) != 0)) {
          pcVar1 = local_198[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_198[0],local_1e8,local_178);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar1;
          FUN_001a81d4();
          _objc_retainAutoreleasedReturnValue();
          local_1f0 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
          if ((pcVar1 == (cfstringStruct *)0x0) ||
             (pcVar3 = local_1f0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1f0,PTR_s_caseInsensitiveCompare__0269db48,local_178),
             pcVar1 = local_1f0, pcVar3 == (cfstringStruct *)0x0)) {
            uVar5 = 0;
            local_1f4 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_168 = pcVar1;
            uVar5 = 1;
            local_1f4 = 1;
          }
          _objc_storeStrong(uVar5,&local_1f0,0);
          if (local_1f4 != 0) goto LAB_001b1d6c;
        }
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < local_298);
      local_298 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10)
      ;
      local_2a0 = (undefined *)0x0;
    } while (local_298 != (undefined *)0x0);
  }
  local_1f4 = 0;
LAB_001b1d6c:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_1f4 == 0) {
    pcVar1 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberData);
    _objc_retainAutoreleasedReturnValue();
    local_208[0] = pcVar1;
    _memset(auStack_250,0,0x40);
    local_160 = &cf_m_nsRemark;
    local_158 = &cf_m_nsNickName;
    local_150 = &cf_m_nsDisplayName;
    local_148 = &cf_m_nsMemberName;
    local_140 = &cf_displayName;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_160,
               5);
    _objc_retainAutoreleasedReturnValue();
    local_328 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_328 != (undefined *)0x0) {
      lVar4 = *local_240;
      local_330 = (undefined *)0x0;
      do {
        do {
          if (*local_240 - lVar4 != 0) {
            _objc_enumerationMutation(*local_240 - lVar4,puVar2);
          }
          local_210 = *(undefined8 *)(local_248 + (long)local_330 * 8);
          pcVar1 = local_208[0];
          FUN_001b2778(local_208[0],local_210);
          _objc_retainAutoreleasedReturnValue();
          local_258 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
          if ((pcVar1 == (cfstringStruct *)0x0) ||
             (pcVar3 = local_258,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_258,PTR_s_caseInsensitiveCompare__0269db48,local_178),
             pcVar1 = local_258, pcVar3 == (cfstringStruct *)0x0)) {
            uVar5 = 0;
            local_1f4 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_168 = pcVar1;
            uVar5 = 1;
            local_1f4 = 1;
          }
          _objc_storeStrong(uVar5,&local_258,0);
          if (local_1f4 != 0) goto LAB_001b20ac;
          local_330 = local_330 + 1;
        } while (local_330 < local_328);
        local_328 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_138,
                   0x10);
        local_330 = (undefined *)0x0;
      } while (local_328 != (undefined *)0x0);
    }
    local_1f4 = 0;
LAB_001b20ac:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_1f4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = &cf___;
      local_1f4 = 1;
    }
    _objc_storeStrong(local_208,0);
  }
  _objc_storeStrong(local_198);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_168);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

