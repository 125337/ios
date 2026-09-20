// FUN_00500d14 @ 00500d14

byte FUN_00500d14(double param_1,undefined8 param_2)

{
  double dVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  ulong local_180;
  ulong local_178;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ulong local_e0;
  ulong local_d8;
  double local_d0;
  ulong local_c8;
  undefined4 local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    FUN_00502bf8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar2 = local_c8;
    local_d0 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098,local_b8)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    dVar1 = local_d0;
    if (((uVar2 & 1) == 0) ||
       (dVar6 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_doubleValue_026ca608)
       , 300.0 <= dVar1 - dVar6)) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_b8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      if (400 < uVar2) {
        uVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_allKeys_0269ef58);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = uVar2;
        _memset(auStack_128,0,0x40);
        uVar2 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_178 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        if (local_178 != 0) {
          lVar5 = *local_118;
          local_180 = 0;
          do {
            do {
              if (*local_118 - lVar5 != 0) {
                _objc_enumerationMutation(*local_118 - lVar5,uVar2);
              }
              local_e8 = *(undefined8 *)(local_120 + local_180 * 8);
              uVar4 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_objectForKeyedSubscript__0269d098,local_e8);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_130 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
              dVar1 = local_d0;
              if (((uVar4 & 1) == 0) ||
                 (dVar6 = local_d0,
                 (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_doubleValue_026ca608),
                 300.0 <= dVar1 - dVar6)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_removeObjectForKey__0269d700,local_e8);
              }
              _objc_storeStrong(&local_130,0);
              local_180 = local_180 + 1;
            } while (local_180 < local_178);
            local_178 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                       0x10);
            local_180 = 0;
          } while (local_178 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        _objc_storeStrong(&local_e0,0);
      }
      local_a9 = 1;
    }
    else {
      local_a9 = 0;
    }
    local_bc = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

