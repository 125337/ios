// friendDaysForUserName: @ 01a03198

/* Function Stack Size: 0x18 bytes */

long_long WCRefineFriendRelationResultListViewController::friendDaysForUserName_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  long_long local_200;
  double local_1f8;
  undefined *local_1b0;
  undefined *local_1a8;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  uint local_e8;
  undefined4 local_e4;
  ID local_e0;
  undefined8 local_d8;
  SEL local_d0;
  ID local_c8;
  long_long local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  IVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contactForUserName__026bb5f0,local_d8);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = IVar1;
  if (IVar1 == 0) {
    local_c0 = 0;
  }
  else {
    local_e8 = 0;
    _memset(auStack_130,0,0x40);
    local_b8 = &cf_m_uiLocalAddContactTime;
    local_b0 = &cf_m_uiAddCreateTime;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != (undefined *)0x0) {
      lVar3 = *local_120;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar3 != 0) {
            _objc_enumerationMutation(*local_120 - lVar3,puVar2);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_1b0 * 8);
          IVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
          if ((IVar1 & 1) != 0) {
            IVar1 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_unsignedIntValue_0269db10);
            local_e8 = (uint)IVar1;
          }
          _objc_storeStrong(&local_138,0);
          if (local_e8 != 0) {
            local_e4 = 2;
            goto LAB_01a03488;
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    local_e4 = 0;
LAB_01a03488:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_e8 == 0) {
      local_c0 = 0;
    }
    else {
      local_1f8 = 0.0;
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar4 = (double)NEON_ucvtf((ulong)local_e8);
      local_1f8 = local_1f8 - dVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_1f8 <= 0.0) {
        local_1f8 = 0.0;
      }
      local_200 = (long)(local_1f8 / 86400.0) + 1;
      if ((long)local_200 < 2) {
        local_200 = 1;
      }
      local_c0 = local_200;
    }
  }
  local_e4 = 1;
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_c0;
}

