// preloadCount @0x674f4

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYBImageBrowser::preloadCount(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  unsigned_long_long uVar2;
  undefined8 local_38;
  
  _objc_msgSend_dataMediator(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_preloadCount(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return uVar2;
}

