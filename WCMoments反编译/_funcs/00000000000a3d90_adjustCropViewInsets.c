// adjustCropViewInsets @0xa3d90

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::adjustCropViewInsets(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  double dVar8;
  double in_d2;
  double dVar9;
  double in_d3;
  undefined8 local_1c8;
  double local_50;
  undefined8 uStack_48;
  double local_40;
  
  local_50 = (double)_objc_msgSend_statusBarSafeInsets(param_1);
  uVar2 = in_d1;
  dVar9 = in_d2;
  dVar8 = in_d3;
  uVar1 = _WCMTOCropViewUsesGlassDesign();
  uStack_48 = in_d1;
  local_40 = in_d2;
  if ((uVar1 & 1) == 0) {
    uVar1 = _objc_msgSend_verticalLayout(param_1,local_1c8);
    if ((uVar1 & 1) == 0) {
      uStack_48 = 0;
    }
    else {
      lVar3 = _objc_msgSend_toolbarPosition(param_1,local_1c8);
      if (lVar3 == 1) {
        local_50 = 0.0;
      }
      else {
        local_40 = 0.0;
      }
    }
  }
  else {
    uVar1 = _objc_msgSend_verticalLayout(param_1,local_1c8);
    if ((uVar1 & 1) == 0) {
      _objc_msgSend_toolbar(param_1,local_1c8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar4 = _objc_msgSend_frame(uVar2,local_1c8);
      uStack_48 = _CGRectGetMaxX(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    else {
      lVar3 = _objc_msgSend_toolbarPosition(param_1,local_1c8);
      if (lVar3 + -1 == 0) {
        _objc_msgSend_toolbar(param_1,local_1c8);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        uVar4 = _objc_msgSend_frame(uVar2,local_1c8);
        local_50 = (double)_CGRectGetMaxY(uVar4);
        (*(code *)PTR__objc_release_00110458)(uVar2);
      }
      else {
        _objc_msgSend_view(lVar3 + -1,param_1,local_1c8);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_msgSend_frame(uVar4,local_1c8);
        local_40 = (double)_CGRectGetHeight(uVar7);
        _objc_msgSend_toolbar(param_1,local_1c8);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        uVar5 = _objc_msgSend_frame(uVar7,local_1c8);
        dVar6 = (double)_CGRectGetMinY(uVar5,uVar2);
        local_40 = local_40 - dVar6;
        (*(code *)PTR__objc_release_00110458)(uVar7);
        (*(code *)PTR__objc_release_00110458)(uVar4);
      }
    }
  }
  uVar1 = _objc_msgSend_verticalLayout(param_1,local_1c8);
  if (((uVar1 & 1) == 0) || (lVar3 = _objc_msgSend_toolbarPosition(param_1,local_1c8), lVar3 == 0))
  {
    _objc_msgSend_titleLabel(param_1,local_1c8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_text(uVar2,local_1c8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    lVar3 = _objc_msgSend_length(uVar4,local_1c8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if (lVar3 != 0) {
      _objc_msgSend_titleLabel(param_1,local_1c8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _objc_msgSend_frame(uVar2,local_1c8);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_titleLabel(param_1,local_1c8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_cropView(param_1,local_1c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_frame(uVar4,local_1c8);
      _objc_msgSend_sizeThatFits_(dVar9,uVar2,local_1c8);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_titleLabel(param_1,local_1c8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setFrame_(uVar7,uVar2,local_1c8);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_titleLabel(param_1,local_1c8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_frame(uVar2,local_1c8);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      local_50 = local_50 + dVar8 + 14.0;
    }
  }
  _objc_msgSend_cropView(param_1,local_1c8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCropRegionInsets_(local_50,uStack_48,local_40,in_d3,uVar2,local_1c8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

