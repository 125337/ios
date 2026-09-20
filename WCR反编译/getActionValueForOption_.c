// getActionValueForOption: @ 0186ad84

/* Function Stack Size: 0x18 bytes */

ID WCRefineBottomBarLongPressActionSelectorViewController::getActionValueForOption_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
             PTR_s_storedValueForPickerOptionTitle__0269e408,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

