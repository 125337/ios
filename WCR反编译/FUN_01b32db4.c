// FUN_01b32db4 @ 01b32db4

byte FUN_01b32db4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong local_158;
  ulong local_150;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  int local_cc;
  long local_c8;
  ulong local_c0;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar3 = local_b8;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_c0;
    FUN_01b20404();
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar3 = *local_108;
      local_158 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar1);
          }
          lVar4 = *(long *)(local_110 + local_158 * 8);
          local_d8 = lVar4;
          FUN_01b1fc40();
          _objc_retainAutoreleasedReturnValue();
          local_120 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          if (lVar4 == 0) {
            local_cc = 3;
          }
          else {
            puVar2 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_keywordAlertContent_matchesKeywo_026a3770,
                       local_c8,local_120);
            if (((ulong)puVar2 & 1) == 0) {
              local_cc = 0;
            }
            else {
              local_a9 = 1;
              local_cc = 1;
            }
          }
          _objc_storeStrong(&local_120,0);
          if ((local_cc != 0) && (local_cc != 3)) goto LAB_01b33028;
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_cc = 0;
LAB_01b33028:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_cc == 0) {
      local_a9 = 0;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

