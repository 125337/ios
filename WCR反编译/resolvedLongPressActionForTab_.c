// resolvedLongPressActionForTab: @ 0151cb8c

/* Function Stack Size: 0x18 bytes */

long_long WCRefineTelegramGroupingStore::resolvedLongPressActionForTab_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_longPressAction_026b0110);
  local_18 = IVar1;
  if (IVar1 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_defaultLongPressActionForTab__026b0258,local_30);
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

