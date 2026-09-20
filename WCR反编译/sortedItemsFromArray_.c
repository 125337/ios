// sortedItemsFromArray: @ 010c9148

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsMonitor::sortedItemsFromArray_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_025853e8);
  IVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

