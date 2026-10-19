// -[UIView(WCMYBIBToast)_wcm_ybib_showToastWithText:type:hideAfterDelay:] @0x7d8c4

void __UIView_WCMYBIBToast__wcm_ybib_showToastWithText_type_hideAfterDelay__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_60 = 0;
  local_58 = param_3;
  local_50 = param_2;
  _objc_storeStrong(&local_60,param_4);
  local_70 = param_1;
  local_68 = param_5;
  _objc_msgSend_cancelPreviousPerformRequestsWithTarget_selector_object_
            (&_OBJC_CLASS___NSObject,local_a8,local_50,"wcm_ybib_hideToast",0);
  _objc_msgSend_wcm_ybib_toast(local_50,local_a8);
  local_78 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_superview(local_78,local_a8);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    _objc_msgSend_addSubview_(local_50,local_a8,local_78);
    _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(local_78,local_a8,0);
    _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
              (&_OBJC_CLASS___NSLayoutConstraint,local_a8,local_78,9,0,local_50);
    local_80 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
              (0x3ff0000000000000,0,&_OBJC_CLASS___NSLayoutConstraint,local_a8,local_78,10,0,
               local_50);
    local_88 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
              (0x3ff0000000000000,0x4044000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_a8,
               local_78,1,1,local_50);
    local_90 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
              (0x3ff0000000000000,0xc044000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_a8,
               local_78,2,0xffffffffffffffff,local_50);
    local_98 = _objc_retainAutoreleasedReturnValue();
    uVar1 = local_50;
    local_48 = local_80;
    local_40 = local_88;
    local_38 = local_90;
    local_30 = local_98;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_a8,&local_48,4);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addConstraints_(uVar1,local_a8);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
  }
  _objc_msgSend_showWithText_type_(local_78,local_a8,local_60,local_68);
  _objc_msgSend_performSelector_withObject_afterDelay_
            (local_70,local_50,local_a8,"wcm_ybib_hideToast");
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

