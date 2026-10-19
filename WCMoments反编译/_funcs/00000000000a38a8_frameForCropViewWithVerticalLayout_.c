// frameForCropViewWithVerticalLayout: @0xa38a8

/* Function Stack Size: 0x14 bytes */

CGRect WCMTOCropViewController::frameForCropViewWithVerticalLayout_
                 (ID param_1,SEL param_2,bool param_3)

{
  CGRect CVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d1;
  double dVar7;
  double in_d2;
  double dVar8;
  double in_d3;
  double dVar9;
  undefined8 local_100;
  undefined8 local_60;
  byte local_51;
  SEL local_50;
  ID local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_51 = (byte)param_3;
  local_60 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_msgSend_parentViewController(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    _objc_msgSend_view(local_48,local_100);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = local_60;
    local_60 = uVar3;
    (*(code *)PTR__objc_release_00110458)(uVar5);
  }
  else {
    _objc_msgSend_parentViewController(local_48,local_100);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(uVar3,local_100);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar5 = local_60;
    local_60 = uVar6;
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  uVar4 = _WCMTOCropViewUsesGlassDesign();
  if ((uVar4 & 1) == 0) {
    uVar5 = _objc_msgSend_bounds(local_60,local_100);
    dStack_38 = *(double *)(PTR__CGRectZero_001108d8 + 8);
    local_40 = *(double *)PTR__CGRectZero_001108d8;
    if ((local_51 & 1) == 0) {
      dVar7 = in_d1;
      dVar8 = in_d2;
      dVar9 = in_d3;
      _objc_msgSend_toolbar(local_48,local_100);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar6 = _objc_msgSend_frame(uVar3,local_100);
      local_40 = (double)_CGRectGetMaxX(uVar6,dVar7,dVar8,dVar9);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      local_30 = (double)_CGRectGetWidth(uVar5,in_d1,in_d2,in_d3);
      local_30 = local_30 - local_40;
      dStack_28 = (double)_CGRectGetHeight(uVar5,in_d1,in_d2,in_d3);
    }
    else {
      dVar7 = in_d1;
      dVar8 = in_d2;
      dVar9 = in_d3;
      local_30 = (double)_CGRectGetWidth(uVar5);
      lVar2 = _objc_msgSend_toolbarPosition(local_48,local_100);
      if (lVar2 + -1 == 0) {
        _objc_msgSend_toolbar(0,local_48,local_100);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar6 = _objc_msgSend_frame(uVar3,local_100);
        dStack_38 = (double)_CGRectGetMaxY(uVar6,dVar7,dVar8,dVar9);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        dStack_28 = (double)_CGRectGetHeight(uVar5,in_d1,in_d2,in_d3);
        dStack_28 = dStack_28 - dStack_38;
      }
      else {
        _objc_msgSend_toolbar(lVar2 + -1,local_48,local_100);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        uVar3 = _objc_msgSend_frame(uVar5,local_100);
        dStack_28 = (double)_CGRectGetMinY(uVar3,dVar7,dVar8,dVar9);
        (*(code *)PTR__objc_release_00110458)(uVar5);
      }
    }
  }
  else {
    local_40 = (double)_objc_msgSend_bounds(local_60,local_100);
    dStack_38 = in_d1;
    local_30 = in_d2;
    dStack_28 = in_d3;
  }
  _objc_storeStrong(&local_60,0);
  CVar1.field0_0x0.field1_0x8 = dStack_38;
  CVar1.field0_0x0.field0_0x0 = local_40;
  CVar1.field1_0x10.field0_0x0 = local_30;
  CVar1.field1_0x10.field1_0x8 = dStack_28;
  return CVar1;
}

