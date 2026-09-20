// cancelFloatingExtraLongPressCustomInput: @ 019c1e9c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarSettingsViewController::cancelFloatingExtraLongPressCustomInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_floatingMetricAlert__026babb0,0);
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e4441);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar1;
  if (IVar1 != 0) {
    (**(code **)(IVar1 + 0x10))();
  }
  _objc_setAssociatedObject(local_18,&DAT_028e4441,0,3);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

