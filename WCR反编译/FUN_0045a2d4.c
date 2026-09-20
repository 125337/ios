// FUN_0045a2d4 @ 0045a2d4

/* WARNING: Removing unreachable block (ram,0x0045aadc) */

void FUN_0045a2d4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  cfstringStruct *local_528;
  double local_510;
  double local_4e8;
  char *local_348;
  char *local_180;
  byte local_171;
  char *local_170;
  char *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  undefined *local_c8;
  char *local_c0;
  char *local_b8;
  undefined *local_b0;
  char *local_a8;
  byte local_99;
  char *local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_81;
  char *local_80;
  char *local_78;
  char *local_70 [3];
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (char *)0x0;
  _objc_storeStrong(&local_50,param_5);
  pcVar2 = local_50;
  FUN_0045c0b8(local_50,PTR_s_expressionButton_0269f470,"_expressionButton");
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_58 = pcVar2;
  FUN_0045c0b8(local_50,PTR_s_textView_0269d0f8,"_textView");
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_50;
  local_70[0] = pcVar3;
  FUN_0045c0b8(local_50,PTR_s_recordButton_026a0330,"_recordButton");
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_78 = pcVar2;
  _objc_getAssociatedObject(local_50,DAT_026e03a8);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar3;
  FUN_0045c3c4();
  local_81 = SUB81(pcVar3,0);
  if (((ulong)pcVar3 & 1) == 0) {
    if (local_80 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHidden__026ca970,1);
      FUN_0045c4ec(local_80);
    }
    FUN_0045c6f4(local_70[0]);
    FUN_0045c6f4(local_78);
    local_88 = 1;
    goto LAB_0045bd4c;
  }
  pcVar2 = local_58;
  FUN_0045c7d8();
  if (((ulong)pcVar2 & 1) == 0) {
    if (local_80 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHidden__026ca970,1);
    }
    FUN_0045c6f4(local_70[0]);
    FUN_0045c6f4(local_78);
    local_88 = 1;
    goto LAB_0045bd4c;
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_90 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar3 = local_50;
    FUN_0045c0b8(local_50,PTR_s_toolPanelView_0269f450,"_toolPanelView");
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_90;
    local_90 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_90;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar3 = local_50;
    FUN_0045c0b8(local_50,PTR_s_toolView_0269d330,"_toolView");
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_90;
    local_90 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_90;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  pcVar3 = local_50;
  if (((ulong)pcVar2 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar3 & 1) != 0) {
      _objc_storeStrong(&local_90,local_50);
    }
  }
  pcVar2 = local_90;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  pcVar3 = local_80;
  if (((ulong)pcVar2 & 1) == 0) {
    local_88 = 1;
  }
  else {
    local_99 = 0;
    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = true;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      bVar1 = pcVar2 != local_90;
      local_98 = pcVar2;
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    pcVar2 = local_80;
    if (bVar1) {
      puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar2 & 1) != 0) {
        FUN_0045c4ec(local_80);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeFromSuperview_026ca800);
      }
      local_348 = "MMUIButton";
      _objc_getClass();
      if (local_348 == (char *)0x0) {
        local_348 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      }
      local_a8 = local_348;
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_buttonWithType__026ca558,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_80;
      local_80 = local_348;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,DAT_023241b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithDynamicProvider__0269e538,
                 &PTR___NSConcreteGlobalBlock_0257d468);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTintColor__026caab0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
                 PTR_s_WCRLEHandleQuickBarTap__026a3c08,0x40);
      puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_initWithTarget_action__026ca718,local_50,
                 PTR_s_WCRLEHandleQuickBarLongPress__026a3c10);
      param_1 = DAT_02324020;
      local_b0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addGestureRecognizer__026ca4a8,local_b0);
      _objc_setAssociatedObject(local_80,DAT_026e03b0,local_b0,1);
      _objc_setAssociatedObject(local_50,DAT_026e03a8,local_80,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addSubview__026ca4c0,local_80);
      _objc_storeStrong(&local_b0,0);
    }
    pcVar5 = &cf_other_local_emoticon_quickbar;
    _WCRPluginIconResolvedTitle(&cf_other_local_emoticon_quickbar,&cf_h__t);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAccessibilityLabel__0269e968);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar2 = local_80;
    _objc_getAssociatedObject(local_80,DAT_026e03b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_80;
    local_b8 = pcVar2;
    _objc_getAssociatedObject(local_80,DAT_026e03c0);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = (long)local_b8 - (long)local_58;
    local_c0 = pcVar3;
    if (uVar17 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar17 = (ulong)pcVar3 & 0xffffffff;
      if (((ulong)pcVar3 & 1) == 0) goto LAB_0045adf8;
      pcVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
      if (pcVar2 == (char *)0x0) {
        uVar17 = 0;
        goto LAB_0045adf8;
      }
    }
    else {
LAB_0045adf8:
      FUN_0045c4ec(uVar17,local_80);
      pcVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_80;
      local_48 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = local_80;
      local_40 = pcVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      pcVar11 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      pcVar12 = pcVar10;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      pcVar13 = local_80;
      local_38 = pcVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      pcVar14 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      param_1 = -6.0;
      pcVar15 = pcVar13;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar13,PTR_s_constraintEqualToAnchor_constant_0269ce18)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = pcVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar15);
      (*(code *)PTR__objc_release_02578630)(pcVar14);
      (*(code *)PTR__objc_release_02578630)(pcVar13);
      (*(code *)PTR__objc_release_02578630)(pcVar12);
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      (*(code *)PTR__objc_release_02578630)(pcVar10);
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSLayoutConstraint_026ce030,PTR_s_activateConstraints__0269ce58,
                 local_c8);
      _objc_setAssociatedObject(local_80,DAT_026e03c0,local_c8,1);
      _objc_setAssociatedObject(local_80,DAT_026e03b8,local_58,0);
      _objc_storeStrong(&local_c8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
    local_f8 = param_1;
    local_f0 = param_2;
    local_e8 = param_3;
    local_e0 = param_4;
    _CGRectGetWidth();
    local_d8 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
    local_120 = param_1;
    local_118 = param_2;
    local_110 = param_3;
    local_108 = param_4;
    _CGRectGetHeight(param_1,param_2);
    local_4e8 = param_1;
    if (local_d8 < param_1) {
      local_4e8 = local_d8;
    }
    local_128 = local_4e8;
    local_d0 = local_4e8;
    dVar19 = 1.0;
    local_100 = param_1;
    if (local_4e8 < 1.0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentImage_026a3e50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_138 = local_4e8;
      local_130 = dVar19;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_140 = local_138;
      local_148 = local_130;
      if (local_130 <= local_138) {
        local_510 = local_130;
      }
      else {
        local_510 = local_138;
      }
      local_150 = local_510;
      local_d0 = local_510;
    }
    dVar19 = 1.0;
    if (local_d0 < 1.0) {
      local_d0 = 36.0;
    }
    local_528 = &cf_other_local_emoticon_quickbar;
    _WCRPluginIconResolvedIcon(&cf_other_local_emoticon_quickbar,&cf_dt_icon);
    _objc_retainAutoreleasedReturnValue();
    if (local_528 == (cfstringStruct *)0x0) {
      local_528 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_528;
    (*(code *)PTR__objc_release_02578630)();
    dVar18 = local_d0;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    FUN_004540ac();
    puVar16 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf______1f__d__d)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar16);
    pcVar2 = local_80;
    _objc_getAssociatedObject(local_80,DAT_026e03c8);
    _objc_retainAutoreleasedReturnValue();
    local_171 = 0;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_168 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = true;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_isEqualToString__0269ccc8,local_160);
      bVar1 = true;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_currentImage_026a3e50);
        _objc_retainAutoreleasedReturnValue();
        local_171 = 1;
        bVar1 = pcVar2 == (char *)0x0;
        local_170 = pcVar2;
      }
    }
    if ((local_171 & 1) != 0) {
      pcVar2 = local_170;
      (*(code *)PTR__objc_release_02578630)();
    }
    if (bVar1) {
      dVar18 = local_d0;
      dVar19 = local_d0;
      FUN_00454080();
      FUN_0045cc1c();
      _objc_retainAutoreleasedReturnValue();
      local_180 = pcVar2;
      if (pcVar2 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setImage_forState__0269cc60,pcVar2,0);
        pcVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__UIEdgeInsetsZero_02578118,
                   *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8),
                   *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10),
                   *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18),local_80,
                   PTR_s_setContentEdgeInsets__0269ebd0);
        dVar19 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 8);
        dVar18 = *(double *)PTR__UIEdgeInsetsZero_02578118;
        param_4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
        param_3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setImageEdgeInsets__0269ebe0);
        _objc_setAssociatedObject(local_80,DAT_026e03c8,local_160,3);
      }
      _objc_storeStrong(&local_180,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layoutIfNeeded_026ca790);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_bringSubviewToFront__026ca550,local_80);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_frame_026ca640);
    _CGRectGetMinX(dVar18,dVar19,param_3,param_4);
    pcVar2 = local_70[0];
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      FUN_0045d024(dVar18 - 6.0,local_70[0]);
    }
    pcVar2 = local_78;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      FUN_0045d024(dVar18 - 6.0,local_78);
    }
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    local_88 = 0;
  }
  _objc_storeStrong(&local_90,0);
LAB_0045bd4c:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

