// sortedGroups: @ 01ad6690

/* Function Stack Size: 0x18 bytes */

ID WCRefineGroupManager::sortedGroups_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_sortedArrayUsingComparator__0269fae8,
             &PTR___NSConcreteGlobalBlock_0258b188);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

