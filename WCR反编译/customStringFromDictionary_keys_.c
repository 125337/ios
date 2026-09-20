// customStringFromDictionary:keys: @ 01025148

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::customStringFromDictionary_keys_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_160;
  ulong local_158;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  int local_d4;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  uVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar5 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar2);
          }
          local_e0 = *(undefined8 *)(local_118 + local_160 * 8);
          uVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_objectForKeyedSubscript__0269d098,local_e0);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_128 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar3 & 1) == 0) ||
             (uVar4 = local_128,
             (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
             uVar3 = local_128, uVar4 == 0)) {
            uVar3 = local_128;
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar3 & 1) == 0) {
              local_d4 = 0;
            }
            else {
              uVar3 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_stringValue_0269ef08);
              _objc_retainAutoreleasedReturnValue();
              local_d4 = 1;
              local_b0 = uVar3;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar3;
            local_d4 = 1;
          }
          _objc_storeStrong(&local_128,0);
          if (local_d4 != 0) goto LAB_01025468;
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_d4 = 0;
LAB_01025468:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d4 == 0) {
      local_b0 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

