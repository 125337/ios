// initWithItem: @ 01bcacb0

/* Function Stack Size: 0x18 bytes */

ID WCRMomentsCacheDetailViewController::initWithItem_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_38;
  local_30 = PTR_WCRMomentsCacheDetailViewController_026cff28;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    _objc_storeStrong((long)local_18 + (long)_item,local_28);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

