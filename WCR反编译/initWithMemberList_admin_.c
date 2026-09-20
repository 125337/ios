// initWithMemberList:admin: @ 01527d84

/* Function Stack Size: 0x20 bytes */

ID WCRCommonGroupMemberDataLogic::initWithMemberList_admin_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  local_18 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_init_026ca6a8);
  local_18 = IVar1;
  _objc_storeStrong(&local_18);
  if (local_18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadMemberList__026b0338,local_28);
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

