// FUN_002f2d64 @ 002f2d64

/* WARNING: Removing unreachable block (ram,0x002f3308) */

void FUN_002f2d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_1d0;
  undefined *local_1c8;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_captureMediaDarkModeSnapshot_026a1f00);
  local_b8 = 0;
  _memset(auStack_100,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_1c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_1c8 != (undefined *)0x0) {
    lVar3 = *local_f0;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,puVar2);
        }
        uVar4 = *(ulong *)(local_f8 + (long)local_1d0 * 8);
        local_c0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKeyWindow_0269cd70);
        if ((uVar4 & 1) != 0) {
          _objc_storeStrong(&local_b8,local_c0);
          local_110 = 2;
          goto LAB_002f2fd8;
        }
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  local_110 = 0;
LAB_002f2fd8:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_110 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
    puVar1 = PTR_WCRefineConfig_026cdf58;
    local_140 = param_1;
    local_138 = param_2;
    local_130 = param_3;
    uStack_128 = param_4;
    local_120 = param_3;
    uStack_118 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_gestureScreenshotScale_026a1f08);
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_150 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_150 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_158 = 0x4010000000000000;
    }
    else if (local_150 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_158 = 0x4018000000000000;
    }
    else if (local_150 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      local_158 = 0x4020000000000000;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      local_158 = param_3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_158 = param_3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    uStack_168 = uStack_118;
    local_170 = local_120;
    uVar5 = local_120;
    uVar6 = uStack_118;
    uVar7 = local_158;
    _UIGraphicsBeginImageContextWithOptions(0);
    lVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
    local_190 = uVar5;
    local_188 = uVar6;
    local_180 = uVar7;
    local_178 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar6,uVar7,param_1,lVar3,PTR_s_drawViewHierarchyInRect_afterScr_0269e2f8,1);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_198 = lVar3;
    _UIGraphicsEndImageContext();
    lVar3 = local_198;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = lVar3;
    local_110 = 1;
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

