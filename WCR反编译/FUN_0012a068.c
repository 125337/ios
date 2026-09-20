// FUN_0012a068 @ 0012a068

void FUN_0012a068(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_190;
  undefined *local_188;
  char *local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  char *local_f0;
  uint local_e8;
  long local_d8;
  char *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  lVar3 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_d0 = (char *)0x0;
    local_e8 = 1;
  }
  else {
    pcVar1 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_d0 = (char *)0x0;
      local_e8 = 1;
    }
    else {
      _memset(auStack_138,0,0x40);
      local_c8 = &cf_getContactByNameFromCache_;
      local_c0 = &cf_getContactByNameFromDB_;
      local_b8 = &cf_getContactForSearchByName_;
      local_b0 = &cf_getContactByName_;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_188 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_188 != (undefined *)0x0) {
        lVar3 = *local_128;
        local_190 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar3 != 0) {
              _objc_enumerationMutation(*local_128 - lVar3,puVar2);
            }
            uVar4 = *(undefined8 *)(local_130 + (long)local_190 * 8);
            local_f8 = uVar4;
            _NSSelectorFromString();
            pcVar1 = local_f0;
            local_140 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_respondsToSelector__026ca818,uVar4)
            ;
            if (((ulong)pcVar1 & 1) != 0) {
              pcVar1 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_140,local_d8);
              _objc_retainAutoreleasedReturnValue();
              local_148 = pcVar1;
              if (pcVar1 != (char *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_d0 = pcVar1;
              }
              local_e8 = (uint)(pcVar1 != (char *)0x0);
              _objc_storeStrong(&local_148,0);
              if (local_e8 != 0) goto LAB_0012a3d4;
            }
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_190 = (undefined *)0x0;
        } while (local_188 != (undefined *)0x0);
      }
      local_e8 = 0;
LAB_0012a3d4:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_e8 == 0) {
        local_d0 = (char *)0x0;
        local_e8 = 1;
      }
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

