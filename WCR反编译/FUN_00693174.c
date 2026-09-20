// FUN_00693174 @ 00693174

byte FUN_00693174(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  int local_f0;
  long local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  lVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_d1 = 0;
    local_f0 = 1;
  }
  else {
    _memset(auStack_138,0,0x40);
    local_d0 = &cf_linkqrcode_list;
    local_c8 = &cf_linkqrcode_homeextra;
    local_c0 = &cf_linkqrcode_modify;
    local_b8 = &cf_linkqrcodesource_getshopinfo;
    local_b0 = &cf_payshortlink_checkoccupation;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != (undefined *)0x0) {
      lVar3 = *local_128;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar3 != 0) {
            _objc_enumerationMutation(*local_128 - lVar3,puVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + (long)local_198 * 8);
          lVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_rangeOfString_options__0269d118,local_f8,1);
          if (lVar2 != 0x7fffffffffffffff) {
            local_d1 = 1;
            local_f0 = 1;
            goto LAB_00693420;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    local_f0 = 0;
LAB_00693420:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_f0 == 0) {
      lVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_rangeOfString_options__0269d118,&cf_linkqrcode_get,1);
      if (lVar3 == 0x7fffffffffffffff) {
        local_d1 = 0;
        local_f0 = 1;
      }
      else {
        lVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_rangeOfString_options__0269d118,&cf_getshopinfo,1);
        local_d1 = lVar3 == 0x7fffffffffffffff;
        local_f0 = 1;
      }
    }
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

