// layoutForcedChatNicknameOnCell: @ 010e9f98

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

bool WCRefineNameplateHelper::layoutForcedChatNicknameOnCell_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  double in_d0;
  double in_d1;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_d2;
  undefined8 uVar10;
  undefined8 in_d3;
  cfstringStruct *local_488;
  double local_460;
  cfstringStruct *local_450;
  cfstringStruct *local_438;
  cfstringStruct *local_400;
  double local_3c0;
  cfstringStruct *local_3a8;
  cfstringStruct *local_390;
  cfstringStruct *local_310;
  undefined4 local_308;
  undefined4 local_304;
  double local_300;
  undefined8 uStack_2f8;
  double local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  undefined8 uStack_2c8;
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  undefined8 local_290;
  double local_278;
  undefined8 local_270;
  char local_251;
  double local_250;
  undefined8 local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_220;
  double local_210;
  double local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8 [2];
  double local_1d8;
  double dStack_1b8;
  double local_198;
  double local_180;
  double dStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_158;
  undefined1 local_13a;
  bool local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  double local_100;
  double local_f0;
  double local_d8;
  double local_c8;
  char local_b1;
  double local_90;
  double local_88;
  double local_80;
  cfstringStruct *local_78;
  undefined1 local_6d;
  undefined1 local_6c;
  byte local_6b;
  byte local_6a;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ID local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_viewModelOfCell__026ae9d0,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    if (IVar3 == 0) {
      local_21 = 0;
      local_44 = 1;
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      _class_getInstanceVariable();
      local_69 = false;
      local_58 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_390 = (cfstringStruct *)0x0;
      }
      else {
        local_390 = local_40;
        _object_getIvar(local_40,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_390;
      }
      local_69 = pcVar2 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_390;
      if ((local_69 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_shouldForceShowChatNicknameForVi_026a5d68,local_50);
      local_6a = (byte)IVar3;
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_viewModelIsSender__026ae9d8,local_50)
      ;
      local_6b = (byte)IVar3;
      IVar3 = local_50;
      FUN_010e91e8();
      pcVar2 = local_60;
      local_6c = (undefined1)IVar3;
      if ((((local_6a & 1) == 0) || ((local_6b & 1) == 0)) &&
         (((IVar3 & 1) == 0 || ((local_6b & 1) == 0)))) {
        IVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_senderNicknameLockedOnView__026ae9e0,local_60);
        local_6d = (undefined1)IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_unlockSenderNicknameOnView__026ae9e8,local_60);
        pcVar2 = local_60;
        puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)pcVar2 & 1) == 0) {
          local_3a8 = (cfstringStruct *)0x0;
        }
        else {
          local_3a8 = local_60;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = local_3a8;
        FUN_010eaf88(local_40);
        local_80 = in_d0;
        FUN_010eb174(local_78);
        pcVar2 = local_60;
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_88 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)pcVar2 & 1) == 0) {
          local_3c0 = 0.0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
          _CGRectGetWidth();
          local_3c0 = in_d0;
        }
        local_90 = local_3c0;
        pcVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_b1 = false;
        if (pcVar4 != (cfstringStruct *)0x0) {
          local_3c0 = local_90 + 1.0;
          local_b1 = local_3c0 < local_88;
          in_d1 = local_88;
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if ((bool)local_b1 == false) {
          pcVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
          local_c8 = local_80;
          local_f0 = local_80;
          local_d8 = local_3c0;
          local_100 = local_3c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3c0,in_d1,local_80,in_d3,local_60,PTR_s_setFrame__026ca960);
          pcVar4 = local_60;
          pcVar2 = &cf_setWidth_;
          _NSSelectorFromString(&cf_setWidth_);
          FUN_010eb6b0(local_80,pcVar4,pcVar2);
        }
        local_21 = 0;
        local_44 = 1;
        _objc_storeStrong(&local_78,0);
      }
      else {
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((((ulong)pcVar2 & 1) == 0) ||
           (pcVar2 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isHidden_026ca768),
           ((ulong)pcVar2 & 1) != 0)) {
          local_21 = 0;
          local_44 = 1;
        }
        else {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
          _class_getInstanceVariable();
          local_139 = false;
          local_128 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_400 = (cfstringStruct *)0x0;
          }
          else {
            local_400 = local_40;
            _object_getIvar(local_40,pcVar2);
            _objc_retainAutoreleasedReturnValue();
            local_138 = local_400;
          }
          local_139 = pcVar2 != (cfstringStruct *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = local_400;
          if ((local_139 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          pcVar2 = local_130;
          puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
          local_13a = false;
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar2 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isHidden_026ca768);
            local_13a = false;
            if (((ulong)pcVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_alpha_026ca4d8);
              local_13a = false;
              in_d1 = DAT_02323d38;
              if (DAT_02323d38 <= in_d0) {
                dVar5 = DAT_02323d38;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_frame_026ca640);
                local_158 = dVar5;
                _CGRectGetWidth(in_d0,dVar5);
                in_d1 = 1.0;
                local_13a = 1.0 < in_d0;
              }
            }
          }
          pcVar2 = local_130;
          if ((bool)local_13a == false) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_unlockSenderNicknameOnView__026ae9e8,local_60);
            local_21 = 0;
            local_44 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
            local_198 = in_d1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_convertRect_toView__0269ded8,local_40);
            local_180 = in_d0;
            dStack_178 = in_d1;
            local_170 = in_d2;
            uStack_168 = in_d3;
            _CGRectGetWidth(in_d0,in_d1);
            dVar5 = 1.0;
            if (in_d0 < 1.0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_frame_026ca640);
              dStack_1b8 = dVar5;
              local_180 = in_d0;
              dStack_178 = dVar5;
              local_170 = in_d2;
              uStack_168 = in_d3;
            }
            dVar5 = local_180;
            dVar6 = dStack_178;
            uVar10 = local_170;
            uVar9 = uStack_168;
            _CGRectGetMidX();
            dVar7 = dVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
            local_1d8 = dVar6;
            _CGRectGetMidX(dVar7,dVar6,uVar10);
            pcVar2 = local_60;
            uVar10 = 0x4020000000000000;
            dVar7 = dVar7 + 8.0;
            if (dVar7 < dVar5) {
              puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((ulong)pcVar2 & 1) == 0) {
                local_450 = (cfstringStruct *)0x0;
              }
              else {
                local_450 = local_60;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1f0 = local_450;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
              local_210 = dVar5;
              local_208 = dVar7;
              local_200 = uVar10;
              local_1f8 = uVar9;
              FUN_010eaf88(local_40);
              FUN_010eb174(local_1f0);
              local_220 = dVar5;
              _CGRectGetMinX(local_180,dStack_178);
              local_230 = local_180 - 4.0;
              local_238 = local_230 - local_220;
              if (local_238 < 8.0) {
                local_240 = local_230 - 8.0;
                local_248 = 0x4020000000000000;
                local_460 = local_240;
                if (local_240 < 8.0) {
                  local_460 = 8.0;
                }
                local_250 = local_460;
                local_220 = local_460;
                local_238 = 8.0;
              }
              uVar10 = 0x4020000000000000;
              dVar5 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
              local_278 = dVar5;
              local_270 = uVar10;
              _CGRectGetMaxX(dVar5,uVar10);
              dVar5 = ABS(dVar5 - local_230);
              uVar8 = 0x3ff0000000000000;
              local_251 = false;
              uVar10 = local_170;
              uVar9 = uStack_168;
              if (dVar5 < 1.0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
                local_298 = dVar5;
                local_290 = uVar8;
                _CGRectGetWidth(dVar5,uVar8);
                dVar5 = ABS(dVar5 - local_220);
                uVar8 = 0x3ff8000000000000;
                local_251 = dVar5 < 1.5;
                uVar10 = local_170;
                uVar9 = uStack_168;
              }
              IVar3 = local_30;
              pcVar2 = local_60;
              if ((bool)local_251 == false) {
                (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
                local_2b8 = local_238;
                local_2a8 = local_220;
                uStack_2b0 = uVar8;
                uStack_2a0 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_238,uVar8,local_220,uVar9,local_30,
                           PTR_s_lockSenderNicknameOnView_frame__026ae9f0,local_60);
                uStack_2d8 = uStack_2b0;
                local_2e0 = local_2b8;
                uStack_2c8 = uStack_2a0;
                local_2d0 = local_2a8;
                uStack_2f8 = uStack_2b0;
                local_300 = local_2b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2b8,uStack_2b0,local_2a8,uStack_2a0,local_60,
                           PTR_s_setFrame__026ca960);
                pcVar4 = local_60;
                pcVar2 = &cf_setWidth_;
                _NSSelectorFromString(&cf_setWidth_);
                FUN_010eb6b0(local_220,pcVar4,pcVar2);
                pcVar4 = local_60;
                pcVar2 = &cf_setRight_;
                _NSSelectorFromString(&cf_setRight_);
                FUN_010eb6b0(local_230,pcVar4,pcVar2);
                IVar3 = local_50;
                FUN_010eb79c();
                local_304 = (undefined4)IVar3;
                IVar3 = local_50;
                FUN_010eb8cc();
                local_308 = (undefined4)IVar3;
                pcVar2 = local_1f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_text_0269ce68);
                _objc_retainAutoreleasedReturnValue();
                local_488 = pcVar2;
                if (pcVar2 == (cfstringStruct *)0x0) {
                  local_488 = &::cf___;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_310 = local_488;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                uVar10 = local_200;
                _CGRectGetMidX(local_210,local_208);
                uVar9 = 0x4020000000000000;
                dVar7 = local_210 + 8.0;
                dVar5 = dVar7;
                (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                _CGRectGetMidX(dVar5,uVar9);
                IVar3 = local_30;
                pcVar2 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar7,dVar5,uVar10,local_1f8,IVar3,
                           PTR_s_lockSenderNicknameOnView_frame__026ae9f0,pcVar2);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_bringSubviewToFront__026ca550,local_60);
                local_21 = 1;
                local_44 = 1;
                _objc_storeStrong(&local_310,0);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar5,uVar8,uVar10,uVar9,IVar3,
                           PTR_s_lockSenderNicknameOnView_frame__026ae9f0,pcVar2);
                local_21 = 0;
                local_44 = 1;
              }
              _objc_storeStrong(&local_1f0,0);
            }
            else {
              puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((ulong)pcVar2 & 1) == 0) {
                local_438 = (cfstringStruct *)0x0;
              }
              else {
                local_438 = local_60;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1e8[0] = local_438;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_unlockSenderNicknameOnView__026ae9e8,local_60);
              local_21 = 0;
              local_44 = 1;
              _objc_storeStrong(local_1e8,0);
            }
          }
          _objc_storeStrong(&local_130,0);
        }
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

