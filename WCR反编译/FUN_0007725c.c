// FUN_0007725c @ 0007725c

void FUN_0007725c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_1f0;
  ulong local_1e8;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  ulong local_f8 [3];
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = param_6;
  if ((local_b0 == 0) || (param_6 < 0)) {
    local_bc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
    local_e0 = param_1;
    uStack_d8 = param_2;
    local_d0 = param_3;
    dStack_c8 = param_4;
    if ((param_3 <= 0.5) || (param_4 <= 0.5)) {
      local_bc = 1;
    }
    else {
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f8[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _memset(auStack_140,0,0x40);
      uVar1 = local_f8[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      if (local_1e8 != 0) {
        lVar4 = *local_130;
        local_1f0 = 0;
        do {
          do {
            if (*local_130 - lVar4 != 0) {
              _objc_enumerationMutation(*local_130 - lVar4,uVar1);
            }
            local_100 = *(ulong *)(local_138 + local_1f0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,uStack_d8,local_d0,dStack_c8,local_100,PTR_s_setFrame__026ca960);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_setAutoresizingMask__026ca878,0x12);
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setClipsToBounds__026ca8c8,1);
            uVar2 = local_100;
            puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setContentMode__026ca8e0,1);
            }
            if (0 < local_b8) {
              FUN_0007725c(local_100,local_b8 + -1);
            }
            local_1f0 = local_1f0 + 1;
          } while (local_1f0 < local_1e8);
          local_1e8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1f0 = 0;
        } while (local_1e8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(local_f8,0);
      local_bc = 0;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

