// svgColorExcludeIconNamesFromString: @ 01f38be8

/* Function Stack Size: 0x18 bytes */

ID WCRefineUIBeautifyViewController::svgColorExcludeIconNamesFromString_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_188;
  ulong local_180;
  long local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_format_s_);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    _memset(auStack_140,0,0x40);
    uVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar4 = *local_130;
      local_188 = 0;
      do {
        do {
          if (*local_130 - lVar4 != 0) {
            _objc_enumerationMutation(*local_130 - lVar4,uVar1);
          }
          lVar5 = *(long *)(local_138 + local_188 * 8);
          local_100 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_148 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if ((lVar5 == 0) ||
             (puVar2 = local_f0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_f0,PTR_s_containsObject__0269cbb8,local_148), ((ulong)puVar2 & 1) != 0
             )) {
            local_cc = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_148);
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_148);
            local_cc = 0;
          }
          _objc_storeStrong(&local_148,0);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
    local_cc = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

