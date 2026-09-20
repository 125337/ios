// FUN_00588a68 @ 00588a68

void FUN_00588a68(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_00588bf0();
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_resignInput_026a5560);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resignInput_026a5560);
    }
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cb62b);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    _objc_initWeak(auStack_30,local_18);
    uVar1 = local_18;
    uVar2 = local_28;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00595a68;
    local_40 = &DAT_0257e118;
    _objc_copyWeak(auStack_38,auStack_30);
    _WCRMomentsScheduledPresentDatePicker(uVar1,uVar2,&local_58);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

