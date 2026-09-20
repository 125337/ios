// logLevelString @ 0091a324

/* Function Stack Size: 0x10 bytes */

ID WCNavigationMonitor::logLevelString(ID param_1,SEL param_2)

{
  long lVar1;
  cfstringStruct *local_18;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_W_gOo_;
  }
  else if (lVar1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__Oo_;
  }
  else if (lVar1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___Oo_;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gw;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

