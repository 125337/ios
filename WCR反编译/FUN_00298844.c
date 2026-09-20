// FUN_00298844 @ 00298844

byte FUN_00298844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_170;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_d0;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (lVar4 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar4 = *local_108;
      local_178 = 0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_110 + local_178 * 8);
          local_120 = 0;
          local_d8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
          if ((uVar5 & 1) != 0) {
            uVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_120;
            local_120 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          uVar5 = local_120;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar5 & 1) == 0) ||
             (uVar5 = local_120,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_120,PTR_s_isEqualToString__0269ccc8,local_c0), (uVar5 & 1) == 0)) {
            local_d0 = 0;
          }
          else {
            local_a9 = 1;
            local_d0 = 1;
          }
          _objc_storeStrong(&local_120,0);
          if (local_d0 != 0) goto LAB_00298bf0;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_d0 = 0;
LAB_00298bf0:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d0 == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

