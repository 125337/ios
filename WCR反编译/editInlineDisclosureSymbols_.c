// editInlineDisclosureSymbols: @ 01ac7e54

/* Function Stack Size: 0x18 bytes */

void WCRefineGroupManagementViewController::editInlineDisclosureSymbols_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_homeGroupingInlineDisclosureSymb_026a3298);
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_18;
  local_68 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_68 = &cf___;
  }
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01ac7fb0;
  local_40 = &DAT_025872d8;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_01a9f3b0(&cf_U_,&cf_6ew_,local_68,&local_58);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

