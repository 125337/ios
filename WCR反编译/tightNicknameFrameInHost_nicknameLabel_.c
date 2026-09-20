// tightNicknameFrameInHost:nicknameLabel: @ 010e0be8

/* Function Stack Size: 0x20 bytes */

CGRect WCRefineNameplateHelper::tightNicknameFrameInHost_nicknameLabel_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  CGRect CVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  double in_d0;
  double dVar8;
  undefined8 in_d1;
  undefined8 uVar9;
  double in_d2;
  double dVar10;
  double in_d3;
  double local_348;
  ID local_338;
  double local_328;
  double local_320;
  ID local_2a8;
  double local_248;
  double local_1d0;
  double local_1c8;
  ID local_158;
  ID local_110;
  double local_108;
  int local_fc;
  double local_d0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  undefined8 local_70;
  SEL local_68;
  ID local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_4);
  IVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_nicknameTextLabelFromView__026ae8c0,local_78)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_2a8 = IVar4;
  if (IVar4 == 0) {
    local_2a8 = local_78;
  }
  local_80 = IVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_2a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_convertRect_toView__0269ded8,local_70);
  local_a8 = in_d0;
  local_a0 = in_d1;
  local_98 = in_d2;
  local_90 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bounds_026ca548);
  _CGRectGetWidth(in_d0,in_d1);
  local_d0 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_nicknameLineHeightOfView__026ae8e8,local_78);
  if (local_d0 < 1.0) {
    dVar8 = local_a8;
    dVar10 = local_98;
    FUN_010e182c();
    local_fc = 1;
    local_58 = dVar8;
    local_50 = local_a0;
    local_48 = dVar10;
    local_40 = local_90;
  }
  else {
    dVar8 = 0.0;
    local_108 = 0.0;
    if (local_80 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_intrinsicContentSize_026ae8f8);
      if ((0.5 < dVar8) && (dVar8 < 480.0)) {
        local_108 = (double)(long)dVar8;
      }
    }
    else {
      IVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_110 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
      bVar3 = false;
      if (IVar4 == 0) {
        IVar4 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar3 = IVar5 != 0;
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      if (bVar3) {
        IVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_110;
        local_110 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar5);
      }
      IVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_attributedText_0269fcf8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      dVar8 = in_d2;
      if (IVar5 != 0) {
        IVar4 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        FUN_010e08bc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_boundingRectWithSize_options_con_026a66f0,3,0);
        dVar8 = in_d2;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if ((0.5 < in_d2) && (in_d2 < 480.0)) {
          local_108 = (double)(long)in_d2;
        }
      }
      bVar2 = false;
      bVar3 = false;
      if (local_108 < 0.5) {
        IVar4 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
        bVar3 = false;
        if (IVar4 != 0) {
          local_158 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_font_0269ea00);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          bVar3 = local_158 != 0;
        }
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      IVar4 = local_110;
      local_1d0 = dVar8;
      if (bVar3) {
        FUN_010e08bc();
        local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        IVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_font_0269ea00);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar7,0);
        local_1d0 = dVar8;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        if ((0.5 < dVar8) && (dVar8 < 480.0)) {
          local_108 = (double)(long)dVar8;
        }
      }
      IVar4 = local_80;
      uVar9 = 0x3fe0000000000000;
      dVar8 = local_108;
      if (local_108 < 0.5) {
        dVar8 = 1.7976931348623157e+308;
        FUN_010e08bc();
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_sizeThatFits__0269ec10);
        uVar9 = 0x3fe0000000000000;
        if ((0.5 < dVar8) && (uVar9 = 0x407e000000000000, dVar8 < 480.0)) {
          dVar8 = (double)(long)dVar8;
          local_108 = dVar8;
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
      if (local_1d0 < 1.0) {
        if (1.0 <= local_98) {
          local_320 = local_98;
        }
        else {
          local_320 = 1.0;
        }
        local_1d0 = local_320;
      }
      local_1c8 = in_d3;
      if (in_d3 < 1.0) {
        if (1.0 <= local_90) {
          local_328 = local_90;
        }
        else {
          local_328 = 1.0;
        }
        local_1c8 = local_328;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_textRectForBounds_limitedToNumbe_026ae8f0,1);
      bVar3 = false;
      if ((0.5 < local_1d0) && (bVar3 = false, local_1d0 < 480.0)) {
        bVar3 = local_1d0 + 1.0 < local_d0;
      }
      if ((!bVar3) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_convertRect_toView__0269ded8,local_70), local_1d0 <= 0.5)) {
        local_fc = 0;
      }
      else {
        local_248 = local_1d0;
        if (local_1d0 + 1.5 < local_108) {
          local_248 = local_108;
        }
        FUN_010e182c();
        local_fc = 1;
        local_58 = dVar8;
        local_50 = uVar9;
        local_48 = local_248;
        local_40 = local_1c8;
      }
      _objc_storeStrong(&local_110,0);
      if (local_fc != 0) goto LAB_010e1798;
    }
    if (0.5 <= local_108) {
      if (local_80 == 0) {
        local_338 = 0;
      }
      else {
        local_338 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_textAlignment_026a66e8);
      }
      if (local_338 == 2) {
        _CGRectGetMaxX(0,local_a8,local_a0,local_98,local_90);
        local_a8 = local_a8 - local_108;
      }
      else if (local_338 == 1) {
        if (local_98 <= local_108) {
          local_348 = local_98;
        }
        else {
          local_348 = local_108;
        }
        local_a8 = local_a8 + (local_98 - local_348) * 0.5;
        if (local_98 < local_108) {
          local_a8 = local_a8 - (local_108 - local_98) * 0.5;
        }
      }
      local_98 = local_108;
      dVar8 = local_a8;
      dVar10 = local_108;
      FUN_010e182c();
      local_fc = 1;
      local_58 = dVar8;
      local_50 = local_a0;
      local_48 = dVar10;
      local_40 = local_90;
    }
    else {
      dVar8 = local_a8;
      dVar10 = local_98;
      FUN_010e182c();
      local_fc = 1;
      local_58 = dVar8;
      local_50 = local_a0;
      local_48 = dVar10;
      local_40 = local_90;
    }
  }
LAB_010e1798:
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    CVar1.field0_0x0.field1_0x8 = (double)local_50;
    CVar1.field0_0x0.field0_0x0 = local_58;
    CVar1.field1_0x10.field0_0x0 = local_48;
    CVar1.field1_0x10.field1_0x8 = local_40;
    return CVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

