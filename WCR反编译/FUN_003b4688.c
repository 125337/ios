// FUN_003b4688 @ 003b4688

void FUN_003b4688(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  lVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    local_b0 = puVar1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_c8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_bc = 1;
      local_b0 = puVar1;
    }
    else {
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,local_b8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_d0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_bc = 1;
        local_b0 = puVar1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = puVar1;
        _memset(auStack_120,0,0x40);
        puVar1 = local_d0;
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        if (local_170 != (undefined *)0x0) {
          lVar3 = *local_110;
          local_178 = (undefined *)0x0;
          do {
            do {
              if (*local_110 - lVar3 != 0) {
                _objc_enumerationMutation(*local_110 - lVar3,puVar1);
              }
              uVar4 = *(ulong *)(local_118 + (long)local_178 * 8);
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_e0 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((((uVar4 & 1) != 0) &&
                  (uVar4 = local_e0,
                  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0), uVar4 != 0)
                  ) && (puVar2 = local_d8,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_d8,PTR_s_containsObject__0269cbb8,local_e0),
                       ((ulong)puVar2 & 1) == 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
              }
              local_178 = local_178 + 1;
            } while (local_178 < local_170);
            local_170 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8
                       ,0x10);
            local_178 = (undefined *)0x0;
          } while (local_170 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
        local_bc = 1;
        local_b0 = puVar1;
        _objc_storeStrong(&local_d8,0);
      }
      _objc_storeStrong(&local_d0,0);
    }
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

