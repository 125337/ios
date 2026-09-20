// setLongPressAction:forTabId: @ 0151d624

/* Function Stack Size: 0x20 bytes */

void WCRefineTelegramGroupingStore::setLongPressAction_forTabId_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  ID local_38;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabForId__026a8278,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (((IVar1 != 0) && (-1 < (long)local_28)) && ((long)local_28 < 7)) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setLongPressAction__026b0118,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

