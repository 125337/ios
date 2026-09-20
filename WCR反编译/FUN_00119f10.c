// FUN_00119f10 @ 00119f10

byte FUN_00119f10(double param_1,undefined8 param_2)

{
  ulong uVar1;
  double dVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double local_208;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  double local_e8;
  int local_e0;
  double local_d0;
  long local_c8;
  byte local_b9;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  lVar6 = local_c8;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_b9 = 0;
    local_e0 = 1;
  }
  else {
    local_b0 = &DAT_028c85f0;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_0257a338);
    if (*local_b0 + 1 != 0) {
      _dispatch_once(*local_b0 + 1,local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = DAT_028c8558;
    local_e8 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar4 = DAT_028c8558;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8558,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar4;
    _memset(auStack_138,0,0x40);
    uVar4 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1c0 != 0) {
      lVar6 = *local_128;
      local_1c8 = 0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,uVar4);
          }
          local_f8 = *(undefined8 *)(local_130 + local_1c8 * 8);
          uVar5 = DAT_028c8558;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028c8558,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
          _objc_retainAutoreleasedReturnValue();
          dVar2 = local_e8;
          local_140 = uVar5;
          if (uVar5 == 0) {
LAB_0011a254:
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028c8558,PTR_s_removeObjectForKey__0269d700,local_f8);
          }
          else {
            dVar7 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_doubleValue_026ca608);
            local_148 = local_d0;
            local_150 = 0x403e000000000000;
            if (30.0 <= local_d0) {
              local_208 = local_d0;
            }
            else {
              local_208 = 30.0;
            }
            local_158 = local_208;
            if (local_208 < dVar2 - dVar7) goto LAB_0011a254;
          }
          _objc_storeStrong(&local_140,0);
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1c8 = 0;
      } while (local_1c0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = DAT_028c8558;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c8558,PTR_s_objectForKeyedSubscript__0269d098,local_c8);
    _objc_retainAutoreleasedReturnValue();
    dVar2 = local_e8;
    local_160 = uVar4;
    if ((uVar4 == 0) ||
       (dVar7 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_doubleValue_026ca608),
       local_d0 <= dVar2 - dVar7)) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c8558,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_c8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_e0 = 0;
    }
    else {
      local_b9 = 0;
      local_e0 = 1;
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_f0,0);
    if (local_e0 == 0) {
      local_e0 = 0;
    }
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_e0 == 0) {
      local_b9 = 1;
      local_e0 = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b9 & 1;
}

