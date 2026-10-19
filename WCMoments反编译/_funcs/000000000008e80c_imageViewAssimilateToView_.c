// imageViewAssimilateToView: @0x8e80c

/* Function Stack Size: 0x18 bytes */

ID WCMYBIBAnimatedTransition::imageViewAssimilateToView_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = _objc_opt_new(&_OBJC_CLASS___UIImageView);
  uVar4 = local_28;
  _objc_opt_self(&_OBJC_CLASS___UIImageView);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_opt_isKindOfClass(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_setContentMode_(local_30,local_58,2);
  }
  else {
    uVar4 = _objc_msgSend_contentMode(local_28,local_58);
    _objc_msgSend_setContentMode_(local_30,local_58,uVar4);
  }
  _objc_msgSend_layer(local_28,local_58);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_masksToBounds(uVar4,local_58);
  _objc_msgSend_layer(local_30,local_58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMasksToBounds_(uVar3,local_58,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_layer(local_28,local_58);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar6 = _objc_msgSend_cornerRadius(uVar4,local_58);
  _objc_msgSend_layer(local_30,local_58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCornerRadius_(uVar6,uVar3,local_58);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_layer(local_28,local_58);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_backgroundColor(uVar4,local_58);
  _objc_msgSend_layer(local_30,local_58);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(uVar6,local_58,uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  uVar4 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}

