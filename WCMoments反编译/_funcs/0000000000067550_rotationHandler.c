// rotationHandler @0x67550

/* Function Stack Size: 0x10 bytes */

ID WCMYBImageBrowser::rotationHandler(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_28;
  
  if (*(long *)(param_1 + (long)_rotationHandler) == 0) {
    uVar1 = _objc_alloc(&objc::class_t::WCMYBIBScreenRotationHandler);
    uVar1 = _objc_msgSend_initWithBrowser_(uVar1,local_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + (long)_rotationHandler);
    *(undefined8 *)(param_1 + (long)_rotationHandler) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_rotationHandler));
  return IVar3;
}

