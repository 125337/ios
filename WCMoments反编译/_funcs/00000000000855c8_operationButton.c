// operationButton @0x855c8

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBTopView::operationButton(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_50;
  
  if (*(long *)(param_1 + (long)_operationButton) == 0) {
    _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + (long)_operationButton);
    *(undefined8 *)(param_1 + (long)_operationButton) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_boldSystemFontOfSize_(0x4030000000000000,&_OBJC_CLASS___UIFont,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_titleLabel(*(undefined8 *)(param_1 + (long)_operationButton),local_50);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFont_(uVar2,local_50,uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_titleLabel(*(undefined8 *)(param_1 + (long)_operationButton),local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAdjustsFontSizeToFitWidth_(uVar1,local_50,1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar2 = *(undefined8 *)(param_1 + (long)_operationButton);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTitleColor_forState_(uVar2,local_50,uVar1,0);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_addTarget_action_forControlEvents_
              (*(undefined8 *)(param_1 + (long)_operationButton),local_50,param_1,
               "clickOperationButton:",0x40);
    _objc_msgSend_darkGrayColor(&_OBJC_CLASS___UIColor,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    uVar2 = _objc_msgSend_CGColor(uVar1,local_50);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_operationButton),local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowColor_(uVar3,local_50,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar3 = 0x3ff0000000000000;
    uVar2 = _CGSizeMake(0);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_operationButton),local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowOffset_(uVar2,uVar3,uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_operationButton),local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowOpacity_(0x3f800000,uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_operationButton),local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowRadius_(0x4010000000000000,uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  IVar4 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_operationButton));
  return IVar4;
}

