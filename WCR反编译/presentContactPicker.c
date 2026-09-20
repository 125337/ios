// presentContactPicker @ 00f6a600

/* Function Stack Size: 0x10 bytes */

void WCRForwardToGroupPickerViewController::presentContactPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  undefined *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar3 = "WCRefineGroupManagementViewController";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_30 = PTR_s_presentOfficialContactPickerFrom_026ac950;
  local_28 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,
             PTR_s_presentOfficialContactPickerFrom_026ac950);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_U_bhVNS_u);
  }
  else {
    _objc_initWeak(auStack_38,local_18);
    IVar2 = local_18;
    puVar1 = PTR_WCRefineGroupManagementViewController_026ce580;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pickedUsernames_026ac928);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_00f6a7f0;
    local_58 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_50,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentOfficialContactPickerFrom_026ac950,IVar2,&cf_bgS,IVar5,&local_70)
    ;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
  }
  return;
}

