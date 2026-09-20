// FUN_001288b8 @ 001288b8

void FUN_001288b8(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  char *local_e8;
  char *local_e0;
  undefined4 local_d8;
  long local_c8;
  char *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  lVar5 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    pcVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = 1;
    local_c0 = pcVar1;
  }
  else {
    pcVar1 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      pcVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = 1;
      local_c0 = pcVar1;
    }
    else {
      local_e8 = (char *)0x0;
      _memset(auStack_130,0,0x40);
      local_b8 = &cf_getContactByNameFromCache_;
      local_b0 = &cf_getContactByName_;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_190 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_190 != (undefined *)0x0) {
        lVar5 = *local_120;
        local_198 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar5 != 0) {
              _objc_enumerationMutation(*local_120 - lVar5,puVar2);
            }
            uVar6 = *(undefined8 *)(local_128 + (long)local_198 * 8);
            local_f0 = uVar6;
            _NSSelectorFromString();
            pcVar1 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,uVar6)
            ;
            if (((ulong)pcVar1 & 1) != 0) {
              pcVar3 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,uVar6,local_c8);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_e8;
              local_e8 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              if (local_e8 != (char *)0x0) {
                local_d8 = 3;
                goto LAB_00128c58;
              }
            }
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_198 = (undefined *)0x0;
        } while (local_190 != (undefined *)0x0);
      }
      local_d8 = 0;
LAB_00128c58:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_e8 == (char *)0x0) {
        pcVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar1;
      }
      else {
        pcVar4 = &cf_tryLoadExtInfoForContact_;
        _NSSelectorFromString();
        pcVar1 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,pcVar4,local_e8);
        }
        pcVar1 = local_e8;
        FUN_0010dca0(local_e8,&cf_m_nsChatRoomMemList);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar1;
        FUN_00119ab8();
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      local_d8 = 1;
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c0);
  return;
}

