// applyAvatarCornerAndBorderToPreviewImageView: @ 01828604

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameLibraryViewController::applyAvatarCornerAndBorderToPreviewImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  dword *pdVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  double in_d0;
  double in_d2;
  double in_d3;
  dword *local_2a8;
  dword *local_290;
  double local_250;
  dword *local_210;
  dword *local_1f8;
  dword *local_1b8;
  dword *local_1a8;
  double local_1a0;
  int local_194;
  dword *local_190;
  int local_188;
  dword *local_170;
  dword *local_168;
  byte local_159;
  double local_158;
  double local_150;
  dword *local_148;
  double local_140;
  double local_f0;
  double local_e8;
  byte local_d9;
  dword *local_d8;
  dword *local_d0;
  byte local_c1;
  double local_c0;
  byte local_b1;
  dword *local_b0;
  byte local_a1;
  dword *local_a0;
  dword *local_98;
  byte local_89;
  dword *local_88;
  byte local_79;
  dword *local_78;
  dword *local_70;
  double local_68;
  byte local_59;
  dword *local_58;
  byte local_4a;
  byte local_49;
  dword *local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    pdVar2 = (dword *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_48 = pdVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewRole_026b63a8);
    local_49 = true;
    if (IVar3 != 1) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewRole_026b63a8);
      local_49 = IVar3 == 2;
    }
    if ((bool)local_49 == false) {
      pdVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerEnabled_0269dfb8);
      local_188 = (int)pdVar2;
    }
    else {
      pdVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerChatPageEnabled_0269dff0);
      local_188 = (int)pdVar2;
    }
    local_4a = local_188 != 0;
    local_190 = local_48;
    if ((local_49 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerRadius_0269dfc0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerChatPageRadius_0269dff8);
    }
    local_58 = local_190;
    if ((local_49 & 1) == 0) {
      pdVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerBorderEnabled_0269dfc8);
      local_194 = (int)pdVar2;
    }
    else {
      pdVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_avatarCornerChatPageBorderEnable_0269e000);
      local_194 = (int)pdVar2;
    }
    local_59 = local_194 != 0;
    if ((local_49 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerBorderSize_0269dfd0);
      local_1a0 = in_d0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerChatPageBorderSize_0269e008);
      local_1a0 = in_d0;
    }
    local_68 = local_1a0;
    local_79 = 0;
    local_89 = 0;
    local_1a8 = local_48;
    if ((local_49 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerBorderColorLight_0269dfd8);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_1a8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_avatarCornerChatPageBorderColorL_0269e010);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_1a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_1a8;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    local_a1 = 0;
    local_b1 = 0;
    local_1b8 = local_48;
    if ((local_49 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerBorderColorDark_0269dfe8);
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      local_b0 = local_1b8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_avatarCornerChatPageBorderColorD_0269e018);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = local_1b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_1b8;
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_4a & 1) == 0) {
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      if (((local_59 & 1) == 0) || (local_68 <= 0.0)) {
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      else {
        local_c0 = local_68;
        if (local_68 < 0.0) {
          local_c0 = 0.0;
        }
        if (5.0 < local_c0) {
          local_c0 = 5.0;
        }
        dVar1 = local_c0;
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar1);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        local_c1 = 0;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_c1 = IVar5 == 2;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if ((local_c1 & 1) == 0) {
          local_1f8 = local_70;
        }
        else {
          local_1f8 = local_98;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = local_1f8;
        local_210 = local_1f8;
        local_d9 = 0;
        if (local_1f8 == (dword *)0x0) {
          local_210 = (dword *)PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = local_210;
        }
        local_d9 = local_1f8 == (dword *)0x0;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_CGColor_026ca470);
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        _objc_storeStrong(&local_d0,0);
      }
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_f0 = in_d2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_250 = in_d3;
      if (local_f0 < in_d3) {
        local_250 = local_f0;
      }
      local_140 = local_250;
      local_e8 = local_250;
      local_148 = local_58;
      if ((long)local_58 < 0) {
        local_148 = (dword *)0x0;
      }
      if (100 < (long)local_148) {
        local_148 = &segment_command_00000020.flags;
      }
      local_150 = 0.0;
      if ((long)local_148 < 100) {
        if (0 < (long)local_148) {
          local_150 = (local_250 / 2.0) * ((double)(long)local_148 / 100.0);
        }
      }
      else {
        local_150 = local_250 / 2.0;
      }
      dVar1 = local_150;
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar1);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      if (((local_59 & 1) == 0) || (local_68 <= 0.0)) {
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      else {
        local_158 = local_68;
        if (local_68 < 0.0) {
          local_158 = 0.0;
        }
        if (5.0 < local_158) {
          local_158 = 5.0;
        }
        dVar1 = local_158;
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar1);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        local_159 = 0;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_159 = IVar5 == 2;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if ((local_159 & 1) == 0) {
          local_290 = local_70;
        }
        else {
          local_290 = local_98;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_168 = local_290;
        if (local_290 == (dword *)0x0) {
          local_2a8 = (dword *)PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
          _objc_retainAutoreleasedReturnValue();
          local_170 = local_2a8;
        }
        else {
          local_2a8 = local_290;
        }
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_CGColor_026ca470);
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        if (local_290 == (dword *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_170);
        }
        _objc_storeStrong(&local_168,0);
      }
      local_3c = 0;
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

