// FUN_001bdb2c @ 001bdb2c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001bdb2c(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                 undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  ulong local_250;
  ulong local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  ulong local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  char *local_190;
  char *local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  byte local_159;
  ulong local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0 [5];
  char *local_a8;
  char *local_a0;
  char *local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined *local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_6;
  local_28 = param_5;
  (*DAT_028c8c20)(param_5,param_6);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_menuSizeEnabled_026a0468);
  if ((((ulong)puVar2 & 1) != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470), 0.0 < param_1)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    dVar9 = param_3;
    local_68 = param_1;
    dStack_60 = param_2;
    local_58 = param_3;
    dStack_50 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470);
    if (param_3 != dVar9) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470);
      local_70 = param_3 - local_58;
      dStack_88 = dStack_60;
      local_90 = local_68;
      dStack_78 = dStack_50;
      local_80 = local_58;
      dVar9 = local_58;
      dVar8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470);
      pcVar3 = "MMMenuController";
      local_80 = dVar9;
      _objc_getClass();
      local_98 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_90 = local_68 - local_70 / 2.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_sharedMenuController_026a0478);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = pcVar3;
        if (pcVar3 == (char *)0x0) {
          local_90 = local_68 - local_70 / 2.0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_valueForKey__0269d128,&cf_selectionRectInScreen);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = 0;
          local_d0[1] = 0.0;
          local_d0[0] = 0.0;
          local_d0[3] = 0.0;
          local_d0[2] = 0.0;
          local_a8 = pcVar3;
          if (pcVar3 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getValue__026a0480,local_d0);
          }
          puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_f8 = uVar7;
          local_f0 = dVar8;
          local_e8 = param_2;
          local_e0 = param_1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (local_d0[2] <= 0.0) {
            local_100 = local_68 + local_58 / 2.0;
          }
          else {
            local_100 = local_d0[0] + local_d0[2] / 2.0;
          }
          dVar9 = local_100;
          local_108 = local_100;
          dVar8 = local_100;
          local_d8 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470);
          local_90 = dVar9 - dVar8 / 2.0;
          local_110 = 0x4024000000000000;
          if (10.0 <= local_90) {
            if (local_d8 - 10.0 < local_90 + local_80) {
              local_90 = (local_d8 - local_80) - 10.0;
            }
          }
          else {
            local_90 = 10.0;
          }
          _objc_storeStrong(&local_a8,0);
        }
        _objc_storeStrong(&local_a0,0);
      }
      dStack_128 = dStack_88;
      local_130 = local_90;
      dStack_118 = dStack_78;
      local_120 = local_80;
      dStack_148 = dStack_88;
      local_150 = local_90;
      dStack_138 = dStack_78;
      local_140 = local_80;
      param_3 = local_90;
      dVar9 = dStack_88;
      param_2 = local_80;
      param_1 = dStack_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFrame__026ca960);
    }
    local_159 = 0;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuMaxCountPerLine_026a0488);
    bVar1 = false;
    if (0 < (long)puVar2) {
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuItemContainerView_026a0490);
      _objc_retainAutoreleasedReturnValue();
      local_159 = 1;
      bVar1 = uVar6 != 0;
      local_158 = uVar6;
    }
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if (bVar1) {
      local_168 = 16.0;
      param_2 = 4.0;
      local_170 = 4.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470);
      param_2 = param_2 - local_168;
      puVar2 = local_38;
      local_178 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuMaxCountPerLine_026a0488);
      param_3 = param_2 - local_170 * (double)(long)(puVar2 + -1);
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuMaxCountPerLine_026a0488);
      dVar9 = (double)(long)puVar2;
      param_3 = param_3 / dVar9;
      pcVar3 = "MMMenuController";
      local_180 = param_3;
      _objc_getClass();
      local_188 = pcVar3;
      if (pcVar3 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_sharedMenuController_026a0478);
        _objc_retainAutoreleasedReturnValue();
        local_190 = pcVar3;
        if ((pcVar3 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setMenuItemWidth__026a0498),
           ((ulong)pcVar3 & 1) != 0)) {
          param_3 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setMenuItemWidth__026a0498);
        }
        _objc_storeStrong(&local_190,0);
      }
    }
    uVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuItemContainerView_026a0490);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar6 != 0) {
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuItemContainerView_026a0490);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1b0 = param_3;
      dStack_1a8 = dVar9;
      local_1a0 = param_2;
      dStack_198 = param_1;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      dVar9 = local_1a0;
      dVar8 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470);
      if (dVar9 != dVar8) {
        dStack_1c8 = dStack_1a8;
        local_1d0 = local_1b0;
        dStack_1b8 = dStack_198;
        local_1c0 = local_1a0;
        dVar9 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470);
        dStack_1e8 = dStack_1c8;
        local_1f0 = local_1d0;
        dStack_1d8 = dStack_1b8;
        uVar6 = local_28;
        local_1e0 = dVar9;
        local_1c0 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuItemContainerView_026a0490);
        _objc_retainAutoreleasedReturnValue();
        dStack_208 = dStack_1e8;
        local_210 = local_1f0;
        dStack_1f8 = dStack_1d8;
        local_200 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,dStack_1e8,local_1e0);
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuMaxCountPerLine_026a0488);
    if (0 < (long)puVar2) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_menuItemViews);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
      local_218 = uVar4;
      if (uVar4 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar6 = uVar4 & 0xffffffff;
        if ((uVar4 & 1) != 0) {
          uVar4 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0);
          uVar6 = 0;
          if (uVar4 != 0) {
            local_220 = 16.0;
            dVar8 = 4.0;
            local_228 = 4.0;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuWidth_026a0470);
            dVar8 = dVar8 - local_220;
            puVar2 = local_38;
            local_230 = dVar8;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuMaxCountPerLine_026a0488);
            dVar9 = local_228 * (double)(long)(puVar2 + -1);
            puVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuMaxCountPerLine_026a0488);
            local_238 = (dVar8 - dVar9) / (double)(long)puVar2;
            local_240 = local_220 / 2.0;
            local_248 = 0;
            while( true ) {
              uVar4 = local_248;
              uVar5 = local_218;
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0);
              uVar6 = uVar4 - uVar5;
              if (uVar5 <= uVar4) break;
              uVar6 = local_218;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_218,PTR_s_objectAtIndexedSubscript__0269cc78,local_248);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
              local_250 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((uVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_frame_026ca640);
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuMaxCountPerLine_026a0488);
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_menuMaxCountPerLine_026a0488);
                (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_setFrame__026ca960);
              }
              _objc_storeStrong(&local_250,0);
              local_248 = local_248 + 1;
            }
          }
        }
      }
      _objc_storeStrong(uVar6,&local_218,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

