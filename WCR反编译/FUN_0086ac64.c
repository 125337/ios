// FUN_0086ac64 @ 0086ac64

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0086ac64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 byte param_9)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  long local_f0;
  byte local_e5;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_5;
  local_c0 = param_4;
  local_b8 = param_1;
  uStack_b0 = param_2;
  _objc_storeStrong(&local_d0,param_6);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_7);
  local_f0 = 0;
  local_e5 = param_9;
  local_e4 = param_8;
  local_e0 = param_3;
  _memset(auStack_138,0,0x40);
  uVar2 = local_d0;
  FUN_00889204();
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1c0 != 0) {
    lVar4 = *local_128;
    local_1c8 = 0;
    do {
      do {
        if (*local_128 - lVar4 != 0) {
          _objc_enumerationMutation(*local_128 - lVar4,uVar2);
        }
        local_f8 = *(undefined8 *)(local_130 + local_1c8 * 8);
        lVar3 = local_c0;
        (*DAT_028cd590)(local_b8,uStack_b0,local_e0,local_c0,local_c8,local_f8,local_d8,local_e4,
                        local_e5 & 1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_f0;
        local_f0 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_f0 != 0) goto LAB_0086aee4;
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
  }
LAB_0086aee4:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_d0;
  FUN_00889684(local_b8,uStack_b0,local_d0,local_f0,&cf_MMThemeManager_svgImageNamed_size_angle);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

