// browseListSnapshot @ 010be66c

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsMonitor::browseListSnapshot(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar1 = *(ID *)(param_1 + 0x58);
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

