// FUN_0081f6b4 @ 0081f6b4

void FUN_0081f6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_1a0;
  undefined *local_198;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined *local_e0;
  undefined *local_c8;
  int local_c0;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_5);
  local_b9 = param_6;
  if (local_b8 == (undefined *)0x0) {
    local_b0 = (undefined *)0x0;
    local_c0 = 1;
  }
  else {
    puVar1 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028cd1d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    local_c8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_c8;
    if (((ulong)puVar1 & 1) == 0) {
      _memset(auStack_120,0,0x40);
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_198 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_198 != (undefined *)0x0) {
        lVar3 = *local_110;
        local_1a0 = (undefined *)0x0;
        do {
          do {
            if (*local_110 - lVar3 != 0) {
              _objc_enumerationMutation(*local_110 - lVar3,puVar2);
            }
            puVar4 = *(undefined **)(local_118 + (long)local_1a0 * 8);
            puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            local_e0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((ulong)puVar4 & 1) != 0) {
              _objc_setAssociatedObject(local_b8,&DAT_028cd1d0,local_e0,1);
              puVar1 = local_e0;
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = puVar1;
              local_c0 = 1;
              goto LAB_0081f9f4;
            }
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_1a0 = (undefined *)0x0;
        } while (local_198 != (undefined *)0x0);
      }
      local_c0 = 0;
LAB_0081f9f4:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_c0 == 0) {
        if ((local_b9 & 1) == 0) {
          local_b0 = (undefined *)0x0;
          local_c0 = 1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)
                    (param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__026ca6e8);
          puVar2 = local_c8;
          local_c8 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setContentMode__026ca8e0,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_setUserInteractionEnabled__026caad8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setOpaque__026ca9f8,0);
          puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setAutoresizingMask__026ca878,0x12);
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addSubview__026ca4c0,local_c8);
          _objc_setAssociatedObject(local_b8,&DAT_028cd1d0,local_c8,1);
          puVar2 = local_c8;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar2;
          local_c0 = 1;
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_c0 = 1;
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

