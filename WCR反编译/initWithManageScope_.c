// initWithManageScope: @ 01ab2578

/* Function Stack Size: 0x18 bytes */

ID WCRGroupListViewController::initWithManageScope_(ID param_1,SEL param_2,long_long param_3)

{
  ID *pIVar1;
  ID local_38;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID *local_18;
  
  local_18 = (ID *)0x0;
  pIVar1 = &local_38;
  local_30 = PTR_WCRGroupListViewController_026cfe30;
  local_38 = param_1;
  local_28 = param_3;
  local_20 = param_2;
  _objc_msgSendSuper2(pIVar1,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = pIVar1;
  _objc_storeStrong(&local_18);
  if (pIVar1 != (ID *)0x0) {
    *(long_long *)((long)local_18 + (long)_manageScope) = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  return (ID)pIVar1;
}

