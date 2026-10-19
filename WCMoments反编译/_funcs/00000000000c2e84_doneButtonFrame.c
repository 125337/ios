// doneButtonFrame @0xc2e84

/* Function Stack Size: 0x10 bytes */

CGRect WCMTOCropToolbar::doneButtonFrame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_58;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  _objc_msgSend_doneIconButton(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar2 = _objc_msgSend_isHidden(uVar3,local_58);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (iVar2 == 0) {
    _objc_msgSend_doneIconButton(param_1,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_30 = _objc_msgSend_frame(uVar3,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_28 = in_d1;
    local_20 = in_d2;
    local_18 = in_d3;
  }
  else {
    _objc_msgSend_doneTextButton(param_1,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_30 = _objc_msgSend_frame(uVar3,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_28 = in_d1;
    local_20 = in_d2;
    local_18 = in_d3;
  }
  CVar1.field0_0x0.field1_0x8 = (double)local_28;
  CVar1.field0_0x0.field0_0x0 = (double)local_30;
  CVar1.field1_0x10.field0_0x0 = (double)local_20;
  CVar1.field1_0x10.field1_0x8 = local_18;
  return CVar1;
}

