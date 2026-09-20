// FUN_00219074 @ 00219074

void FUN_00219074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  long *plVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(plVar2,param_2);
  uVar1 = (uint)plVar2;
  local_c0 = param_3;
  local_b8 = param_1;
  FUN_001cf94c();
  if (((uVar1 & 1) == 0) || (local_b0 == 0)) {
    local_d0 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = 0;
    local_d8 = puVar3;
    while (puVar3 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
          puVar3 != (undefined *)0x0 && local_e0 < 0x50) {
      puVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeObjectAtIndex__0269d530,0);
      local_e0 = local_e0 + 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeAnimationForKey__026ca7f0,&cf_cornerRadius);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_e8,PTR_s_setCornerRadius__026ca900);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setMaskedCorners__0269ebc8,local_c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setMasksToBounds__026ca9b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_e8,PTR_s_setBorderWidth__026ca898);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setBorderColor__026ca890,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _memset(auStack_130,0,0x40);
      puVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_sublayers_026a07b8);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1a8 != (undefined *)0x0) {
        lVar5 = *local_120;
        local_1b0 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar5 != 0) {
              _objc_enumerationMutation(*local_120 - lVar5,puVar3);
            }
            local_f0 = *(undefined8 *)(local_128 + (long)local_1b0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_f0);
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < local_1a8);
          local_1a8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1b0 = (undefined *)0x0;
        } while (local_1a8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_e8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
    _objc_storeStrong(&local_d8,0);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

