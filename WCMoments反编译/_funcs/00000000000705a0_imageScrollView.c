// imageScrollView @0x705a0

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageCell::imageScrollView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_28;
  
  if (*(long *)(param_1 + (long)_imageScrollView) == 0) {
    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBImageScrollView);
    uVar2 = *(undefined8 *)(param_1 + (long)_imageScrollView);
    *(undefined8 *)(param_1 + (long)_imageScrollView) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setDelegate_(*(undefined8 *)(param_1 + (long)_imageScrollView),local_28,param_1);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_imageScrollView));
  return IVar3;
}

