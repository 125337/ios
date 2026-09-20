// FUN_0060f0f4 @ 0060f0f4

void FUN_0060f0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1d0;
  ulong local_1c8;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  uVar1 = local_b0;
  if ((local_b0 == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = uVar1;
    local_d0 = (undefined *)0x0;
    _memset(auStack_118,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c8 != 0) {
      lVar4 = *local_108;
      local_1d0 = 0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_110 + local_1d0 * 8);
          puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_d8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar5 & 1) != 0) {
            _objc_storeStrong(&local_d0,local_d8);
            local_bc = 2;
            goto LAB_0060f37c;
          }
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_1d0 = 0;
      } while (local_1c8 != 0);
    }
    local_bc = 0;
LAB_0060f37c:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d0 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,puVar3,PTR_s_initWithFrame__026ca6e8);
      puVar2 = local_d0;
      local_d0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setContentMode__026ca8e0,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setImage__026ca978,local_b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addSubview__026ca4c0,local_d0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setImage__026ca978,local_b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_d0,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setHidden__026ca970,0);
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

