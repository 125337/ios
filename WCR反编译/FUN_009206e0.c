// FUN_009206e0 @ 009206e0

void FUN_009206e0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  uint local_58;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  uVar3 = local_48;
  pcVar1 = &cf_swizzled_viewDidAppear_;
  local_51 = param_3;
  local_50 = param_2;
  _NSSelectorFromString(&cf_swizzled_viewDidAppear_);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar1,local_51 & 1);
  if ((DAT_028ce368 & 1) == 0) {
    local_58 = 1;
    goto LAB_009209b8;
  }
  puVar2 = PTR_WCNavigationMonitor_026cea60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isMonitoring_026aa5a0);
  if (((ulong)puVar2 & 1) == 0) {
    local_58 = 1;
  }
  else {
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_shouldIgnoreViewController__026aa5a8,local_48);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_logLevel_026aa5b0);
      if (puVar2 == (undefined *)0x0) {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_40 = &cf_NewMainFrameViewController;
        local_38 = &cf_MoreViewController;
        local_30 = &cf_FindFriendEntryViewController;
        local_28 = &cf_ContactsViewController;
        local_20 = &cf_BaseMsgContentViewController;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_68 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,5);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8,local_68);
        local_58 = (uint)(((ulong)puVar2 & 1) == 0);
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
        if (local_58 != 0) goto LAB_009209a8;
      }
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_formattedNameForViewController__026aa598,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_logWithFormat__026aa3c0,&cf__);
      _objc_storeStrong(&local_78,0);
      local_58 = 0;
    }
    else {
      local_58 = 1;
    }
  }
LAB_009209a8:
  _objc_storeStrong(&local_60,0);
LAB_009209b8:
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

