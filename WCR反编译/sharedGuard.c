// sharedGuard @ 010efec0

/* Function Stack Size: 0x10 bytes */

ID WCRefinePageLockGuard::sharedGuard(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  long *local_18;
  
  local_58 = PTR___NSConcreteGlobalBlock_02578658;
  local_50 = 0xd0800000;
  local_4c = 0;
  local_48 = FUN_010eff70;
  local_40 = &DAT_02578c00;
  local_18 = &DAT_028e3478;
  local_20 = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_20,&local_58);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  IVar1 = DAT_028e3470;
  _objc_retainAutoreleaseReturnValue();
  return IVar1;
}

