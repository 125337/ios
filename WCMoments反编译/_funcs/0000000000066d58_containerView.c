// containerView @0x66d58

/* Function Stack Size: 0x10 bytes */

ID WCMYBImageBrowser::containerView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_30;
  
  if (*(long *)(param_1 + (long)_containerView) == 0) {
    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBContainerView);
    uVar2 = *(undefined8 *)(param_1 + (long)_containerView);
    *(undefined8 *)(param_1 + (long)_containerView) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_30);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + (long)_containerView),local_30);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_containerView),local_30);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setMasksToBounds_(uVar1,local_30,1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_containerView));
  return IVar3;
}

