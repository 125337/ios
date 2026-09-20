// FUN_008da7a4 @ 008da7a4

void FUN_008da7a4(undefined8 param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120 [2];
  cfstringStruct *local_110;
  undefined *local_108;
  cfstringStruct *local_f0;
  uint local_e4;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e0,param_1);
  if (local_e0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = &cf___;
    local_e4 = 1;
  }
  else {
    pcVar1 = "CMessageWrap";
    _objc_getClass();
    local_108 = PTR_s_GetPathOfAppData__0269e218;
    local_f0 = (cfstringStruct *)pcVar1;
    if (((cfstringStruct *)pcVar1 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GetPathOfAppData__0269e218),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_108,local_e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_008dbac8();
      _objc_retainAutoreleasedReturnValue();
      local_110 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
      pcVar2 = local_110;
      if (pcVar3 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = pcVar2;
      }
      local_e4 = (uint)(pcVar3 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_110,0);
      if (local_e4 != 0) goto LAB_008dada0;
    }
    local_50 = &cf_m_nsMsgDataPath;
    local_48 = &cf_m_nsFilePath;
    local_40 = &cf_m_nsAppFilePath;
    local_38 = &cf_m_nsAttachDataPath;
    local_30 = &cf_m_nsAppMediaUrl;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_120[0] = puVar4;
    _memset(auStack_168,0,0x40);
    puVar4 = local_120[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_1e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_d0,0x10);
    if (local_1e8 != (undefined *)0x0) {
      lVar5 = *local_158;
      local_1f0 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar5 != 0) {
            _objc_enumerationMutation(*local_158 - lVar5,puVar4);
          }
          local_128 = *(undefined8 *)(local_160 + (long)local_1f0 * 8);
          pcVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_128);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          FUN_008dbac8();
          _objc_retainAutoreleasedReturnValue();
          local_170 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar3 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
          pcVar2 = local_170;
          if (pcVar3 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = pcVar2;
          }
          local_e4 = (uint)(pcVar3 != (cfstringStruct *)0x0);
          _objc_storeStrong(&local_170,0);
          if (local_e4 != 0) goto LAB_008dacf0;
          local_1f0 = local_1f0 + 1;
        } while (local_1f0 < local_1e8);
        local_1e8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_d0,
                   0x10);
        local_1f0 = (undefined *)0x0;
      } while (local_1e8 != (undefined *)0x0);
    }
    local_e4 = 0;
LAB_008dacf0:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_e4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = &cf___;
      local_e4 = 1;
    }
    _objc_storeStrong(local_120,0);
  }
LAB_008dada0:
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

