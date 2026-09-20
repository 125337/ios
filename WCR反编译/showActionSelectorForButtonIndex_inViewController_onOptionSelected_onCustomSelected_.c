// showActionSelectorForButtonIndex:inViewController:onOptionSelected:onCustomSelected: @ 01870344

/* Function Stack Size: 0x30 bytes */

void WCRefineBottomBarLongPressActionSelector::
     showActionSelectorForButtonIndex_inViewController_onOptionSelected_onCustomSelected_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5,undefined4 param_6,
               ID param_7,undefined4 param_8)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_showActionSelectorForButtonIndex_026b6c60,local_28,local_30,0,0,local_38
             ,local_40);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

