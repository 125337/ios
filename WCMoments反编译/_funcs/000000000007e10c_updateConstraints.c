// updateConstraints @0x7e10c

/* Function Stack Size: 0x10 bytes */

void WCMYBIBToastView::updateConstraints(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_e0;
  ID local_98;
  class_t *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  SEL local_60;
  ID local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_60 = param_2;
  local_58 = param_1;
  _objc_msgSend_textLabel(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_e0,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_textLabel(local_58,local_e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0x4034000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_e0,uVar2,
             1,0,local_58);
  local_68 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_textLabel(local_58,local_e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0xc034000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_e0,uVar2,
             2,0,local_58);
  local_70 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_textLabel(local_58,local_e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0xc02e000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_e0,uVar2,
             4,0,local_58);
  local_78 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_textLabel(local_58,local_e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0x4051800000000000,&_OBJC_CLASS___NSLayoutConstraint,local_e0,uVar2,
             3,0,local_58);
  local_80 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_textLabel(local_58,local_e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0x404e000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_e0,uVar2,
             7,1,0,0);
  local_88 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  IVar1 = local_58;
  local_50 = local_68;
  local_48 = local_70;
  local_40 = local_78;
  local_38 = local_80;
  local_30 = local_88;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_e0,&local_50,5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addConstraints_(IVar1,local_e0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_98 = local_58;
  local_90 = &objc::class_t::WCMYBIBToastView;
  _objc_msgSendSuper2(&local_98,"updateConstraints");
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

