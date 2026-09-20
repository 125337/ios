// runtimeTitleForLongPressAction:tab: @ 0151cf88

/* Function Stack Size: 0x20 bytes */

ID WCRefineTelegramGroupingStore::runtimeTitleForLongPressAction_tab_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_38;
  long_long local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == 5) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hidePinned_026a30d0);
    local_18 = &cf_>f_yn_vJ_Y;
    if ((uVar1 & 1) == 0) {
      local_18 = &cf_n_vJ_Y;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_titleForLongPressAction_tab__026b0260,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

