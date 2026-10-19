// drawView @0x80b08

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBLoadingView::drawView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_30;
  
  if (*(long *)(param_1 + (long)_drawView) == 0) {
    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBProgressDrawView);
    uVar2 = *(undefined8 *)(param_1 + (long)_drawView);
    *(undefined8 *)(param_1 + (long)_drawView) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_30);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + (long)_drawView),local_30);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_drawView));
  return IVar3;
}

