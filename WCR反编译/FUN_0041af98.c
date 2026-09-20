// FUN_0041af98 @ 0041af98

void FUN_0041af98(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_1d0;
  undefined *local_1c8;
  long local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  long local_120;
  undefined *local_118;
  undefined *local_110;
  uint local_104;
  undefined *local_100 [3];
  int local_e4;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (undefined *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_2);
  puVar3 = local_d8;
  FUN_0040bb14(local_d8,&cf_messageType);
  local_e4 = (int)puVar3;
  puVar2 = local_d8;
  FUN_004055cc(local_d8,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)(ulong)(local_e4 - 0x31U);
  local_100[0] = puVar2;
  if (local_e4 - 0x31U == 0) {
    FUN_0040ca7c(0);
    puVar3 = puVar2 + -0x39;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = local_d8;
      FUN_0041e030(local_d8,local_e0);
      _objc_retainAutoreleasedReturnValue();
      local_104 = 1;
      local_d0 = puVar3;
      goto LAB_0041b3f0;
    }
  }
  puVar2 = local_d8;
  FUN_0040ae9c(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_d8;
  local_110 = puVar2;
  FUN_0040cccc(local_d8,&cf_stripIdentifiers);
  _objc_retainAutoreleasedReturnValue();
  local_118 = puVar3;
  _memset(auStack_160,0,0x40);
  puVar3 = local_110;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
  if (local_1c8 != (undefined *)0x0) {
    lVar4 = *local_150;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_150 - lVar4 != 0) {
          _objc_enumerationMutation(*local_150 - lVar4,puVar3);
        }
        lVar5 = *(long *)(local_158 + (long)local_1d0 * 8);
        local_120 = lVar5;
        FUN_0041e4f8(lVar5,local_e0,local_118);
        _objc_retainAutoreleasedReturnValue();
        local_168 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_count_0269cfe0);
        bVar1 = lVar5 != 0;
        if (bVar1) {
          local_c8 = &cf_content;
          local_b8 = local_120;
          local_c0 = &cf_keywords;
          local_b0 = local_168;
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = puVar2;
        }
        local_104 = (uint)bVar1;
        _objc_storeStrong(bVar1,&local_168,0);
        if (local_104 != 0) goto LAB_0041b370;
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  local_104 = 0;
LAB_0041b370:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_104 == 0) {
    local_d0 = (undefined *)0x0;
    local_104 = 1;
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
LAB_0041b3f0:
  _objc_storeStrong(local_100);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

