// FUN_00264b2c @ 00264b2c

void FUN_00264b2c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double local_258;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  ulong local_128;
  long local_120;
  undefined **local_118;
  undefined *local_110 [2];
  double local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  double local_e8;
  double local_e0;
  undefined8 uStack_d8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  ulong local_58;
  undefined4 local_50;
  long local_40;
  ulong local_38;
  double local_30;
  undefined8 local_28;
  ulong *puVar3;
  
  puVar3 = &local_38;
  local_38 = 0;
  local_30 = param_1;
  local_28 = param_2;
  _objc_storeStrong(puVar3,param_5);
  uVar2 = (uint)puVar3;
  local_40 = param_6;
  FUN_00264438();
  if ((((uVar2 & 1) == 0) || (local_38 == 0)) || (local_40 != DAT_028c94e0)) {
    local_50 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent(0);
    param_1 = param_1 - DAT_028c94d8;
    if (param_1 < DAT_02323d00) {
      local_50 = 1;
    }
    else {
      local_58 = 0;
      uVar4 = local_38;
      dVar8 = DAT_02323d00;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_webView_026a12c0);
      if ((uVar4 & 1) != 0) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_webView_026a12c0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_58;
        local_58 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if (local_58 == 0) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_webView);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_58;
        local_58 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar4 = local_58;
      puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
      if ((uVar4 & 1) == 0) {
        local_50 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
        dVar9 = param_3;
        local_88 = param_1;
        local_80 = dVar8;
        local_78 = param_3;
        local_70 = param_4;
        local_68 = param_3;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
        local_b8 = local_68;
        uVar4 = local_58;
        local_c0 = param_1;
        local_b0 = param_3;
        local_a8 = dVar9;
        local_a0 = dVar8;
        local_98 = param_1;
        local_90 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_width_026a12d0);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_width_026a12d0);
          local_b8 = param_1;
        }
        uVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_height_026a12d8);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_height_026a12d8);
          local_c0 = param_1;
        }
        if ((local_b8 < 1.0) || (uVar10 = 0x3ff0000000000000, local_c0 < 1.0)) {
          local_50 = 1;
        }
        else {
          uStack_d8 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
          local_e0 = *(double *)PTR__CGPointZero_025782e0;
          local_258 = 1.0;
          local_e8 = 1.0;
          local_f0 = 0;
          uVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_scrollView_0269dcc0);
          if ((uVar4 & 1) != 0) {
            uVar5 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_scrollView_0269dcc0);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_f0;
            local_f0 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          uVar4 = local_f0;
          puVar6 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentOffset_0269dd18);
            local_100 = local_258;
            uStack_f8 = uVar10;
            local_e0 = local_258;
            uStack_d8 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_zoomScale_026a12e0);
            if (local_258 <= DAT_02323d38) {
              local_258 = 1.0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_zoomScale_026a12e0);
            }
            local_e8 = local_258;
          }
          _objc_storeStrong(&local_f0,0);
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cfstringStruct_0259ca00);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_38;
          ppuVar7 = &local_148;
          local_148 = PTR___NSConcreteStackBlock_02578660;
          local_140 = 0xc2000000;
          local_13c = 0;
          local_138 = FUN_00265440;
          local_130 = &DAT_0257b078;
          local_120 = local_40;
          local_110[0] = puVar6;
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = uVar4;
          _objc_retainBlock();
          uVar5 = local_58;
          local_118 = ppuVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_respondsToSelector__026ca818,
                     PTR_s_evaluateJavaScript_completionHan_026a12f0);
          uVar4 = local_58;
          puVar1 = local_110[0];
          puVar6 = PTR_s_evaluateJavaScript_completionHan_026a12f0;
          if ((uVar5 & 1) != 0) {
            ppuVar7 = local_118;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,puVar6,puVar1);
            (*(code *)PTR__objc_release_02578630)(ppuVar7);
          }
          _objc_storeStrong(&local_118);
          _objc_storeStrong(&local_128,0);
          _objc_storeStrong(local_110,0);
          local_50 = 0;
        }
      }
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

