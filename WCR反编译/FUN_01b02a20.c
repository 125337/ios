// FUN_01b02a20 @ 01b02a20

void FUN_01b02a20(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong local_170;
  ulong local_168;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  int local_c4;
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
  if (local_b8 == 0) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar5 = *local_100;
      local_170 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar1);
          }
          lVar6 = *(long *)(local_108 + local_170 * 8);
          local_d0 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
          if (lVar6 != 0) {
            local_118 = 0;
            lVar6 = local_d0;
            _NSSelectorFromString();
            uVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,lVar6)
            ;
            if ((uVar2 & 1) == 0) {
              uVar3 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_d0);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_118;
              local_118 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
            else {
              uVar3 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,lVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_118;
              local_118 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
            uVar2 = local_118;
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((uVar2 & 1) == 0) ||
               (uVar3 = local_118,
               (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
               uVar2 = local_118, uVar3 == 0)) {
              local_c4 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar2;
              local_c4 = 1;
            }
            _objc_storeStrong(&local_118,0);
            if (local_c4 != 0) goto LAB_01b02dd0;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_c4 = 0;
LAB_01b02dd0:
    (*(code *)PTR__objc_release_02578630)(uVar1);
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

