// videoCountLabel @0x19bc0

/* Function Stack Size: 0x10 bytes */

ID WCMVideoController::videoCountLabel(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  local_28 = _objc_opt_new(&_OBJC_CLASS___UILabel);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTextColor_(local_28,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_monospacedDigitSystemFontOfSize_weight_
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_001100d0,
             &_OBJC_CLASS___UIFont,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFont_(local_28,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setTextAlignment_(local_28,local_48,1);
  _objc_msgSend_view(local_18,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addSubview_(uVar1,local_48,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

