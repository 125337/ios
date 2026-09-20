// renameTabId:title: @ 0151d9e4

/* Function Stack Size: 0x20 bytes */

bool WCRefineTelegramGroupingStore::renameTabId_title_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  long local_48;
  ID local_40;
  long local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ensureTabsLoaded_026b01d8);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tabForId__026a8278,local_30);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = IVar1;
  FUN_01516994();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar2;
  if ((local_40 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0), lVar2 == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTitle__0269cef0,local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
    local_11 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

