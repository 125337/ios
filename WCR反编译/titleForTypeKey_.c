// titleForTypeKey: @ 010ad06c

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageSyncRule::titleForTypeKey_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_50;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  long *local_18;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_38;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_18 = &DAT_028e3330;
  local_20 = 0;
  local_40 = IVar1;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02585148);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  IVar1 = DAT_028e3328;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3328,PTR_s_objectForKeyedSubscript__0269d098,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  if (IVar1 == 0) {
    local_50 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return local_50;
}

