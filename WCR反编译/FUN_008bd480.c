// FUN_008bd480 @ 008bd480

void FUN_008bd480(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_160;
  undefined *local_158;
  long local_138 [3];
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  uint local_d4;
  long local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  if (local_d0 == 0) {
    local_c8 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    local_c0 = &cf_getChatContact;
    local_b8 = &cf_GetContact;
    local_b0 = &cf_getContact;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != (undefined *)0x0) {
      lVar5 = *local_110;
      local_160 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,puVar2);
          }
          lVar3 = local_d0;
          uVar6 = *(undefined8 *)(local_118 + (long)local_160 * 8);
          local_e0 = uVar6;
          _NSSelectorFromString();
          FUN_008b5ddc(lVar3,uVar6);
          _objc_retainAutoreleasedReturnValue();
          local_138[0] = lVar3;
          FUN_008bbaac();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar3);
          lVar3 = local_138[0];
          bVar1 = lVar4 != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = lVar3;
          }
          local_d4 = (uint)bVar1;
          _objc_storeStrong(bVar1,local_138,0);
          if (local_d4 != 0) goto LAB_008bd780;
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_160 = (undefined *)0x0;
      } while (local_158 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_008bd780:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_d4 == 0) {
      local_c8 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

