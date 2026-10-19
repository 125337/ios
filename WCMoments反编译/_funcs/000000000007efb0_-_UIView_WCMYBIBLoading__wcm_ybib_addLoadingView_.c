// -[UIView(WCMYBIBLoading)_wcm_ybib_addLoadingView] @0x7efb0

void __UIView_WCMYBIBLoading__wcm_ybib_addLoadingView_(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_48 = param_2;
  local_40 = param_1;
  _objc_msgSend_wcm_ybib_loading(param_1);
  local_50 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_superview(local_50,local_80);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    _objc_msgSend_addSubview_(local_40,local_80,local_50);
    _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(local_50,local_80,0);
    _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
              (&_OBJC_CLASS___NSLayoutConstraint,local_80,local_50,1,0,local_40);
    local_58 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
              (0x3ff0000000000000,0,&_OBJC_CLASS___NSLayoutConstraint,local_80,local_50,2,0,local_40
              );
    local_60 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
              (0x3ff0000000000000,0,&_OBJC_CLASS___NSLayoutConstraint,local_80,local_50,4,0,local_40
              );
    local_68 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
              (0x3ff0000000000000,0,&_OBJC_CLASS___NSLayoutConstraint,local_80,local_50,3,0,local_40
              );
    local_70 = _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_38 = local_58;
    local_30 = local_60;
    local_28 = local_68;
    local_20 = local_70;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_80,&local_38,4);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addConstraints_(uVar1,local_80);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

