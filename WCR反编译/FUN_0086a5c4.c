// FUN_0086a5c4 @ 0086a5c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0086a5c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  long local_e0;
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
  local_c8 = param_4;
  local_c0 = param_3;
  local_b8 = param_1;
  uStack_b0 = param_2;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  local_e0 = 0;
  _memset(auStack_128,0,0x40);
  uVar2 = local_d0;
  FUN_00889204();
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1a0 != 0) {
    lVar4 = *local_118;
    local_1a8 = 0;
    do {
      do {
        if (*local_118 - lVar4 != 0) {
          _objc_enumerationMutation(*local_118 - lVar4,uVar2);
        }
        local_e8 = *(undefined8 *)(local_120 + local_1a8 * 8);
        lVar3 = local_c0;
        (*DAT_028cd580)(local_b8,uStack_b0,local_c0,local_c8,local_e8,local_d8);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_e0;
        local_e0 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_e0 != 0) goto LAB_0086a810;
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_1a8 = 0;
    } while (local_1a0 != 0);
  }
LAB_0086a810:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_d0;
  FUN_00889684(local_b8,uStack_b0,local_d0,local_e0,&cf_MMThemeManager_svgImageNamed_size_color);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

