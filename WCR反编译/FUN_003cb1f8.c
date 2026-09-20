// FUN_003cb1f8 @ 003cb1f8

void FUN_003cb1f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_160;
  undefined *local_158;
  ulong local_118;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_b0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_b0);
  }
  uVar3 = local_b8;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_b8);
  }
  _memset(auStack_108,0,0x40);
  puVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_158 != (undefined *)0x0) {
    lVar6 = *local_f8;
    local_160 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,puVar1);
        }
        local_c8 = *(undefined8 *)(local_100 + (long)local_160 * 8);
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_160 = (undefined *)0x0;
    } while (local_158 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = local_b0;
  FUN_003b3da8(local_b0,"_borderImageView");
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_110 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
    uVar5 = local_b0;
    FUN_003b3da8(local_b0,"borderImageView");
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_110;
    local_110 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_110;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setHidden__026ca970,1);
  }
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewWithTag__026cabe0,0x24f6e4);
  _objc_retainAutoreleasedReturnValue();
  local_118 = uVar3;
  if (uVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

