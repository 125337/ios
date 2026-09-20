// FUN_00f22f34 @ 00f22f34

byte FUN_00f22f34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_190;
  undefined *local_188;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  int local_fc;
  undefined *local_f8;
  ulong local_f0;
  ulong local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_1);
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_e8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
     uVar3 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_appendString__0269ccb0,local_e8);
  }
  uVar3 = local_f0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
     uVar3 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_appendString__0269ccb0,local_f0);
  }
  puVar1 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_d9 = 0;
    local_fc = 1;
  }
  else {
    _memset(auStack_148,0,0x40);
    local_d8 = &cf__gc;
    local_d0 = &cf__gc_T;
    local_c8 = &cf_format_s_;
    local_c0 = &cf_format_s_;
    local_b8 = &cf__O;
    local_b0 = &cf__O;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != (undefined *)0x0) {
      lVar4 = *local_138;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar4 != 0) {
            _objc_enumerationMutation(*local_138 - lVar4,puVar1);
          }
          local_108 = *(undefined8 *)(local_140 + (long)local_190 * 8);
          puVar2 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_containsString__0269d0b0,local_108);
          if (((ulong)puVar2 & 1) != 0) {
            local_d9 = 1;
            local_fc = 1;
            goto LAB_00f232bc;
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    local_fc = 0;
LAB_00f232bc:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_fc == 0) {
      local_d9 = 0;
      local_fc = 1;
    }
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

