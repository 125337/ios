// FUN_00162b10 @ 00162b10

byte FUN_00162b10(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_198;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  byte local_f9;
  undefined *local_f8;
  byte local_e9;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_d0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  local_c0 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (local_c0 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    FUN_00163590();
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 0;
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,local_b8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    uVar6 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar6 & 1) == 0) {
      local_198 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_198 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_objectForKeyedSubscript__0269d098,local_b8);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = local_198;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_198;
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 0;
    local_f8 = puVar2;
    _memset(auStack_148,0,0x40);
    uVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_1c8 != 0) {
      lVar5 = *local_138;
      local_1d0 = 0;
      do {
        do {
          if (*local_138 - lVar5 != 0) {
            _objc_enumerationMutation(*local_138 - lVar5,uVar1);
          }
          uVar6 = *(ulong *)(local_140 + local_1d0 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_108 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar6 & 1) != 0) {
            uVar3 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgSvrID);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            uVar6 = local_c0;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if (uVar4 == uVar6) {
              local_f9 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_108);
            }
          }
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1d0 = 0;
      } while (local_1c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_f9 & 1) == 0) {
      local_a9 = 0;
    }
    else {
      puVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeObjectForKey__0269d700,local_b8);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_setObject_forKeyedSubscript__0269d248,local_f8,local_b8);
      }
      FUN_00163f40(local_d8);
      local_a9 = 1;
    }
    local_d0 = 1;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

