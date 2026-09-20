// FUN_00821344 @ 00821344

void FUN_00821344(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_238;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  uVar1 = local_b0;
  _objc_getAssociatedObject(local_b0,&DAT_028cd0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  local_b8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_c8 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    uVar1 = local_b0;
    local_d0 = param_1;
    _objc_getAssociatedObject(local_b0,&DAT_028cd1d1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_b8;
    local_d8 = uVar1;
    _objc_getAssociatedObject(local_b8,&DAT_028cd1d2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_b8;
    local_e0 = uVar3;
    _objc_getAssociatedObject(local_b8,&DAT_028cd0e1);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar1;
    FUN_00824db0(local_b8);
    FUN_0082515c(local_b8);
    uVar1 = local_d8;
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_d8;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_b0;
      FUN_00826364();
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar1;
      FUN_00827160(uVar1);
      FUN_0082435c(local_148,0);
      _objc_storeStrong(&local_148,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = uVar3;
      _memset(auStack_138,0,0x40);
      uVar1 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_visibleCells_0269fc48);
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1d0 != 0) {
        lVar4 = *local_128;
        local_1d8 = 0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,uVar1);
            }
            local_f8 = *(undefined8 *)(local_130 + local_1d8 * 8);
            FUN_0082d7c8(local_f8);
            local_1d8 = local_1d8 + 1;
          } while (local_1d8 < local_1d0);
          local_1d0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1d8 = 0;
        } while (local_1d0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      FUN_00827160(local_f0);
      uVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_backgroundView_026a0320);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_b8;
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 == uVar1) {
        uVar1 = local_b8;
        _objc_getAssociatedObject(0,local_b8,&DAT_028cd1dd);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        local_140 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) == 0) {
          local_238 = local_140;
        }
        else {
          local_238 = 0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundView__026a2060,local_238);
        _objc_storeStrong(&local_140,0);
      }
      _objc_setAssociatedObject(local_b8,&DAT_028cd1dd,0,1);
      _objc_storeStrong(&local_f0,0);
    }
    uVar3 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028cd1d4);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_b8;
    (*(code *)PTR__objc_release_02578630)();
    if (uVar3 != uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_removeFromSuperview_026ca800);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_removeFromSuperview_026ca800);
    FUN_0082435c(local_d8,0);
    FUN_0082e0f8(local_b8);
    _objc_setAssociatedObject(local_b0,&DAT_028cd0e0,0,1);
    _objc_setAssociatedObject(local_b0,&DAT_028cd1d1,0,1);
    FUN_0081501c(local_d0,local_b0,&cf_remove,&cf___,&cf___,local_e0,&cf___,local_e8);
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

