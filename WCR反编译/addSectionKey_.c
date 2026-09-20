// addSectionKey: @ 015293dc

/* Function Stack Size: 0x18 bytes */

ID WCRCommonGroupMemberDataLogic::addSectionKey_(ID param_1,SEL param_2,ID param_3)

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
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

