// FUN_007ab000 @ 007ab000

byte FUN_007ab000(undefined8 param_1,byte param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  ulong local_118;
  int local_110;
  undefined1 *local_100;
  byte local_f1;
  ulong local_f0;
  byte local_e1;
  undefined8 local_e0;
  long *local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_f0;
  local_f0 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  local_100 = param_3;
  local_f1 = param_2;
  FUN_007ab5f4();
  if (((uVar1 & 1) == 0) ||
     (uVar3 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_e1 = local_f1 & 1;
    local_110 = 1;
    goto LAB_007ab590;
  }
  uVar3 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_118 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320,&cf_clicfg_);
  if ((uVar3 & 1) == 0) {
    local_e1 = local_f1 & 1;
    local_110 = 1;
  }
  else {
    local_d8 = &DAT_028ccbe0;
    local_e0 = 0;
    _objc_storeStrong(&local_e0,&PTR___NSConcreteGlobalBlock_0257fe30);
    if (*local_d8 + 1 != 0) {
      _dispatch_once(*local_d8 + 1,local_d8,local_e0);
    }
    _objc_storeStrong(&local_e0,0);
    uVar3 = DAT_028ccbd8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccbd8,PTR_s_containsObject__0269cbb8,local_118);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_containsString__0269d0b0,&cf_teenager);
      if ((((uVar3 & 1) != 0) ||
          (uVar3 = local_118,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_containsString__0269d0b0,&cf_teen_mode), (uVar3 & 1) != 0)) ||
         (uVar3 = local_118,
         (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_hasPrefix__0269d320,&cf_clicfg_teen_)
         , (uVar3 & 1) != 0)) {
        local_50 = &cf_allow;
        local_48 = &cf_enable;
        local_40 = &cf_open;
        local_38 = &cf_show;
        local_30 = &cf_fallback;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_50,5);
        _objc_retainAutoreleasedReturnValue();
        local_120 = puVar4;
        _memset(auStack_168,0,0x40);
        puVar4 = local_120;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_d0,
                   0x10);
        if (local_1d8 != (undefined *)0x0) {
          lVar5 = *local_158;
          local_1e0 = (undefined *)0x0;
          do {
            do {
              if (*local_158 - lVar5 != 0) {
                _objc_enumerationMutation(*local_158 - lVar5,puVar4);
              }
              local_128 = *(undefined8 *)(local_160 + (long)local_1e0 * 8);
              uVar3 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_containsString__0269d0b0,local_128);
              if ((uVar3 & 1) != 0) {
                if (local_100 != (undefined1 *)0x0) {
                  *local_100 = 1;
                }
                local_e1 = 0;
                local_110 = 1;
                goto LAB_007ab510;
              }
              local_1e0 = local_1e0 + 1;
            } while (local_1e0 < local_1d8);
            local_1d8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_d0
                       ,0x10);
            local_1e0 = (undefined *)0x0;
          } while (local_1d8 != (undefined *)0x0);
        }
        local_110 = 0;
LAB_007ab510:
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (local_110 == 0) {
          local_110 = 0;
        }
        _objc_storeStrong(&local_120,0);
        if (local_110 != 0) goto LAB_007ab570;
      }
      local_e1 = local_f1 & 1;
      local_110 = 1;
    }
    else {
      if (local_100 != (undefined1 *)0x0) {
        *local_100 = 1;
      }
      local_e1 = 0;
      local_110 = 1;
    }
  }
LAB_007ab570:
  _objc_storeStrong(&local_118,0);
LAB_007ab590:
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_e1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

