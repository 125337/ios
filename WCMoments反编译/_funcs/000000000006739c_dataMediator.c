// dataMediator @0x6739c

/* Function Stack Size: 0x10 bytes */

ID WCMYBImageBrowser::dataMediator(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ID IVar4;
  undefined4 uVar5;
  undefined8 local_28;
  
  if (*(long *)(param_1 + (long)_dataMediator) == 0) {
    uVar1 = _objc_alloc(&objc::class_t::WCMYBIBDataMediator);
    uVar1 = _objc_msgSend_initWithBrowser_(uVar1,local_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + (long)_dataMediator);
    *(undefined8 *)(param_1 + (long)_dataMediator) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar3 = _WCMYBIBLowMemory();
    uVar5 = 9;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0x1b;
    }
    _objc_msgSend_setDataCacheCountLimit_
              (*(undefined8 *)(param_1 + (long)_dataMediator),local_28,uVar5);
    uVar3 = _WCMYBIBLowMemory();
    uVar5 = 0;
    if ((uVar3 & 1) == 0) {
      uVar5 = 2;
    }
    _objc_msgSend_setPreloadCount_(*(undefined8 *)(param_1 + (long)_dataMediator),local_28,uVar5);
  }
  IVar4 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_dataMediator));
  return IVar4;
}

