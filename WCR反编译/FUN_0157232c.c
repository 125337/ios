// FUN_0157232c @ 0157232c

byte FUN_0157232c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_48;
  cfstringStruct *local_40;
  char *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    pcVar1 = "WCUIAlertView";
    _objc_getClass();
    pcVar2 = &cf_initWithTitle_message_;
    local_38 = pcVar1;
    _NSSelectorFromString();
    local_40 = pcVar2;
    if ((local_38 == (char *)0x0) ||
       (pcVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_instancesRespondToSelector__0269da90,pcVar2),
       ((ulong)pcVar1 & 1) == 0)) {
      _WCRefineApplyManualFakeEngagementToDataItem(local_20,0xffffffffffffffff);
      FUN_0155c7d4(local_28,0);
      local_11 = 1;
      local_2c = 1;
    }
    else {
      pcVar1 = local_38;
      _objc_alloc();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (local_48 == (char *)0x0) {
        local_11 = 0;
      }
      else {
        _objc_setAssociatedObject(local_48,DAT_028c5f48,local_20,1);
        _objc_setAssociatedObject(local_48,DAT_028c5f50,local_28,0);
        _objc_storeStrong(&DAT_028e3920,local_20);
        DAT_028e39b8 = local_28;
        pcVar2 = &cf_addBtnTitle_target_sel_;
        _NSSelectorFromString();
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
        pcVar1 = local_48;
        if (((ulong)pcVar3 & 1) != 0) {
          puVar4 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTopBarProfileCardPresenter_026ce228,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,pcVar2,&cf_Sm,puVar4,PTR_s_wcr_cancelMomentsFakeEngagementI_026b06a0);
          pcVar1 = local_48;
          puVar4 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTopBarProfileCardPresenter_026ce228,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,pcVar2,&cf_nx_,puVar4,PTR_s_wcr_handleMomentsFakeEngagementI_026b06a8);
        }
        pcVar2 = &cf_showTextFieldWithMaxLen_;
        _NSSelectorFromString();
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar2,0x14);
        }
        pcVar2 = &cf_setTextFieldDefaultText_;
        _NSSelectorFromString();
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar2,&cf___);
        }
        pcVar2 = &cf_show;
        _NSSelectorFromString();
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
        if (((ulong)pcVar1 & 1) == 0) {
          local_11 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar2);
          local_11 = 1;
        }
      }
      local_2c = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

