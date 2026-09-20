// alignWithMode: @ 01d57cd0

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameEditorViewController::alignWithMode_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  double in_d0;
  double dVar7;
  double dVar8;
  undefined8 in_d1;
  undefined8 uVar9;
  undefined *local_210;
  cfstringStruct *local_208 [8];
  ID local_1c8;
  int local_1c0;
  byte local_1b9;
  ID local_1b8;
  ID local_180;
  int local_174;
  double local_170;
  double local_160;
  double local_150;
  ID local_140;
  int local_134;
  double local_130;
  double local_120;
  undefined8 local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_88;
  undefined8 local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  byte local_51;
  ID local_50;
  byte local_41;
  ID local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if (param_3 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDoubleMode_026c4670);
    local_41 = 0;
    local_51 = 0;
    bVar1 = true;
    if ((param_1 & 1) != 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = true;
      if (IVar2 == 4) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = IVar2 != 4;
      }
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_showAlert_message__026c4820,&cf_c_y,&::cf___);
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = in_d0;
      local_60 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = in_d0;
      local_70 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = in_d0;
      local_80 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_98 = in_d0;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      uVar9 = 0x4000000000000000;
      dVar7 = ((local_78 - local_68) + (local_98 - local_88)) / 2.0;
      IVar2 = local_28;
      local_a0 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b0 = dVar7;
      local_a8 = uVar9;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c0 = dVar7;
      local_b8 = uVar9;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_d0 = dVar7;
      local_c8 = uVar9;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = dVar7;
      local_d8 = uVar9;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_e8 = ((local_c0 - local_b0) + (local_e0 - local_d0)) / 2.0;
      if (local_e8 <= 0.0) {
        local_e8 = local_a0;
      }
      local_f0 = local_b0;
      dVar7 = local_b0;
      FUN_01d47748();
      dVar8 = local_f0 + local_a0;
      local_100 = dVar7;
      local_f8 = local_60;
      FUN_01d47748();
      dVar7 = local_f0;
      local_110 = dVar8;
      local_108 = local_70;
      FUN_01d47748();
      dVar8 = local_f0 + local_a0;
      local_120 = dVar7;
      local_118 = local_80;
      FUN_01d47748();
      puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      local_130 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,local_f8,PTR__OBJC_CLASS___NSValue_026ce1f0,
                 PTR_s_valueWithCGPoint__0269e328);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,local_108,PTR__OBJC_CLASS___NSValue_026ce1f0,
                 PTR_s_valueWithCGPoint__0269e328);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,local_118,PTR__OBJC_CLASS___NSValue_026ce1f0,
                 PTR_s_valueWithCGPoint__0269e328);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      dVar7 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      for (local_134 = 0; local_134 < 4; local_134 = local_134 + 1) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pointViews2_026c4818);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_140 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_28;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_160 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_displayPointFromImagePoint__026c47b8);
        local_170 = dVar7;
        local_150 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setCenter__026ca8c0);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        _objc_storeStrong(&local_140,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsAligned__026c4828,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateAlignStatus_026c4830);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateCoordinateFields_026c47d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redrawCanvas_026c47d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_showAlert_message__026c4820,&cf__hQ_b,&cf_NV_P_b);
    }
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points_026c4688);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_alignPoints_withMode__026c4958,IVar2,local_38);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    for (local_174 = 0; local_174 < 4; local_174 = local_174 + 1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pointViews_026c4800);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_180 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_displayPointFromImagePoint__026c47b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setCenter__026ca8c0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_storeStrong(&local_180,0);
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
    local_1b9 = 0;
    bVar1 = false;
    if ((IVar2 & 1) != 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      local_1b9 = 1;
      local_1b8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar2 == 4;
    }
    if ((local_1b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1b8);
    }
    IVar2 = local_28;
    if (bVar1) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_alignPoints_withMode__026c4958,IVar3,local_38);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      for (local_1c0 = 0; local_1c0 < 4; local_1c0 = local_1c0 + 1) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pointViews2_026c4818);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_28;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_displayPointFromImagePoint__026c47b8);
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setCenter__026ca8c0);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        _objc_storeStrong(&local_1c8,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsAligned__026c4828,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateAlignStatus_026c4830);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateCoordinateFields_026c47d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redrawCanvas_026c47d8);
    (*(code *)PTR__objc_retain_02578638)();
    local_208[0] = &::cf___;
    if (local_38 == 0) {
      _objc_storeStrong(local_208,&cf_hQwb_);
    }
    else if (local_38 == 1) {
      _objc_storeStrong(0,local_208,&cf_Oc);
    }
    else if (local_38 == 2) {
      _objc_storeStrong(0,local_208,&cf___);
    }
    else if (local_38 == 3) {
      _objc_storeStrong(0,local_208,&cf_NV_P);
    }
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    local_210 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
    if (((IVar2 & 1) != 0) && (local_38 != 3)) {
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_210;
      local_210 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_showAlert_message__026c4820,&cf__hQ_b,local_210);
    _objc_storeStrong(&local_210);
    _objc_storeStrong(local_208,0);
  }
  return;
}

