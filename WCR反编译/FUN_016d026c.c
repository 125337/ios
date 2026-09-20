// FUN_016d026c @ 016d026c

void FUN_016d026c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint local_144;
  uint local_cc;
  undefined *local_b0;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  ulong local_90;
  ulong local_88;
  undefined *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined *local_68;
  int local_60;
  byte local_59;
  undefined *local_58;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_59 = 0;
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_cc = 1;
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_cc = (uint)puVar2 ^ 1;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_cc & 1) != 0) {
    FUN_016abf68(&cf_eN_gN_zTQ);
    local_60 = 1;
    goto LAB_016d0bb8;
  }
  puVar2 = local_38;
  FUN_016aed70();
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_68;
    local_68 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (local_68 == (undefined *)0x0) {
    FUN_016abf68(&cf_elSb);
    local_60 = 1;
  }
  else {
    local_70 = 0;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_78 = puVar4;
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar3 = local_38;
      FUN_016bd4f8(0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_WCRefineFileManagerViewController_026ceec8;
      local_30 = local_40;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_80 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_beginPendingSaveWithSourcePaths__026b2de8,puVar5,local_80);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_80,0);
LAB_016d0980:
      puVar2 = PTR_WCRefineFileManagerViewController_026ceec8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithDirectory_title__026b2df8,local_70,0);
      local_a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      puVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_a8);
        local_b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_presentViewController_animated_c_0269d2b0,local_b0,1,0);
        _objc_storeStrong(&local_b0,0);
      }
      else {
        puVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      _objc_storeStrong(&local_a8,0);
      local_60 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFileManagerViewController_026ceec8,PTR_s_clearPendingSave_026b2df0);
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar1;
      _NSHomeDirectory();
      _objc_retainAutoreleasedReturnValue();
      local_99 = 0;
      uVar6 = local_88;
      local_90 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      local_144 = 1;
      if (uVar6 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_144 = (uint)puVar2 ^ 1;
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if ((local_144 & 1) == 0) {
        uVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_stringByStandardizingPath_026cab38);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_stringByStandardizingPath_026cab38);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((uVar7 & 1) == 0) {
          _objc_storeStrong(&local_70,local_88);
        }
        local_60 = 0;
      }
      else {
        FUN_016abf68(&cf_elSb);
        local_60 = 1;
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
      if (local_60 == 0) goto LAB_016d0980;
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_68,0);
LAB_016d0bb8:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

