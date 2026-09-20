// FUN_00185f34 @ 00185f34

void FUN_00185f34(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_d0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  (*DAT_028c8920)(local_b0,local_b8,local_c0);
  if (local_c0 == 0) {
    local_d0 = 1;
  }
  else {
    uVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_userInterfaceStyle_026cabc8);
    uVar1 = local_b0;
    local_d8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_e0 = uVar4;
    if (local_d8 == uVar4) {
      local_d0 = 1;
    }
    else {
      local_e8 = 0;
      _memset(auStack_130,0,0x40);
      uVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_1b0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_1b0 != 0) {
        lVar3 = *local_120;
        local_1b8 = 0;
        do {
          do {
            if (*local_120 - lVar3 != 0) {
              _objc_enumerationMutation(*local_120 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_128 + local_1b8 * 8);
            puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
            local_f0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar4 & 1) != 0) {
              _objc_storeStrong(&local_e8,local_f0);
              local_d0 = 2;
              goto LAB_001862f4;
            }
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1b8 = 0;
        } while (local_1b0 != 0);
      }
      local_d0 = 0;
LAB_001862f4:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar4 = local_e8;
      puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar1 = local_e8;
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_138 = uVar1;
        local_160 = PTR___NSConcreteGlobalBlock_02578658;
        local_158 = 0xd0800000;
        local_154 = 0;
        local_150 = FUN_00189e8c;
        local_148 = &DAT_0257a9d0;
        (*(code *)PTR__objc_retain_02578638)();
        local_140 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_performWithoutAnimation__0269e7e0,&local_160);
        _objc_storeStrong(&local_140);
        _objc_storeStrong(&local_138,0);
      }
      _objc_storeStrong(&local_e8,0);
      local_d0 = 0;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

