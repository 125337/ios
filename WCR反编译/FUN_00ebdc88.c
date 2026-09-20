// FUN_00ebdc88 @ 00ebdc88

void FUN_00ebdc88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_158;
  undefined *local_150;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    _memset(auStack_110,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_150 != (undefined *)0x0) {
      lVar3 = *local_100;
      local_158 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,puVar2);
          }
          lVar4 = *(long *)(local_108 + (long)local_158 * 8);
          local_d0 = lVar4;
          FUN_00ec135c();
          _objc_retainAutoreleasedReturnValue();
          local_118 = lVar4;
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,lVar4);
          }
          _objc_storeStrong(&local_118,0);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_158 = (undefined *)0x0;
      } while (local_150 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_bc = 1;
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

