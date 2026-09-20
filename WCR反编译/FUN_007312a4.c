// FUN_007312a4 @ 007312a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007312a4(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  uint local_46c;
  uint local_424;
  uint local_3dc;
  uint local_394;
  uint local_34c;
  uint local_304;
  uint local_2bc;
  uint local_274;
  uint local_22c;
  uint local_1e4;
  uint local_19c;
  uint local_154;
  ulong local_58 [3];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  cfstringStruct *local_28;
  
  puVar1 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_00730914();
  if ((((ulong)puVar1 & 1) == 0) || (local_30 == 0)) {
    local_28 = (cfstringStruct *)0x0;
    local_34 = 1;
    goto LAB_007328d8;
  }
  uVar2 = local_30;
  FUN_00732964();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_40 = uVar2;
  FUN_00732dd4();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = uVar3;
  if ((DAT_028cc509 & 1) == 0) {
LAB_00731544:
    uVar2 = local_58[0];
    if ((DAT_028cc50a & 1) != 0) {
      pcVar4 = &cf_account_security;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_19c = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_account_security;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_19c = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_19c & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_account_security;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc50b & 1) != 0) {
      pcVar4 = &cf_personal_info;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_1e4 = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_personal_info;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_1e4 = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_1e4 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_personal_info;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc50c & 1) != 0) {
      pcVar4 = &cf_notification;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_22c = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_notification;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_22c = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_22c & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_notification;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc50d & 1) != 0) {
      pcVar4 = &cf_ui_display;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_274 = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_ui_display;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_274 = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_274 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_ui_display;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc50e & 1) != 0) {
      pcVar4 = &cf_storage;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_2bc = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_storage;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_2bc = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_2bc & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_storage;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc50f & 1) != 0) {
      pcVar4 = &cf_other_functions;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_304 = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_other_functions;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_304 = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_304 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_other_functions;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc510 & 1) != 0) {
      pcVar4 = &cf_plugin;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_34c = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_plugin;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_34c = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_34c & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_plugin;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc511 & 1) != 0) {
      pcVar4 = &cf_help_feedback;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_394 = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_help_feedback;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_394 = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_394 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_help_feedback;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc512 & 1) != 0) {
      pcVar4 = &cf_about;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_3dc = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_about;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_3dc = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_3dc & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_about;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc513 & 1) != 0) {
      pcVar4 = &cf_switch_account;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_424 = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_switch_account;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_424 = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_424 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_switch_account;
        goto LAB_00732898;
      }
    }
    uVar2 = local_58[0];
    if ((DAT_028cc514 & 1) != 0) {
      pcVar4 = &cf_logout;
      FUN_007334f0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00733100();
      uVar3 = local_40;
      local_46c = 1;
      if ((uVar2 & 1) == 0) {
        pcVar5 = &cf_logout;
        FUN_00734050();
        _objc_retainAutoreleasedReturnValue();
        FUN_007337ec();
        local_46c = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_46c & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_logout;
        goto LAB_00732898;
      }
    }
    local_28 = (cfstringStruct *)0x0;
  }
  else {
    pcVar4 = &cf_profile;
    FUN_007334f0();
    _objc_retainAutoreleasedReturnValue();
    FUN_00733100();
    uVar2 = local_40;
    local_154 = 1;
    if ((uVar3 & 1) == 0) {
      pcVar5 = &cf_profile;
      FUN_00734050();
      _objc_retainAutoreleasedReturnValue();
      FUN_007337ec();
      local_154 = (uint)uVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if ((local_154 & 1) == 0) goto LAB_00731544;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_profile;
  }
LAB_00732898:
  local_34 = 1;
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
LAB_007328d8:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

