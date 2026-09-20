// FUN_010ed1a8 @ 010ed1a8

void FUN_010ed1a8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_178;
  ulong local_170;
  ulong local_140 [4];
  long local_120;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  uint local_c4;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((local_b8 == 0) ||
     (uVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar6 = *local_100;
      local_178 = 0;
      do {
        do {
          if (*local_100 - lVar6 != 0) {
            _objc_enumerationMutation(*local_100 - lVar6,uVar2);
          }
          lVar7 = *(long *)(local_108 + local_178 * 8);
          local_118 = 0;
          local_d0 = lVar7;
          _NSSelectorFromString();
          local_120 = lVar7;
          if ((lVar7 != 0) &&
             (uVar3 = local_b8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b8,PTR_s_respondsToSelector__026ca818,lVar7), (uVar3 & 1) != 0)) {
            uVar4 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_120);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_118;
            local_118 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          uVar3 = local_118;
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((uVar3 & 1) == 0) ||
             (uVar3 = local_118,
             (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0), uVar3 == 0)) {
            uVar4 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_d0);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_118;
            local_118 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          uVar3 = local_118;
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          uVar4 = local_118;
          if ((uVar3 & 1) == 0) {
            local_c4 = 3;
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_140[0] = uVar4;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            uVar4 = local_140[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_length_0269cca0);
            uVar3 = local_140[0];
            bVar1 = uVar4 != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar3;
            }
            local_c4 = (uint)bVar1;
            _objc_storeStrong(bVar1,local_140,0);
          }
          _objc_storeStrong(&local_118,0);
          if ((local_c4 != 0) && (local_c4 != 3)) goto LAB_010ed640;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_c4 = 0;
LAB_010ed640:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_c4 == 0) {
      local_b0 = 0;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

