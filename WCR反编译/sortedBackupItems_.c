// sortedBackupItems: @ 00f0d9d8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineCloudBackupService::sortedBackupItems_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint local_1ac;
  ulong local_180;
  ulong local_178;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  _memset(auStack_120,0,0x40);
  uVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_178 != 0) {
    lVar7 = *local_110;
    local_180 = 0;
    do {
      do {
        if (*local_110 - lVar7 != 0) {
          _objc_enumerationMutation(*local_110 - lVar7,uVar1);
        }
        uVar8 = *(ulong *)(local_118 + local_180 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_e0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar8 & 1) != 0) {
          uVar8 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_128 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar8 & 1) != 0) &&
             (uVar8 = local_128,
             (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0), uVar8 != 0)) {
            IVar4 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_isVersionedBackupName__026abc80,local_128);
            if ((IVar4 & 1) == 0) {
              uVar8 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1ac = 0;
              if ((uVar5 & 1) != 0) {
                uVar5 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lowercaseString_0269d9c0);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_1ac = (uint)uVar6;
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              (*(code *)PTR__objc_release_02578630)(uVar8);
              if ((local_1ac & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_e0);
            }
          }
          _objc_storeStrong(&local_128,0);
        }
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02582678);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  puVar2 = local_d0;
  local_b0 = local_d8;
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

