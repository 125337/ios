// FUN_00593474 @ 00593474

void FUN_00593474(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *local_1a0;
  undefined *local_198;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  uint local_f8;
  cfstringStruct *local_e8;
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
  pcVar2 = local_e0;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  pcVar4 = local_e8;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = &cf_m_nsUsrName;
    local_48 = &cf_userName;
    local_40 = &cf_username;
    local_38 = &cf_m_nsUserName;
    local_30 = &cf_nsUserName;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar3;
    _memset(auStack_148,0,0x40);
    puVar3 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_d0,0x10);
    if (local_198 != (undefined *)0x0) {
      lVar5 = *local_138;
      local_1a0 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar5 != 0) {
            _objc_enumerationMutation(*local_138 - lVar5,puVar3);
          }
          local_108 = *(undefined8 *)(local_140 + (long)local_1a0 * 8);
          pcVar4 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_108);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar4;
          FUN_0057a910();
          _objc_retainAutoreleasedReturnValue();
          local_150 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
          pcVar4 = local_150;
          bVar1 = pcVar2 != (cfstringStruct *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = pcVar4;
          }
          local_f8 = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_150,0);
          if (local_f8 != 0) goto LAB_00593840;
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_d0,
                   0x10);
        local_1a0 = (undefined *)0x0;
      } while (local_198 != (undefined *)0x0);
    }
    local_f8 = 0;
LAB_00593840:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_f8 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = &cf___;
      local_f8 = 1;
    }
    _objc_storeStrong(&local_100,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = pcVar4;
    local_f8 = 1;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

