// FUN_01626f50 @ 01626f50

void FUN_01626f50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint local_1a4;
  undefined *local_180;
  undefined *local_178;
  ulong local_138;
  byte local_129;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_coreDefaultActionsSeeded_026b1a40);
  puVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  if (((ulong)puVar1 & 1) == 0) {
    FUN_01632110();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    _memset(auStack_118,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_178 != (undefined *)0x0) {
      lVar5 = *local_108;
      local_180 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,puVar2);
          }
          uVar6 = *(ulong *)(local_110 + (long)local_180 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar6 & 1) != 0) {
            uVar6 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar6;
            FUN_01618794();
            _objc_retainAutoreleasedReturnValue();
            local_120 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            puVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsObject__0269cbb8,local_120)
            ;
            local_129 = 0;
            local_1a4 = 0;
            if (((ulong)puVar3 & 1) != 0) {
              uVar6 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
              _objc_retainAutoreleasedReturnValue();
              local_129 = 1;
              local_128 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1a4 = (uint)uVar6 ^ 1;
            }
            if ((local_129 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_128);
            }
            if ((local_1a4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
            }
            else {
              uVar6 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_mutableCopy_0269d8a0);
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_138 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                         &cf__wcrEnabled);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_138);
              _objc_storeStrong(&local_138,0);
            }
            _objc_storeStrong(&local_120,0);
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_180 = (undefined *)0x0;
      } while (local_178 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_bc = 1;
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_bc = 1;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

