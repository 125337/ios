// initWithBackend: @ 01eb2e3c

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoListEditorViewController::initWithBackend_(ID param_1,SEL param_2,long_long param_3)

{
  ID *pIVar1;
  ID local_38;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID *local_18;
  
  local_18 = (ID *)0x0;
  pIVar1 = &local_38;
  local_30 = PTR_WCRefineToDoListEditorViewController_026d01d8;
  local_38 = param_1;
  local_28 = param_3;
  local_20 = param_2;
  _objc_msgSendSuper2(pIVar1,PTR_s_init_026ca6a8);
  local_18 = pIVar1;
  _objc_storeStrong(&local_18);
  pIVar1 = local_18;
  if (local_18 != (ID *)0x0) {
    *(long_long *)((long)local_18 + (long)_backend) = local_28;
    *(undefined8 *)((long)local_18 + (long)_currentFilter) = 1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  return (ID)pIVar1;
}

