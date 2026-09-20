// clearPKCConfiguration @ 01d822f0

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::clearPKCConfiguration(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40 [3];
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_40[0] = local_18;
  puVar2 = PTR_WCRefineHelper_026ce000;
  if (pcVar1 != (char *)0x0) {
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01d82464;
    local_48 = &DAT_0257a770;
    local_28 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_ndMn_,&cf_nx_nd_bg,&cf_Sm,
               0,&cf_nx_,&local_60);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    _objc_storeStrong(local_40,0);
  }
  return;
}

