// FUN_01b20404 @ 01b20404

void FUN_01b20404(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_b0;
  local_b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_keywords);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar3 & 1) != 0) {
    _memset(auStack_100,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_keywords);
    _objc_retainAutoreleasedReturnValue();
    local_130 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_130 != 0) {
      lVar4 = *local_f0;
      local_138 = 0;
      do {
        do {
          if (*local_f0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar4,uVar2);
          }
          local_c0 = *(undefined8 *)(local_f8 + local_138 * 8);
          FUN_01b2c020(local_b8,local_c0);
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
        local_130 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_138 = 0;
      } while (local_130 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  puVar1 = local_b8;
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
  _objc_retainAutoreleasedReturnValue();
  FUN_01b2c020(puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

