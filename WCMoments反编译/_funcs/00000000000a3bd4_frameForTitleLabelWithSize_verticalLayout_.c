// frameForTitleLabelWithSize:verticalLayout: @0xa3bd4

/* Function Stack Size: 0x24 bytes */

CGRect WCMTOCropViewController::frameForTitleLabelWithSize_verticalLayout_
                 (ID param_1,SEL param_2,CGSize param_3,bool param_4)

{
  CGRect CVar1;
  undefined8 uVar2;
  double dVar3;
  double in_d2;
  undefined8 local_e0;
  undefined8 local_88;
  undefined8 local_60;
  undefined8 local_30;
  
  dVar3 = param_3.field1_0x8;
  _objc_msgSend_view(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar2,local_e0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_88 = 0.0;
  local_60 = in_d2;
  if ((param_4 & 1) == 0) {
    _objc_msgSend_view(param_1,local_e0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_safeAreaInsets(uVar2,local_e0);
    local_88 = dVar3 + 14.0;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_60 = in_d2 - local_88;
  }
  local_30 = (double)(float)(int)((local_60 - param_3.field0_0x0) * 0.5);
  if ((param_4 & 1) == 0) {
    local_30 = local_30 + local_88;
  }
  _objc_msgSend_view(param_1,local_e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)_objc_msgSend_safeAreaInsets(uVar2,local_e0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  CVar1.field0_0x0.field1_0x8 = dVar3 + 14.0;
  CVar1.field0_0x0.field0_0x0 = local_30;
  CVar1.field1_0x10.field0_0x0 = param_3.field0_0x0;
  CVar1.field1_0x10.field1_0x8 = param_3.field1_0x8;
  return CVar1;
}

