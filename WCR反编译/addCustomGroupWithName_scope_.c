// addCustomGroupWithName:scope: @ 01ad74c8

/* Function Stack Size: 0x20 bytes */

ID WCRefineGroupManager::addCustomGroupWithName_scope_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

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
            (local_18,PTR_s_addCustomGroupWithName_scope_mem_026b0238,local_28,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

