// FUN_0075e6e0 @ 0075e6e0

void FUN_0075e6e0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  cfstringStruct *local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    pcVar1 = &cf_WCSearchBar;
    _NSClassFromString();
    local_c0 = pcVar1;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       (uVar2 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,pcVar1),
       (uVar2 & 1) != 0)) {
      FUN_0075e8fc(local_b0);
    }
    _memset(auStack_108,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_128 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_128 != 0) {
      lVar3 = *local_f8;
      local_130 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,uVar2);
          }
          local_c8 = *(undefined8 *)(local_100 + local_130 * 8);
          FUN_0075e6e0(local_c8);
          local_130 = local_130 + 1;
        } while (local_130 < local_128);
        local_128 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_130 = 0;
      } while (local_128 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

