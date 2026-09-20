// FUN_006c00cc @ 006c00cc

void FUN_006c00cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  ulong local_108 [3];
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined **local_c8;
  undefined4 local_bc;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  lVar3 = local_b0;
  if ((local_b0 == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    ppuVar1 = &local_f0;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_006c04dc;
    local_d8 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = lVar3;
    _objc_retainBlock();
    local_c8 = ppuVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setUserInteractionEnabled__026caad8,1);
    FUN_006c0598(local_b8,local_c8);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_viewWithTag__026cabe0,0x3e5);
    _objc_retainAutoreleasedReturnValue();
    local_108[0] = uVar2;
    FUN_006c0598(uVar2,local_c8);
    _memset(auStack_150,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a0 != 0) {
      lVar3 = *local_140;
      local_1a8 = 0;
      do {
        do {
          if (*local_140 - lVar3 != 0) {
            _objc_enumerationMutation(*local_140 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_148 + local_1a8 * 8);
          local_110 = uVar4;
          FUN_006c0708();
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_setUserInteractionEnabled__026caad8,1);
            FUN_006c0598(local_110,local_c8);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(local_108);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

