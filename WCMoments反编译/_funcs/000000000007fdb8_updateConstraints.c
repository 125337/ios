// updateConstraints @0x7fdb8

/* Function Stack Size: 0x10 bytes */

void WCMYBIBLoadingView::updateConstraints(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_140;
  ID local_d8;
  class_t *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  SEL local_80;
  ID local_78;
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
  local_80 = param_2;
  local_78 = param_1;
  _objc_msgSend_textLabel(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_140,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_textLabel(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0x4034000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2
             ,1,0,local_78);
  local_88 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_textLabel(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0xc034000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2
             ,2,0,local_78);
  local_90 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_textLabel(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2,10,0,local_78);
  local_98 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_imageView(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_140,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_imageView(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2,9,0,local_78);
  local_a0 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_imageView(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2,10,0,local_78);
  local_a8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_drawView(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_140,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_drawView(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2,9,0,local_78);
  local_b0 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_drawView(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2,10,0,local_78);
  local_b8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_drawView(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2,7,0);
  local_c0 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_drawView(local_78,local_140);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
            (0x3ff0000000000000,0x4049000000000000,&_OBJC_CLASS___NSLayoutConstraint,local_140,uVar2
             ,8,0,0);
  local_c8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  IVar1 = local_78;
  local_70 = local_88;
  local_68 = local_90;
  local_60 = local_98;
  local_58 = local_a0;
  local_50 = local_a8;
  local_48 = local_b0;
  local_40 = local_b8;
  local_38 = local_c0;
  local_30 = local_c8;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_140,&local_70,9);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addConstraints_(IVar1,local_140);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_d8 = local_78;
  local_d0 = &objc::class_t::WCMYBIBLoadingView;
  _objc_msgSendSuper2(&local_d8,"updateConstraints");
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

