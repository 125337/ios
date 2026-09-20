// FUN_001b21e4 @ 001b21e4

void FUN_001b21e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_1e0;
  undefined *local_1d8;
  long local_1b0;
  long local_198;
  long local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  long local_108;
  char *local_100;
  int local_f8;
  char *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_2);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_3);
  pcVar1 = "CContact";
  _objc_getClass();
  local_e8 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_c8 = (char *)0x0;
    local_f8 = 1;
  }
  else {
    _objc_alloc_init();
    local_100 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_c8 = (char *)0x0;
      local_f8 = 1;
    }
    else {
      FUN_001b288c(pcVar1,&cf_m_nsUsrName,local_d0);
      pcVar1 = local_100;
      lVar4 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (lVar4 == 0) {
        local_198 = local_d0;
      }
      else {
        local_198 = local_d8;
      }
      FUN_001b288c(pcVar1,&cf_m_nsNickName,local_198);
      pcVar1 = local_100;
      lVar4 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (lVar4 == 0) {
        local_1b0 = local_d0;
      }
      else {
        local_1b0 = local_d8;
      }
      FUN_001b288c(pcVar1,&cf_m_nsMemberName,local_1b0);
      lVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberData);
      _objc_retainAutoreleasedReturnValue();
      local_108 = lVar4;
      _memset(auStack_150,0,0x40);
      local_c0 = &cf_m_nsHeadImgUrl;
      local_b8 = &cf_m_nsSmallHeadImgUrl;
      local_b0 = &cf_m_nsBigHeadImgUrl;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1d8 != (undefined *)0x0) {
        lVar4 = *local_140;
        local_1e0 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar4 != 0) {
              _objc_enumerationMutation(*local_140 - lVar4,puVar2);
            }
            local_110 = *(undefined8 *)(local_148 + (long)local_1e0 * 8);
            lVar3 = local_108;
            FUN_001b2778(local_108,local_110);
            _objc_retainAutoreleasedReturnValue();
            local_158 = lVar3;
            (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
            if (lVar3 == 0) {
              local_f8 = 0;
            }
            else {
              FUN_001b288c(lVar3,local_100,&cf_m_nsHeadImgUrl,local_158);
              local_f8 = 2;
            }
            _objc_storeStrong(&local_158,0);
            if (local_f8 != 0) goto LAB_001b2644;
            local_1e0 = local_1e0 + 1;
          } while (local_1e0 < local_1d8);
          local_1d8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1e0 = (undefined *)0x0;
        } while (local_1d8 != (undefined *)0x0);
      }
      local_f8 = 0;
LAB_001b2644:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar1 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = pcVar1;
      local_f8 = 1;
      _objc_storeStrong(&local_108,0);
    }
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c8);
  return;
}

