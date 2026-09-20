// FUN_0086b308 @ 0086b308

void FUN_0086b308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5
                 )

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  long local_d8;
  byte local_c9;
  undefined8 local_c8;
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
  _objc_storeStrong(&local_c8,param_4);
  local_d8 = 0;
  local_c9 = param_5;
  _memset(auStack_120,0,0x40);
  uVar2 = local_c0;
  FUN_00889204();
  _objc_retainAutoreleasedReturnValue();
  local_170 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_170 != 0) {
    lVar4 = *local_110;
    local_178 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,uVar2);
        }
        local_e0 = *(undefined8 *)(local_118 + local_178 * 8);
        lVar3 = local_b0;
        (*DAT_028cd5a0)(local_b0,local_b8,local_e0,local_c8,local_c9 & 1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_d8;
        local_d8 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_d8 != 0) goto LAB_0086b544;
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
LAB_0086b544:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_c0;
  FUN_00889684(*(undefined8 *)PTR__CGSizeZero_025782f8,*(undefined8 *)(PTR__CGSizeZero_025782f8 + 8)
               ,local_c0,local_d8,&cf_MMThemeManager_svgImageNamed_color_ignore);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

