// FUN_0055cb28 @ 0055cb28

void FUN_0055cb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *local_50;
  char *local_48;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    _objc_setAssociatedObject(local_18,&DAT_028cb548,local_28,1);
    pcVar1 = "WCUIAlertView";
    _objc_getClass();
    local_48 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      _WCRefineApplyManualFakeEngagementToDataItem(local_28,0xffffffffffffffff);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefineReloadMomentsViewControl_026a5058);
      local_2c = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_initWithTitle_message__0269d260,&cf_WCRefine,&cf_SUSrn_p_peNpe);
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18,
                 PTR_s_WCRefineCancelLongPressFakeEngag_026a5038);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_WCRefineHandleLongPressFakeEngag_026a5040);
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0
                );
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14)
        ;
      }
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98
                );
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setTextFieldDefaultText__0269fd98,&cf___);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
      _objc_storeStrong(&local_50,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

