// FUN_00869c98 @ 00869c98

void FUN_00869c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  long local_c8;
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
  local_c8 = 0;
  _memset(auStack_110,0,0x40);
  uVar2 = local_c0;
  FUN_00889204();
  _objc_retainAutoreleasedReturnValue();
  local_150 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_150 != 0) {
    lVar4 = *local_100;
    local_158 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,uVar2);
        }
        local_d0 = *(undefined8 *)(local_108 + local_158 * 8);
        lVar3 = local_b0;
        (*DAT_028cd568)(local_b0,local_b8,local_d0);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_c8;
        local_c8 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_c8 != 0) goto LAB_00869ea8;
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
LAB_00869ea8:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_c0;
  FUN_00889684(*(undefined8 *)PTR__CGSizeZero_025782f8,*(undefined8 *)(PTR__CGSizeZero_025782f8 + 8)
               ,local_c0,local_c8,&cf_MMThemeManager_imageNamed);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

