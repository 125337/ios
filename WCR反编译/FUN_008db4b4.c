// FUN_008db4b4 @ 008db4b4

void FUN_008db4b4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  cfstringStruct *local_f0 [3];
  uint local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_1);
  if (local_d0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = &cf___;
    local_d4 = 1;
  }
  else {
    pcVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_getVoicePath_026a4578);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_getVoicePath_026a4578);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_008dbac8();
      _objc_retainAutoreleasedReturnValue();
      local_f0[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_f0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0);
      pcVar1 = local_f0[0];
      if (pcVar2 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = pcVar1;
      }
      local_d4 = (uint)(pcVar2 != (cfstringStruct *)0x0);
      _objc_storeStrong(local_f0,0);
      if (local_d4 != 0) goto LAB_008dba68;
    }
    local_40 = &cf_m_nsVoicePath;
    local_38 = &cf_m_nsMsgDataPath;
    local_30 = &cf_m_nsFilePath;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar3;
    _memset(auStack_140,0,0x40);
    puVar3 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_c0,0x10);
    if (local_1b8 != (undefined *)0x0) {
      lVar4 = *local_130;
      local_1c0 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar4 != 0) {
            _objc_enumerationMutation(*local_130 - lVar4,puVar3);
          }
          local_100 = *(undefined8 *)(local_138 + (long)local_1c0 * 8);
          pcVar1 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_valueForKey__0269d128,local_100);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar1;
          FUN_008dbac8();
          _objc_retainAutoreleasedReturnValue();
          local_148 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar2 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
          pcVar1 = local_148;
          if (pcVar2 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = pcVar1;
          }
          local_d4 = (uint)(pcVar2 != (cfstringStruct *)0x0);
          _objc_storeStrong(&local_148,0);
          if (local_d4 != 0) goto LAB_008db960;
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_c0,
                   0x10);
        local_1c0 = (undefined *)0x0;
      } while (local_1b8 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_008db960:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_d4 == 0) {
      local_d4 = 0;
    }
    _objc_storeStrong(&local_f8,0);
    if (local_d4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = &cf___;
      local_d4 = 1;
    }
  }
LAB_008dba68:
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

