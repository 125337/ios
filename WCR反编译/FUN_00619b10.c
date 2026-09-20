// FUN_00619b10 @ 00619b10

void FUN_00619b10(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1a8;
  undefined *local_1a0;
  long *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108 [3];
  long local_f0;
  uint local_e4;
  long *local_e0;
  long *local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = (long *)0x0;
  _objc_storeStrong(&local_e0,param_1);
  if (local_e0 == (long *)0x0) {
    local_d8 = (long *)0x0;
    local_e4 = 1;
  }
  else {
    plVar1 = local_e0;
    FUN_00619f6c(local_e0,"m_tableViewInfo");
    plVar1 = (long *)*plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = (long)plVar1;
    if (plVar1 == (long *)0x0) {
      local_50 = &cf_m_tableViewInfo;
      local_48 = &cf__tableViewInfo;
      local_40 = &cf_tableViewInfo;
      local_38 = &cf_m_tableViewMgr;
      local_30 = &cf__tableViewMgr;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_108[0] = puVar2;
      _memset(auStack_150,0,0x40);
      puVar2 = local_108[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d0,0x10)
      ;
      if (local_1a0 != (undefined *)0x0) {
        lVar3 = *local_140;
        local_1a8 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar3 != 0) {
              _objc_enumerationMutation(*local_140 - lVar3,puVar2);
            }
            local_110 = *(undefined8 *)(local_148 + (long)local_1a8 * 8);
            plVar1 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_110);
            _objc_retainAutoreleasedReturnValue();
            local_158 = plVar1;
            if (plVar1 != (long *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_d8 = plVar1;
            }
            local_e4 = (uint)(plVar1 != (long *)0x0);
            _objc_storeStrong(&local_158,0);
            if (local_e4 != 0) goto LAB_00619e58;
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 < local_1a0);
          local_1a0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d0,
                     0x10);
          local_1a8 = (undefined *)0x0;
        } while (local_1a0 != (undefined *)0x0);
      }
      local_e4 = 0;
LAB_00619e58:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_e4 == 0) {
        local_d8 = (long *)0x0;
        local_e4 = 1;
      }
      _objc_storeStrong(local_108,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_e4 = 1;
      local_d8 = plVar1;
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

