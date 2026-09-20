// applyAvatarCornerStyleToPreviewAvatarView:previewType: @ 01817784

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineAvatarCornerBeautifyViewController::
     applyAvatarCornerStyleToPreviewAvatarView_previewType_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  double dVar1;
  dword *pdVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  double in_d0;
  double in_d2;
  double in_d3;
  dword *local_2b8;
  dword *local_2a0;
  double local_260;
  dword *local_220;
  dword *local_208;
  dword *local_1c8;
  dword *local_1b8;
  double local_1b0;
  int local_1a4;
  dword *local_1a0;
  int local_198;
  dword *local_178;
  dword *local_170;
  byte local_161;
  double local_160;
  double local_158;
  dword *local_150;
  double local_148;
  double local_f8;
  double local_f0;
  byte local_e1;
  dword *local_e0;
  dword *local_d8;
  byte local_c9;
  double local_c8;
  byte local_b9;
  dword *local_b8;
  byte local_a9;
  dword *local_a8;
  dword *local_a0;
  byte local_91;
  dword *local_90;
  byte local_81;
  dword *local_80;
  dword *local_78;
  double local_70;
  byte local_61;
  dword *local_60;
  byte local_52;
  byte local_51;
  dword *local_50;
  undefined4 local_44;
  long_long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  if (local_38 == 0) {
    local_44 = 1;
  }
  else {
    pdVar2 = (dword *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = local_40 == 1 || local_40 == 2;
    local_50 = pdVar2;
    if (local_40 == 1 || local_40 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(pdVar2,PTR_s_avatarCornerChatPageEnabled_0269dff0);
      local_198 = (int)pdVar2;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pdVar2,PTR_s_avatarCornerEnabled_0269dfb8);
      local_198 = (int)pdVar2;
    }
    local_52 = local_198 != 0;
    local_1a0 = local_50;
    if ((local_51 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_avatarCornerRadius_0269dfc0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_avatarCornerChatPageRadius_0269dff8);
    }
    local_60 = local_1a0;
    if ((local_51 & 1) == 0) {
      pdVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_avatarCornerBorderEnabled_0269dfc8);
      local_1a4 = (int)pdVar2;
    }
    else {
      pdVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_avatarCornerChatPageBorderEnable_0269e000);
      local_1a4 = (int)pdVar2;
    }
    local_61 = local_1a4 != 0;
    if ((local_51 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_avatarCornerBorderSize_0269dfd0);
      local_1b0 = in_d0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_avatarCornerChatPageBorderSize_0269e008);
      local_1b0 = in_d0;
    }
    local_70 = local_1b0;
    local_81 = 0;
    local_91 = 0;
    local_1b8 = local_50;
    if ((local_51 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_avatarCornerBorderColorLight_0269dfd8);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_1b8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_avatarCornerChatPageBorderColorL_0269e010);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_1b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_1b8;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    local_a9 = 0;
    local_b9 = 0;
    local_1c8 = local_50;
    if ((local_51 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_avatarCornerBorderColorDark_0269dfe8);
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_b8 = local_1c8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_avatarCornerChatPageBorderColorD_0269e018);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = local_1c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_1c8;
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_52 & 1) == 0) {
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar3);
      if (((local_61 & 1) == 0) || (local_70 <= 0.0)) {
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      else {
        local_c8 = local_70;
        if (5.0 < local_70) {
          local_c8 = 5.0;
        }
        if (local_c8 < 0.0) {
          local_c8 = 0.0;
        }
        dVar1 = local_c8;
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar1);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        local_c9 = 0;
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_c9 = IVar5 == 2;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if ((local_c9 & 1) == 0) {
          local_208 = local_78;
        }
        else {
          local_208 = local_a0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = local_208;
        local_220 = local_208;
        local_e1 = 0;
        if (local_208 == (dword *)0x0) {
          local_220 = (dword *)PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = local_220;
        }
        local_e1 = local_208 == (dword *)0x0;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_CGColor_026ca470);
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if ((local_e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
        }
        _objc_storeStrong(&local_d8,0);
      }
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_f8 = in_d2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_260 = in_d3;
      if (local_f8 < in_d3) {
        local_260 = local_f8;
      }
      local_148 = local_260;
      local_f0 = local_260;
      local_150 = local_60;
      if ((long)local_60 < 0) {
        local_150 = (dword *)0x0;
      }
      if (100 < (long)local_150) {
        local_150 = &segment_command_00000020.flags;
      }
      local_158 = 0.0;
      if ((long)local_150 < 100) {
        if (0 < (long)local_150) {
          local_158 = (local_260 / 2.0) * ((double)(long)local_150 / 100.0);
        }
      }
      else {
        local_158 = local_260 / 2.0;
      }
      dVar1 = local_158;
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar1);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar3);
      if (((local_61 & 1) == 0) || (local_70 <= 0.0)) {
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      else {
        local_160 = local_70;
        if (5.0 < local_70) {
          local_160 = 5.0;
        }
        if (local_160 < 0.0) {
          local_160 = 0.0;
        }
        dVar1 = local_160;
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar1);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        local_161 = 0;
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_161 = IVar5 == 2;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if ((local_161 & 1) == 0) {
          local_2a0 = local_78;
        }
        else {
          local_2a0 = local_a0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = local_2a0;
        if (local_2a0 == (dword *)0x0) {
          local_2b8 = (dword *)PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
          _objc_retainAutoreleasedReturnValue();
          local_178 = local_2b8;
        }
        else {
          local_2b8 = local_2a0;
        }
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_CGColor_026ca470);
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if (local_2a0 == (dword *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        _objc_storeStrong(&local_170,0);
      }
      local_44 = 0;
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

