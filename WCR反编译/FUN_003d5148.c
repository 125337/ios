// FUN_003d5148 @ 003d5148

undefined1  [16] FUN_003d5148(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined *local_128;
  undefined4 local_11c;
  ulong local_118;
  ulong local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_118 = 0;
  _objc_storeStrong(&local_118,param_1);
  uVar3 = local_118;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_118, (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_d8 = 0x7fffffffffffffff;
    local_e0 = 0;
    local_d0 = 0x7fffffffffffffff;
    local_c8 = 0;
    local_110 = 0x7fffffffffffffff;
    puStack_108 = (undefined *)0x0;
    local_11c = 1;
  }
  else {
    local_f8 = 0x7fffffffffffffff;
    local_100 = 0;
    local_f0 = 0x7fffffffffffffff;
    local_e8 = 0;
    local_110 = 0x7fffffffffffffff;
    puStack_108 = (undefined *)0x0;
    local_40 = &cf__;
    local_38 = &cf_format_s_;
    local_30 = &cf__;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar2;
    _memset(auStack_170,0,0x40);
    puVar2 = local_128;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_c0,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar5 = *local_160;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_160 - lVar5 != 0) {
            _objc_enumerationMutation(*local_160 - lVar5,puVar2);
          }
          local_130 = *(undefined8 *)(local_168 + (long)local_1b0 * 8);
          uVar3 = local_118;
          puVar4 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_rangeOfString__0269d838,local_130);
          if ((uVar3 != 0x7fffffffffffffff) &&
             (((local_110 == 0x7fffffffffffffff || (uVar3 < local_110)) ||
              ((uVar3 == local_110 && (puStack_108 < puVar4)))))) {
            local_110 = uVar3;
            puStack_108 = puVar4;
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_c0,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11c = 1;
    _objc_storeStrong(&local_128,0);
  }
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    auVar1._8_8_ = puStack_108;
    auVar1._0_8_ = local_110;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

