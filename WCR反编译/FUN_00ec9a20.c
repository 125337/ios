// FUN_00ec9a20 @ 00ec9a20

void FUN_00ec9a20(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_208;
  uint local_1c4;
  ulong local_168;
  ulong local_160;
  ulong local_120;
  ulong local_118;
  undefined1 local_10a;
  byte local_109;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  _memset(auStack_108,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar6 = *local_f8;
    local_168 = 0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,uVar2);
        }
        uVar7 = *(ulong *)(local_100 + local_168 * 8);
        local_c8 = uVar7;
        FUN_00ecab2c();
        uVar5 = local_b8;
        if ((uVar7 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_c8);
        }
        else {
          uVar7 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar7;
          FUN_00ebd790();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar7);
          local_109 = (byte)uVar5;
          uVar7 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_missing);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          local_10a = (undefined1)uVar4;
          local_118 = 0;
          if (((local_109 & 1) == 0) || ((uVar4 & 1) == 0)) {
            bVar1 = false;
            local_1c4 = 0;
            if (((local_109 & 1) == 0) && (local_1c4 = 0, (uVar4 & 1) == 0)) {
              local_120 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              uVar7 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1c4 = (uint)uVar7;
            }
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_120);
            }
            if ((local_1c4 & 1) != 0) {
              uVar4 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
              uVar7 = local_118;
              local_118 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar7);
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_missing);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_enabled);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
          }
          else {
            uVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
            uVar7 = local_118;
            local_118 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_removeObjectForKey__0269d700,&cf_missing);
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_enabled);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          if (local_118 == 0) {
            local_208 = local_c8;
          }
          else {
            local_208 = local_118;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_208);
          _objc_storeStrong(&local_118,0);
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

