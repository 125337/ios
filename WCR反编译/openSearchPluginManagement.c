// openSearchPluginManagement @ 014d7468

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchManager::openSearchPluginManagement(ID param_1,SEL param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  return;
}

