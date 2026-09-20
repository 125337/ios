// FUN_00223080 @ 00223080

void FUN_00223080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  ulong local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  long *plVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(plVar2,param_3);
  uVar1 = (uint)plVar2;
  local_c0 = param_2;
  local_b8 = param_1;
  FUN_001cf8b0();
  if (((uVar1 & 1) == 0) || (local_b0 == 0)) {
    local_d0 = 1;
  }
  else {
    pcVar3 = &cf_ImageScrollView;
    _NSClassFromString();
    local_d8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_d0 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b0)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_e8 = 0;
      local_e0 = puVar4;
      while (puVar4 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0)
            , puVar4 != (undefined *)0x0 && local_e8 < 0xa0) {
        puVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_removeObjectAtIndex__0269d530,0);
        local_e8 = local_e8 + 1;
        puVar4 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isKindOfClass__0269cd68,local_d8);
        if (((ulong)puVar4 & 1) != 0) {
          FUN_002234d0(local_b8,local_c0,local_f0);
        }
        _memset(auStack_138,0,0x40);
        puVar4 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1a0 != (undefined *)0x0) {
          lVar5 = *local_128;
          local_1a8 = (undefined *)0x0;
          do {
            do {
              if (*local_128 - lVar5 != 0) {
                _objc_enumerationMutation(*local_128 - lVar5,puVar4);
              }
              local_f8 = *(undefined8 *)(local_130 + (long)local_1a8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_f8);
              local_1a8 = local_1a8 + 1;
            } while (local_1a8 < local_1a0);
            local_1a0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8
                       ,0x10);
            local_1a8 = (undefined *)0x0;
          } while (local_1a0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_f0,0);
      }
      _objc_storeStrong(&local_e0,0);
      local_d0 = 0;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

