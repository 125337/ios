// titleLabel @0xaa58c

/* Function Stack Size: 0x10 bytes */

ID WCMTOCropViewController::titleLabel(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_40;
  undefined8 local_18;
  
  _objc_msgSend_title(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_length(uVar1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (lVar2 == 0) {
    local_18 = 0;
  }
  else if (*(long *)(param_1 + (long)_titleLabel) == 0) {
    uVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
    uVar1 = _objc_msgSend_initWithFrame_
                      (*(undefined8 *)PTR__CGRectZero_001108d8,
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar1,local_40);
    uVar3 = *(undefined8 *)(param_1 + (long)_titleLabel);
    *(undefined8 *)(param_1 + (long)_titleLabel) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_preferredFontForTextStyle_
              (&_OBJC_CLASS___UIFont,local_40,*(undefined8 *)PTR__UIFontTextStyleHeadline_001100b8);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFont_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_40);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_40);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTextColor_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setNumberOfLines_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);
    _objc_msgSend_setBaselineAdjustment_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40,0);
    _objc_msgSend_setClipsToBounds_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40,1);
    _objc_msgSend_setTextAlignment_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40,1);
    _objc_msgSend_title(param_1,local_40);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_view(param_1,local_40);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_titleLabel(param_1,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_toolbar(param_1,local_40);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_insertSubview_aboveSubview_(uVar1,local_40,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    local_18 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + (long)_titleLabel));
  }
  else {
    local_18 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + (long)_titleLabel));
  }
  IVar5 = _objc_autoreleaseReturnValue(local_18);
  return IVar5;
}

