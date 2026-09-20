// wcrGrouping_numberOfSectionsInTableView: @ 0039adcc

/* Function Stack Size: 0x18 bytes */

long_long WCRefineHomeSessionGroupingHook::wcrGrouping_numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrGrouping_numberOfSectionsInTa_026a28c0,local_28);
  _objc_storeStrong(&local_28,0);
  return IVar1;
}

