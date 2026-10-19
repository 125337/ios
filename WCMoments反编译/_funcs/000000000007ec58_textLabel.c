// textLabel @0x7ec58

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBToastView::textLabel(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_28;
  
  if (*(long *)(param_1 + (long)_textLabel) == 0) {
    uVar1 = _objc_opt_new(&_OBJC_CLASS___UILabel);
    uVar2 = *(undefined8 *)(param_1 + (long)_textLabel);
    *(undefined8 *)(param_1 + (long)_textLabel) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_28);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTextColor_(*(undefined8 *)(param_1 + (long)_textLabel),local_28);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_systemFontOfSize_(0x402c000000000000,&_OBJC_CLASS___UIFont,local_28);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFont_(*(undefined8 *)(param_1 + (long)_textLabel),local_28);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setTextAlignment_(*(undefined8 *)(param_1 + (long)_textLabel),local_28,1);
    _objc_msgSend_setNumberOfLines_(*(undefined8 *)(param_1 + (long)_textLabel),local_28,0);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_textLabel));
  return IVar3;
}

