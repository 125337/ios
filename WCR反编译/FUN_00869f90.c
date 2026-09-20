// FUN_00869f90 @ 00869f90

void FUN_00869f90(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  long local_d0;
  byte local_c1;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_d0 = 0;
  local_c1 = param_4;
  _memset(auStack_118,0,0x40);
  uVar2 = local_c0;
  FUN_00889204();
  _objc_retainAutoreleasedReturnValue();
  local_168 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_168 != 0) {
    lVar4 = *local_108;
    local_170 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,uVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + local_170 * 8);
        lVar3 = local_b0;
        (*DAT_028cd570)(local_b0,local_b8,local_d8,local_c1 & 1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_d0;
        local_d0 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_d0 != 0) goto LAB_0086a1b4;
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
LAB_0086a1b4:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_c0;
  FUN_00889684(*(undefined8 *)PTR__CGSizeZero_025782f8,*(undefined8 *)(PTR__CGSizeZero_025782f8 + 8)
               ,local_c0,local_d0,&cf_MMThemeManager_imageNamed_warn);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

