// textLabel @0x80bd4

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBLoadingView::textLabel(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_38;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (*(long *)(param_1 + (long)_textLabel) == 0) {
    uVar1 = _objc_opt_new(&_OBJC_CLASS___UILabel);
    uVar2 = *(undefined8 *)(local_18 + (long)_textLabel);
    *(undefined8 *)(local_18 + (long)_textLabel) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTextColor_(*(undefined8 *)(local_18 + (long)_textLabel),local_38);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setNumberOfLines_(*(undefined8 *)(local_18 + (long)_textLabel),local_38,0);
    _objc_msgSend_systemFontOfSize_(0x402c000000000000,&_OBJC_CLASS___UIFont,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFont_(*(undefined8 *)(local_18 + (long)_textLabel),local_38);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setTextAlignment_(*(undefined8 *)(local_18 + (long)_textLabel),local_38,1);
    uVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
    local_28 = _objc_msgSend_initWithTarget_action_
                         (uVar1,local_38,local_18,"respondsToTapTextlabel");
    _objc_msgSend_addGestureRecognizer_
              (*(undefined8 *)(local_18 + (long)_textLabel),local_38,local_28);
    _objc_msgSend_setUserInteractionEnabled_
              (*(undefined8 *)(local_18 + (long)_textLabel),local_38,1);
    _objc_storeStrong(&local_28,0);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(local_18 + (long)_textLabel));
  return IVar3;
}

