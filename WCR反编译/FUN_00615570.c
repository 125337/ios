// FUN_00615570 @ 00615570

void FUN_00615570(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_158;
  long local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_108;
  undefined *local_100 [3];
  undefined *local_e8;
  uint local_dc;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  if (local_d8 == 0) {
    local_d0 = 0;
    local_dc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    FUN_0060c510(local_d8,puVar2);
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_d0 = 0;
      local_dc = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf______d_____,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_100[0] = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_d0 = 0;
        local_dc = 1;
      }
      else {
        _memset(auStack_148,0,0x40);
        puVar2 = local_e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        if (local_1a8 != (undefined *)0x0) {
          lVar4 = *local_138;
          local_1b0 = (undefined *)0x0;
          do {
            do {
              if (*local_138 - lVar4 != 0) {
                _objc_enumerationMutation(*local_138 - lVar4,puVar2);
              }
              lVar5 = *(long *)(local_140 + (long)local_1b0 * 8);
              local_108 = lVar5;
              if (lVar5 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_text_0269ce68);
                _objc_retainAutoreleasedReturnValue();
                local_150 = lVar5;
                if ((lVar5 == 0) ||
                   ((*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0),
                   puVar3 = local_100[0], lVar1 = local_150, lVar5 == 0)) {
                  local_dc = 4;
                }
                else {
                  lVar5 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
                  local_c0 = 0;
                  local_b8 = 0;
                  local_c8 = lVar5;
                  local_b0 = lVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,lVar1,0,0,lVar5)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  lVar5 = local_150;
                  local_158 = puVar3;
                  if (puVar3 != (undefined *)0x0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_d0 = lVar5;
                  }
                  local_dc = (uint)(puVar3 != (undefined *)0x0);
                  _objc_storeStrong(&local_158,0);
                }
                _objc_storeStrong(&local_150,0);
                if ((local_dc != 0) && (local_dc != 4)) goto LAB_006159d0;
              }
              local_1b0 = local_1b0 + 1;
            } while (local_1b0 < local_1a8);
            local_1a8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8
                       ,0x10);
            local_1b0 = (undefined *)0x0;
          } while (local_1a8 != (undefined *)0x0);
        }
        local_dc = 0;
LAB_006159d0:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_dc == 0) {
          local_dc = 0;
        }
      }
      _objc_storeStrong(local_100,0);
    }
    _objc_storeStrong(&local_e8,0);
    if (local_dc == 0) {
      local_d0 = 0;
      local_dc = 1;
    }
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

