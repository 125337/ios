// defaultLongPressActionForTab: @ 0151cabc

/* Function Stack Size: 0x18 bytes */

long_long WCRefineTelegramGroupingStore::defaultLongPressActionForTab_
                    (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8),
     lVar1 == 0)) {
    local_18 = 1;
  }
  else {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8);
    if (lVar1 == 2) {
      local_18 = 3;
    }
    else {
      local_18 = 2;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

