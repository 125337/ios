// FUN_00666f68 @ 00666f68

void FUN_00666f68(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_208;
  ulong local_200;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  undefined *local_108;
  undefined8 local_100;
  long local_f8;
  ulong local_f0;
  undefined4 local_e8;
  ulong local_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  uVar1 = local_d8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = 1;
    local_d0 = puVar2;
    goto LAB_00667748;
  }
  uVar1 = local_d8;
  FUN_006653e8();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = uVar1;
  FUN_006627f0();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_hasPrefix__0269d320,&cf__);
    if ((((uVar1 & 1) == 0) ||
        (uVar1 = local_f0,
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_hasSuffix__0269d018,&cf__),
        (uVar1 & 1) == 0)) ||
       (uVar4 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
       uVar1 = local_f0, uVar4 < 2)) {
      uVar1 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_hasPrefix__0269d320,&cf__);
      if ((uVar1 & 1) != 0) {
        puVar2 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = 1;
        local_d0 = puVar2;
        goto LAB_00667728;
      }
    }
    else {
      uVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      local_f8 = uVar4 - 2;
      local_c0 = 1;
      local_b8 = 1;
      local_100 = 1;
      local_c8 = local_f8;
      local_b0 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringWithRange__0269d138,1,local_f8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_f0;
      local_f0 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    uVar4 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,&cf__);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_f0;
    local_f0 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    _memset(auStack_150,0,0x40);
    uVar1 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_200 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_200 != 0) {
      lVar3 = *local_140;
      local_208 = 0;
      do {
        do {
          if (*local_140 - lVar3 != 0) {
            _objc_enumerationMutation(*local_140 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_148 + local_208 * 8);
          local_110 = uVar4;
          FUN_006653e8();
          _objc_retainAutoreleasedReturnValue();
          local_158 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
          if (uVar4 == 0) {
            local_e8 = 3;
          }
          else {
            uVar4 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,&cf_eeN)
            ;
            if ((((uVar4 & 1) == 0) &&
                (uVar4 = local_158,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_isEqualToString__0269ccc8,&cf_eN), (uVar4 & 1) == 0)) &&
               ((uVar4 = local_158,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_isEqualToString__0269ccc8,&cf__), (uVar4 & 1) == 0 &&
                ((uVar4 = local_158,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_158,PTR_s_isEqualToString__0269ccc8,&cf__), (uVar4 & 1) == 0 &&
                 (uVar4 = local_158, FUN_00667e44(), (uVar4 & 1) == 0)))))) {
              uVar4 = local_158;
              FUN_00668388();
              if ((uVar4 & 1) == 0) {
                uVar4 = local_158;
                FUN_00668880();
                if ((uVar4 & 1) == 0) {
                  local_e8 = 3;
                }
                else {
                  puVar2 = local_108;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_108,PTR_s_containsObject__0269cbb8,local_158);
                  if (((ulong)puVar2 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_108,PTR_s_addObject__0269d180,local_158);
                  }
                  local_e8 = 0;
                }
              }
              else {
                local_e8 = 3;
              }
            }
            else {
              local_e8 = 3;
            }
          }
          _objc_storeStrong(&local_158,0);
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10
                  );
        local_208 = 0;
      } while (local_200 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = puVar2;
    local_e8 = 1;
    _objc_storeStrong(&local_108,0);
  }
  else {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = 1;
    local_d0 = puVar2;
  }
LAB_00667728:
  _objc_storeStrong(&local_f0,0);
LAB_00667748:
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_d0);
  return;
}

