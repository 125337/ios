// FUN_005cd174 @ 005cd174

void FUN_005cd174(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *local_1a8;
  undefined *local_1a0;
  cfstringStruct *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  uint local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e8,param_1);
  pcVar2 = local_e8;
  FUN_005c78e0();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  pcVar4 = local_f0;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_58 = &cf_m_nsUsrName;
    local_50 = &cf_userName;
    local_48 = &cf_username;
    local_40 = &cf_m_nsUserName;
    local_38 = &cf_nsUserName;
    local_30 = &cf_m_nsEncodeUserName;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar3;
    _memset(auStack_150,0,0x40);
    puVar3 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d8,0x10);
    if (local_1a0 != (undefined *)0x0) {
      lVar5 = *local_140;
      local_1a8 = (undefined *)0x0;
      do {
        do {
          if (*local_140 - lVar5 != 0) {
            _objc_enumerationMutation(*local_140 - lVar5,puVar3);
          }
          local_110 = *(undefined8 *)(local_148 + (long)local_1a8 * 8);
          pcVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,local_110);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar4;
          FUN_005c78e0();
          _objc_retainAutoreleasedReturnValue();
          local_158 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar2 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
          pcVar4 = local_158;
          bVar1 = pcVar2 != (cfstringStruct *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_e0 = pcVar4;
          }
          local_100 = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_158,0);
          if (local_100 != 0) goto LAB_005cd54c;
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d8,
                   0x10);
        local_1a8 = (undefined *)0x0;
      } while (local_1a0 != (undefined *)0x0);
    }
    local_100 = 0;
LAB_005cd54c:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_100 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = &cf___;
      local_100 = 1;
    }
    _objc_storeStrong(&local_108,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = pcVar4;
    local_100 = 1;
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

