// frameForToolbarWithVerticalLayout: @0xa2b54

/* Function Stack Size: 0x14 bytes */

CGRect WCMTOCropViewController::frameForToolbarWithVerticalLayout_
                 (ID param_1,SEL param_2,bool param_3)

{
  CGRect CVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double in_d1;
  double in_d2;
  double dVar12;
  double in_d3;
  double dVar13;
  double local_3b0;
  double local_390;
  undefined8 local_338;
  byte local_139;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  byte local_61;
  SEL local_60;
  ID local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_61 = (byte)param_3;
  local_60 = param_2;
  local_58 = param_1;
  local_88 = (double)_objc_msgSend_statusBarSafeInsets(param_1);
  local_80 = in_d1;
  local_78 = in_d2;
  local_70 = in_d3;
  iVar2 = ___isPlatformVersionAtLeast(2,0x1a,0);
  local_390 = in_d1;
  dVar8 = in_d2;
  if ((iVar2 != 0) && ((local_61 & 1) == 0)) {
    _objc_msgSend_safeAreaLayoutRegionWithCornerAdaptation_
              (&_OBJC_CLASS___UIViewLayoutRegion,local_338,2);
    local_90 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_58,local_338);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    dVar6 = (double)_objc_msgSend_edgeInsetsForLayoutRegion_(uVar3,local_338,local_90);
    local_390 = in_d1;
    dVar8 = in_d2;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_88 = dVar6;
    local_80 = in_d1;
    local_78 = in_d2;
    _objc_storeStrong(&local_90,0);
  }
  dStack_48 = *(double *)(PTR__CGRectZero_001108d8 + 8);
  local_50 = *(double *)PTR__CGRectZero_001108d8;
  dStack_38 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);
  local_40 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);
  if ((local_61 & 1) == 0) {
    uVar4 = _WCMTOCropViewUsesGlassDesign();
    if ((uVar4 & 1) == 0) {
      local_50 = local_80;
      dStack_48 = 0.0;
      local_40 = 44.0;
      _objc_msgSend_view(local_58,local_338);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _objc_msgSend_frame(uVar3,local_338);
      dStack_38 = (double)_CGRectGetHeight(uVar7,local_390,dVar8,in_d3);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else {
      local_50 = local_80 + 8.0;
      dStack_48 = local_88 + 8.0;
      local_40 = 44.0;
      dVar6 = local_88;
      _objc_msgSend_view(local_58,local_338);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _objc_msgSend_frame(uVar3,local_338);
      dVar8 = (double)_CGRectGetHeight(uVar7,dVar6,dVar8,in_d3);
      dStack_38 = ((dVar8 - 16.0) - local_88) - local_78;
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
  }
  else {
    uVar4 = _WCMTOCropViewUsesGlassDesign();
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_view(local_58,local_338);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _objc_msgSend_bounds(uVar3,local_338);
      local_40 = (double)_CGRectGetWidth(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else {
      _objc_msgSend_view(local_58,local_338);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_view(local_58,local_338);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      uVar9 = _objc_msgSend_bounds(uVar7,local_338);
      uVar9 = _objc_msgSend_convertRect_toView_(uVar9,uVar3,local_338,0);
      dVar6 = local_390;
      dVar12 = dVar8;
      dVar13 = in_d3;
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      local_139 = 1;
      _objc_msgSend_view(local_58,local_338);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_window(uVar3,local_338);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if (lVar5 != 0) {
        _objc_msgSend_view(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_window(uVar3,local_338);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_bounds(uVar7,local_338);
        local_139 = _CGRectEqualToRect(uVar9);
        (*(code *)PTR__objc_release_00110458)(uVar7);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        dVar6 = local_390;
        dVar12 = dVar8;
        dVar13 = in_d3;
      }
      in_d3 = dVar13;
      dVar8 = dVar12;
      if ((local_139 & 1) == 0) {
        _objc_msgSend_view(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_layoutMargins(uVar3,local_338);
        local_80 = local_80 + dVar6 + 12.0;
        (*(code *)PTR__objc_release_00110458)(uVar3);
        _objc_msgSend_view(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_layoutMargins(uVar3,local_338);
        local_70 = local_70 + in_d3 + 12.0;
        (*(code *)PTR__objc_release_00110458)(uVar3);
        local_3b0 = local_78 - 6.0;
        if (local_3b0 <= 0.0) {
          local_3b0 = 0.0;
        }
        local_78 = local_3b0;
        _objc_msgSend_view(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_msgSend_bounds(uVar3,local_338);
        dVar6 = (double)_CGRectGetWidth(uVar7,local_3b0);
        local_40 = (dVar6 - local_80) - local_70;
        local_390 = local_70;
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
      else {
        if (local_78 <= 0.0) {
          local_78 = 8.0;
        }
        else {
          local_78 = 20.0;
        }
        local_28 = &_frameForToolbarWithVerticalLayout__onceToken;
        local_30 = 0;
        _objc_storeStrong(&local_30,&___block_literal_global);
        if (*local_28 + 1 != 0) {
          _dispatch_once(*local_28 + 1,local_28,local_30);
        }
        _objc_storeStrong(&local_30,0);
        _objc_msgSend_view(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_msgSend_bounds(uVar3,local_338);
        local_40 = (double)_CGRectGetWidth(uVar7,dVar6);
        local_390 = local_78 * 2.0;
        if (local_390 <= _frameForToolbarWithVerticalLayout__cornerRadius) {
          local_390 = _frameForToolbarWithVerticalLayout__cornerRadius;
        }
        local_40 = local_40 - local_390;
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
    }
    _objc_msgSend_view(local_58,local_338);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar7 = _objc_msgSend_bounds(uVar3,local_338);
    dVar6 = (double)_CGRectGetWidth(uVar7,local_390);
    uVar7 = 0x4000000000000000;
    local_50 = (dVar6 - local_40) / 2.0;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    dStack_38 = 44.0;
    lVar5 = _objc_msgSend_toolbarPosition(local_58,local_338);
    if (lVar5 == 0) {
      _objc_msgSend_view(local_58,local_338);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar9 = _objc_msgSend_bounds(uVar3,local_338);
      dStack_48 = (double)_CGRectGetHeight(uVar9,uVar7,dVar8,in_d3);
      dStack_48 = dStack_48 - (dStack_38 + local_78);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else {
      _objc_msgSend_titleLabel(local_58,local_338);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_text(uVar3,local_338);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      lVar5 = _objc_msgSend_length(uVar9,local_338);
      (*(code *)PTR__objc_release_00110458)(uVar9);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if (lVar5 != 0) {
        _objc_msgSend_titleLabel(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar10 = _objc_msgSend_frame(uVar3,local_338);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        _objc_msgSend_titleLabel(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_cropView(local_58,local_338);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_frame(uVar9,local_338);
        uVar11 = _objc_msgSend_sizeThatFits_(dVar8,uVar3,local_338);
        (*(code *)PTR__objc_release_00110458)(uVar9);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        _objc_msgSend_titleLabel(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setFrame_(uVar10,uVar3,local_338);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        _objc_msgSend_titleLabel(local_58,local_338);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar9 = _objc_msgSend_frame(uVar3,local_338);
        local_88 = (double)_CGRectGetMaxY(uVar9,uVar7,uVar11,in_d3);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        local_88 = local_88 + 14.0;
      }
      dStack_48 = local_88;
    }
  }
  CVar1.field0_0x0.field1_0x8 = dStack_48;
  CVar1.field0_0x0.field0_0x0 = local_50;
  CVar1.field1_0x10.field0_0x0 = local_40;
  CVar1.field1_0x10.field1_0x8 = dStack_38;
  return CVar1;
}

