// WCRefine_embedSearchButtonInRightTopMenuIfNeededWithAddButton: @ 004c83ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::WCRefine_embedSearchButtonInRightTopMenuIfNeededWithAddButton_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  ID IVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  undefined8 in_d0;
  double dVar10;
  double dVar11;
  undefined8 in_d1;
  undefined8 uVar12;
  double dVar13;
  undefined8 in_d2;
  undefined8 uVar14;
  undefined8 in_d3;
  double local_830;
  double local_828;
  ulong local_808;
  ulong local_6c8;
  double local_560;
  double local_518;
  double local_510;
  ulong local_438;
  double local_430;
  undefined8 local_428;
  double local_410;
  undefined8 local_408;
  double local_3f0;
  double local_3d0;
  double local_3c8;
  ulong local_340;
  ulong local_338 [18];
  ulong local_2a8;
  ulong local_2a0;
  ulong local_298 [17];
  ulong local_210;
  ulong local_208 [18];
  ulong local_178;
  ulong local_170 [5];
  undefined1 local_141;
  ulong local_140;
  undefined1 local_111;
  ulong local_110;
  ulong local_c8;
  undefined8 local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong *local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  puVar4 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar4,param_3);
  FUN_004c7fcc();
  local_40 = puVar4;
  if ((local_38 == 0) || (puVar4 == (ulong *)0x0)) {
    local_44 = 1;
  }
  else {
    uVar5 = local_38;
    FUN_004c9c5c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_50 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((uVar5 & 1) == 0) {
      local_44 = 1;
    }
    else {
      uVar5 = local_50;
      FUN_004c9e4c();
      _objc_retainAutoreleasedReturnValue();
      local_6c8 = local_50;
      local_58 = uVar5;
      _objc_getAssociatedObject(local_50,&DAT_028cac40);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_6c8;
      if (local_6c8 == 0) {
        local_6c8 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_6c8,PTR_s_integerValue_026ca750);
      }
      local_68 = local_6c8;
      uVar5 = local_50;
      _objc_getAssociatedObject(local_50,&DAT_028cac41);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar5;
      if (uVar5 == 0) {
        pcVar7 = &cf_MMUICommonUtil;
        _NSClassFromString();
        pcVar8 = &cf_getBarButtonWithImageName_target_action_style_accessibility_;
        local_78 = pcVar7;
        _NSSelectorFromString();
        local_80 = pcVar8;
        if ((local_78 != (cfstringStruct *)0x0) &&
           (pcVar7 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_respondsToSelector__026ca818,pcVar8)
           , ((ulong)pcVar7 & 1) != 0)) {
          pcVar7 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_methodSignatureForSelector__0269e190,local_80);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSInvocation_026ce208;
          local_88 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSInvocation_026ce208,
                     PTR_s_invocationWithMethodSignature__0269e1a0,pcVar7);
          _objc_retainAutoreleasedReturnValue();
          local_90 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTarget__0269e1a8,local_78);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setSelector__0269e1b0,local_80);
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = &cf_icons_outlined_search;
          local_a0 = PTR_s_WCRefine_onMainFrameSearchButton_026a40a8;
          local_a8 = 2;
          (*(code *)PTR__objc_retain_02578638)();
          IVar2 = local_28;
          local_b0 = &cf_d__;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setArgument_atIndex__0269eae8,&local_98,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setArgument_atIndex__0269eae8,&local_b8,3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setArgument_atIndex__0269eae8,&local_a0,4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setArgument_atIndex__0269eae8,&local_a8,5);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setArgument_atIndex__0269eae8,&local_b0,6);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_invoke_0269e1b8);
          local_c0 = 0;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_getReturnValue__0269e1c0,&local_c0);
          _objc_storeStrong(&local_70,local_c0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
          _objc_storeStrong(&local_88,0);
        }
        if (local_70 != 0) {
          _objc_setAssociatedObject(local_50,&DAT_028cac41,local_70,1);
        }
      }
      if (local_70 == 0) {
        local_44 = 1;
      }
      else {
        uVar5 = local_70;
        FUN_004ca080();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_c8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
        if ((uVar5 & 1) == 0) {
          local_44 = 1;
        }
        else {
          uVar9 = local_50;
          _objc_getAssociatedObject(local_50,&DAT_028cac42);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          uVar5 = local_50;
          puVar6 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          if (uVar9 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_valueWithCGRect__0269e130);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar5,&DAT_028cac42,puVar6,1);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          uVar9 = local_50;
          _objc_getAssociatedObject(local_50,&DAT_028cac43);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          uVar5 = local_50;
          puVar6 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          if (uVar9 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_valueWithCGRect__0269e130);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar5,&DAT_028cac43,puVar6,1);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          local_111 = 0;
          bVar3 = false;
          uVar1 = local_58 != 0;
          if ((bool)uVar1) {
            uVar5 = local_50;
            _objc_getAssociatedObject(local_50,&DAT_028cac44);
            _objc_retainAutoreleasedReturnValue();
            bVar3 = uVar5 == 0;
            local_111 = uVar1;
            local_110 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar1 = local_111;
          }
          local_111 = uVar1;
          uVar5 = local_50;
          puVar6 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          if (bVar3) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_valueWithCGRect__0269e130);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar5,&DAT_028cac44,puVar6,1);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          local_141 = 0;
          bVar3 = false;
          uVar1 = local_58 != 0;
          if ((bool)uVar1) {
            uVar5 = local_50;
            _objc_getAssociatedObject(local_50,&DAT_028cac45);
            _objc_retainAutoreleasedReturnValue();
            bVar3 = uVar5 == 0;
            local_141 = uVar1;
            local_140 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar1 = local_141;
          }
          local_141 = uVar1;
          uVar5 = local_50;
          puVar6 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          if (bVar3) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_valueWithCGRect__0269e130);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar5,&DAT_028cac45,puVar6,1);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          if ((local_40 == (ulong *)((long)&MACH_HEADER.magic + 1)) && (local_68 == 2)) {
            uVar5 = local_50;
            _objc_getAssociatedObject(0,local_50,&DAT_028cac42);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_50;
            local_170[0] = uVar5;
            _objc_getAssociatedObject(local_50,&DAT_028cac43);
            _objc_retainAutoreleasedReturnValue();
            local_178 = uVar9;
            if (local_170[0] != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_170[0],PTR_s_CGRectValue_0269e128);
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFrame__026ca960);
            }
            if (local_178 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_CGRectValue_0269e128);
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBounds__026ca8a0);
            }
            if (local_58 != 0) {
              uVar5 = local_50;
              _objc_getAssociatedObject(local_50,&DAT_028cac44);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = local_50;
              local_208[0] = uVar5;
              _objc_getAssociatedObject(local_50,&DAT_028cac45);
              _objc_retainAutoreleasedReturnValue();
              local_210 = uVar9;
              if (local_208[0] != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_208[0],PTR_s_CGRectValue_0269e128);
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFrame__026ca960);
              }
              if (local_210 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_CGRectValue_0269e128);
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBounds__026ca8a0);
              }
              _objc_storeStrong(&local_210);
              _objc_storeStrong(local_208,0);
            }
            _objc_storeStrong(&local_178);
            _objc_storeStrong(local_170,0);
          }
          uVar5 = local_c8;
          puVar6 = PTR__OBJC_CLASS___UIControl_026ce2d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
          uVar9 = local_c8;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_298[0] = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_removeTarget_action_forControlEv_026a40c8,local_28,
                       PTR_s_WCRefine_onMainFrameSearchButton_026a40a8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_298[0],PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
                       PTR_s_WCRefine_onMainFrameSearchButton_026a40a8,0x40);
            _objc_storeStrong(local_298,0);
          }
          if (local_40 == (ulong *)((long)&MACH_HEADER.magic + 2)) {
            uVar5 = local_50;
            _objc_getAssociatedObject(0,local_50,&DAT_028cac42);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_50;
            local_2a0 = uVar5;
            _objc_getAssociatedObject(local_50,&DAT_028cac43);
            _objc_retainAutoreleasedReturnValue();
            local_2a8 = uVar9;
            if (local_2a0 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_CGRectValue_0269e128);
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFrame__026ca960);
            }
            if (local_2a8 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_CGRectValue_0269e128);
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBounds__026ca8a0);
            }
            if (local_58 != 0) {
              uVar5 = local_50;
              _objc_getAssociatedObject(local_50,&DAT_028cac44);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = local_50;
              local_338[0] = uVar5;
              _objc_getAssociatedObject(local_50,&DAT_028cac45);
              _objc_retainAutoreleasedReturnValue();
              local_340 = uVar9;
              if (local_338[0] != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_338[0],PTR_s_CGRectValue_0269e128);
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFrame__026ca960);
              }
              if (local_340 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_CGRectValue_0269e128);
                (*(code *)PTR__objc_msgSend_02578628)(in_d0,local_58,PTR_s_setBounds__026ca8a0);
              }
              _objc_storeStrong(&local_340);
              _objc_storeStrong(local_338,0);
            }
            dVar10 = 22.0;
            local_3c8 = 22.0;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
            local_3f0 = dVar10;
            _CGRectGetHeight(dVar10,in_d1);
            uVar12 = 0x3ff0000000000000;
            local_3d0 = dVar10;
            if (dVar10 < 1.0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
              local_410 = dVar10;
              local_408 = uVar12;
              _CGRectGetHeight(dVar10,uVar12);
              local_3d0 = dVar10;
            }
            uVar12 = 0x3ff0000000000000;
            if ((local_3d0 < 1.0) && (local_58 != 0)) {
              dVar10 = local_3d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
              local_430 = dVar10;
              local_428 = uVar12;
              _CGRectGetHeight(dVar10,uVar12);
              local_3d0 = dVar10;
            }
            uVar12 = 0x3ff0000000000000;
            if (local_3d0 < 1.0) {
              local_3d0 = 44.0;
            }
            uVar5 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_808 = uVar5;
            if (uVar5 == 0) {
              local_808 = local_50;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_438 = local_808;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar9 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_438;
            (*(code *)PTR__objc_release_02578630)();
            if (uVar9 != uVar5) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeFromSuperview_026ca800);
              (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_addSubview__026ca4c0,local_c8);
            }
            dVar10 = 10.0;
            FUN_004ca278();
            if (local_438 == local_50) {
              local_828 = 0.0;
            }
            else {
              dVar11 = dVar10;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
              _CGRectGetMinX(dVar11,uVar12);
              local_828 = (dVar11 - 10.0) - local_3c8;
            }
            local_828 = local_828 + dVar10;
            if (local_438 == local_50) {
              local_830 = 0.0;
            }
            else {
              local_830 = local_828;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
              _CGRectGetMinY();
              dVar11 = local_830;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
              _CGRectGetHeight(dVar11,dVar10,in_d2,in_d3);
              local_830 = local_830 + (dVar11 - local_3d0) * 0.5;
            }
            dVar10 = local_3c8;
            dVar11 = local_3d0;
            FUN_004ca32c();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_828,local_830,dVar10,dVar11,local_c8,PTR_s_setFrame__026ca960);
            (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_setClipsToBounds__026ca8c8,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClipsToBounds__026ca8c8,0);
            uVar5 = local_50;
            puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar5,&DAT_028cac40,puVar6,1);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_WCRefine_addLongPressToSearchBut_026a40b8,local_70);
            local_44 = 1;
            _objc_storeStrong(&local_438);
            _objc_storeStrong(&local_2a8,0);
            _objc_storeStrong(&local_2a0,0);
          }
          else {
            uVar9 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_50;
            (*(code *)PTR__objc_release_02578630)();
            if (uVar9 != uVar5) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeFromSuperview_026ca800);
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_c8);
            }
            local_518 = 44.0;
            local_510 = 44.0;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
            _CGRectGetWidth(local_518,in_d1,in_d2);
            uVar14 = 0x4000000000000000;
            uVar12 = 0x4046000000000000;
            if (local_518 < 44.0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
              _CGRectGetWidth(local_518,uVar12,uVar14);
            }
            uVar12 = 0x4000000000000000;
            dVar10 = 44.0;
            if (local_518 < 44.0) {
              dVar10 = 2.0;
              local_518 = 44.0;
            }
            dVar11 = 0.0;
            local_560 = 0.0;
            if (local_58 == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
              _CGRectGetHeight(dVar11,dVar10);
              uVar14 = 0x3ff0000000000000;
              if (dVar11 <= 1.0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
                _CGRectGetHeight(dVar11,uVar14);
                uVar14 = 0x3ff0000000000000;
                if (1.0 < dVar11) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
                  _CGRectGetHeight(dVar11,uVar14,uVar12,in_d3);
                  local_510 = dVar11;
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
                _CGRectGetHeight(dVar11,uVar14,uVar12,in_d3);
                local_510 = dVar11;
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
              dVar11 = dVar10;
              dVar13 = dVar10;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
              _CGRectGetHeight(dVar11,dVar13,uVar12,in_d3);
              local_560 = dVar10;
              if (1.0 < dVar11) {
                local_510 = dVar11;
              }
            }
            uVar14 = 0x4036000000000000;
            uVar12 = 0;
            dVar10 = local_560;
            dVar11 = local_510;
            FUN_004ca32c();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar12,dVar10,uVar14,dVar11,local_c8,PTR_s_setFrame__026ca960);
            if (local_58 != 0) {
              local_518 = local_518 - 22.0;
              uVar12 = 0x4036000000000000;
              FUN_004ca32c();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_518,local_560,uVar12,local_510,local_58,PTR_s_setFrame__026ca960);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClipsToBounds__026ca8c8,0);
            uVar5 = local_50;
            puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar5,&DAT_028cac40,puVar6,1);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_WCRefine_addLongPressToSearchBut_026a40b8,local_70);
            local_44 = 0;
          }
        }
        _objc_storeStrong(&local_c8,0);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

