// initWithListKind: @ 018709e0

/* Function Stack Size: 0x18 bytes */

ID WCRefineActionMenuConfigViewController::initWithListKind_
             (ID param_1,SEL param_2,long_long param_3)

{
  ID *pIVar1;
  ID *pIVar2;
  ID local_38;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID *local_18;
  
  local_18 = (ID *)0x0;
  pIVar2 = &local_38;
  local_30 = PTR_WCRefineActionMenuConfigViewController_026cfc08;
  local_38 = param_1;
  local_28 = param_3;
  local_20 = param_2;
  _objc_msgSendSuper2(pIVar2,PTR_s_init_026ca6a8);
  local_18 = pIVar2;
  _objc_storeStrong(&local_18);
  pIVar1 = local_18;
  if (pIVar2 != (ID *)0x0) {
    *(long_long *)((long)local_18 + (long)_listKind) = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  return (ID)pIVar1;
}

