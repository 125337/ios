// FUN_00f88f14 @ 00f88f14

void FUN_00f88f14(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  undefined *local_110;
  undefined *local_108;
  long *local_100;
  ulong local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined **local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  lVar4 = local_b8;
  if ((local_b0 == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    ppuVar1 = &local_f0;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_00f89450;
    local_d8 = &DAT_02583778;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = lVar4;
    _objc_retainBlock();
    uVar5 = local_b0;
    local_c8 = ppuVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_getReferView_026acc38);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_getReferView_026acc38);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_f8 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar5 & 1) != 0) {
        (*(code *)local_c8[2])(local_c8,local_f8);
      }
      _objc_storeStrong(&local_f8,0);
    }
    for (local_100 = &DAT_0280e098; ppuVar1 = local_c8, *local_100 != 0; local_100 = local_100 + 1)
    {
      uVar5 = local_b0;
      FUN_00f877ac(local_b0,*local_100);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar1[2])();
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    while (puVar2 = local_108, (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0)
          , puVar2 != (undefined *)0x0) {
      puVar2 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_removeLastObject_0269e830);
      if (((long)local_110 - local_b0 == 0) ||
         (puVar2 = local_110, FUN_00f89624((long)local_110 - local_b0), ((ulong)puVar2 & 1) == 0)) {
        _memset(auStack_158,0,0x40);
        puVar2 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1b8 != (undefined *)0x0) {
          lVar4 = *local_148;
          local_1c0 = (undefined *)0x0;
          do {
            do {
              if (*local_148 - lVar4 != 0) {
                _objc_enumerationMutation(*local_148 - lVar4,puVar2);
              }
              uVar5 = *(ulong *)(local_150 + (long)local_1c0 * 8);
              local_118 = uVar5;
              FUN_00f89624();
              if ((uVar5 & 1) == 0) {
                uVar5 = local_118;
                (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar5;
                FUN_00f8984c();
                (*(code *)PTR__objc_release_02578630)(uVar5);
                if ((uVar3 & 1) != 0) {
                  (*(code *)local_c8[2])(local_c8,local_118);
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_118)
                ;
              }
              local_1c0 = local_1c0 + 1;
            } while (local_1c0 < local_1b8);
            local_1b8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8
                       ,0x10);
            local_1c0 = (undefined *)0x0;
          } while (local_1b8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_bc = 0;
      }
      else {
        local_bc = 5;
      }
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(0,&local_108);
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

