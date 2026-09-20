// FUN_00322468 @ 00322468

void FUN_00322468(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_180;
  ulong local_178;
  ulong local_128;
  undefined4 local_11c;
  ulong local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  _memset(auStack_100,0,0x40);
  uVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_178 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_178 != 0) {
    lVar3 = *local_f0;
    local_180 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,uVar2);
        }
        uVar4 = *(ulong *)(local_f8 + local_180 * 8);
        local_c0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        local_118[0] = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_hasPrefix__0269d320,&cf_WCRefineGlobalCorner_SectionCard_Fill_);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = local_118[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_118[0],PTR_s_hasPrefix__0269d320,
                      &cf_WCRefineGlobalCorner_SectionCard_Border_), (uVar4 & 1) == 0)) {
          local_11c = 3;
        }
        else {
          uVar4 = local_118[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118[0],PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_integerValue_026ca750);
          if ((local_b8 == 0) ||
             (uVar1 = local_b8,
             (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsIndex__0269fca0,uVar4),
             (uVar1 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeFromSuperlayer_026ca7f8);
            local_11c = 0;
          }
          else {
            local_11c = 3;
          }
          _objc_storeStrong(&local_128,0);
        }
        _objc_storeStrong(local_118,0);
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

