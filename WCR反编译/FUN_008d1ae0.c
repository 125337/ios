// FUN_008d1ae0 @ 008d1ae0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008d1ae0(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 )

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
  undefined8 uVar20;
  double local_880;
  double local_870;
  cfstringStruct *local_6e8;
  double local_6c0;
  double local_698;
  char *local_518;
  double local_270;
  undefined8 uStack_268;
  double local_260;
  double dStack_258;
  char *local_178;
  byte local_169;
  char *local_168;
  char *local_160;
  undefined *local_158;
  cfstringStruct *local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  byte local_99;
  char *local_98;
  char *local_90;
  undefined4 local_84;
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
  FUN_008ceaa4(local_50,PTR_s_inputModeChangeButton_026a9620,"_inputModeChangeButton");
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_58 = pcVar2;
  FUN_008ceaa4(local_50,PTR_s_textView_0269d0f8,"_textView");
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_50;
  local_70[0] = pcVar3;
  FUN_008ceaa4(local_50,PTR_s_recordButton_026a0330,"_recordButton");
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_78 = pcVar2;
  _objc_getAssociatedObject(local_50,DAT_026f4ae8);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar3;
  FUN_008d11c4();
  if (((ulong)pcVar3 & 1) == 0) {
    if (local_80 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHidden__026ca970,1);
      FUN_008d59d8(local_80);
    }
    FUN_008d5be0(local_70[0]);
    FUN_008d5be0(local_78);
    local_84 = 1;
    goto LAB_008d3aa8;
  }
  pcVar2 = local_58;
  FUN_008d48e4();
  if (((ulong)pcVar2 & 1) == 0) {
    if (local_80 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHidden__026ca970,1);
    }
    local_84 = 1;
    goto LAB_008d3aa8;
  }
  pcVar2 = local_50;
  FUN_008d4b28();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_90 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_870 = param_3;
  local_880 = param_4;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_90;
    local_90 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_870 = param_3;
    local_880 = param_4;
  }
  pcVar2 = local_90;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar3 = local_50;
    FUN_008ceaa4(local_50,PTR_s_toolPanelView_0269f450,"_toolPanelView");
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
    FUN_008ceaa4(local_50,PTR_s_toolView_0269d330,"_toolView");
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
    local_84 = 1;
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
        FUN_008d59d8(local_80);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeFromSuperview_026ca800);
      }
      local_518 = "MMUIButton";
      _objc_getClass();
      if (local_518 == (char *)0x0) {
        local_518 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      }
      local_a8 = local_518;
      (*(code *)PTR__objc_msgSend_02578628)(local_518,PTR_s_buttonWithType__026ca558,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_80;
      local_80 = local_518;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,DAT_02324378);
      pcVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      FUN_008cfa58();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTintColor__026caab0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
                 PTR_s_WCRVPHandleQuickBarTap__026a9cf0,0x40);
      _objc_setAssociatedObject(local_50,DAT_026f4ae8,local_80,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addSubview__026ca4c0,local_80);
    }
    pcVar5 = &cf_other_voice_pack_quickbar;
    _WCRPluginIconResolvedTitle(&cf_other_voice_pack_quickbar,&cf__t);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAccessibilityLabel__0269e968);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar2 = local_80;
    _objc_getAssociatedObject(local_80,DAT_026f4af0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_80;
    local_b0 = pcVar2;
    _objc_getAssociatedObject(local_80,DAT_026f4af8);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = (long)local_b0 - (long)local_58;
    local_b8 = pcVar3;
    if (uVar17 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar17 = (ulong)pcVar3 & 0xffffffff;
      if (((ulong)pcVar3 & 1) == 0) goto LAB_008d24e0;
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
      if (pcVar2 == (char *)0x0) {
        uVar17 = 0;
        goto LAB_008d24e0;
      }
    }
    else {
LAB_008d24e0:
      FUN_008d59d8(uVar17,local_80);
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
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      pcVar14 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 6.0;
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
      local_c0 = puVar4;
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
                 local_c0);
      _objc_setAssociatedObject(local_80,DAT_026f4af8,local_c0,1);
      _objc_setAssociatedObject(local_80,DAT_026f4af0,local_58,0);
      _objc_storeStrong(&local_c0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
    local_f0 = param_1;
    local_e8 = param_2;
    local_e0 = local_870;
    local_d8 = local_880;
    _CGRectGetWidth();
    pcVar2 = local_58;
    local_d0 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
    local_118 = param_1;
    local_110 = param_2;
    local_108 = local_870;
    local_100 = local_880;
    _CGRectGetHeight(param_1,param_2);
    local_698 = param_1;
    if (local_d0 < param_1) {
      local_698 = local_d0;
    }
    local_120 = local_698;
    local_c8 = local_698;
    dVar19 = 1.0;
    local_f8 = param_1;
    if (local_698 < 1.0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentImage_026a3e50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_130 = local_698;
      local_128 = dVar19;
      (*(code *)PTR__objc_release_02578630)();
      local_138 = local_130;
      local_140 = local_128;
      if (local_128 <= local_130) {
        local_6c0 = local_128;
      }
      else {
        local_6c0 = local_130;
      }
      local_148 = local_6c0;
      local_c8 = local_6c0;
    }
    dVar19 = 1.0;
    if (local_c8 < 1.0) {
      local_c8 = 36.0;
    }
    FUN_008cfa58();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTintColor__026caab0);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_6e8 = &cf_other_voice_pack_quickbar;
    _WCRPluginIconResolvedIcon(&cf_other_voice_pack_quickbar,&cf_icons_outlined_more_circle);
    _objc_retainAutoreleasedReturnValue();
    if (local_6e8 == (cfstringStruct *)0x0) {
      local_6e8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_6e8;
    (*(code *)PTR__objc_release_02578630)();
    dVar18 = local_c8;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    FUN_008cf6b8();
    puVar16 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf______1f__d__d)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar16);
    pcVar2 = local_80;
    _objc_getAssociatedObject(local_80,DAT_026f4b00);
    _objc_retainAutoreleasedReturnValue();
    local_169 = 0;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_160 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = true;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isEqualToString__0269ccc8,local_158);
      bVar1 = true;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_currentImage_026a3e50);
        _objc_retainAutoreleasedReturnValue();
        local_169 = 1;
        bVar1 = pcVar2 == (char *)0x0;
        local_168 = pcVar2;
      }
    }
    if ((local_169 & 1) != 0) {
      pcVar2 = local_168;
      (*(code *)PTR__objc_release_02578630)();
    }
    if (bVar1) {
      dVar18 = local_c8;
      dVar19 = local_c8;
      FUN_008d60e0();
      FUN_008d5cfc();
      _objc_retainAutoreleasedReturnValue();
      local_178 = pcVar2;
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
        local_880 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
        local_870 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setImageEdgeInsets__0269ebe0);
        _objc_setAssociatedObject(local_80,DAT_026f4b00,local_158,3);
      }
      _objc_storeStrong(&local_178,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layoutIfNeeded_026ca790);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_frame_026ca640);
    _CGRectGetWidth(dVar18,dVar19);
    uVar20 = 0x3ff0000000000000;
    if (dVar18 < 1.0) {
LAB_008d33e4:
      uStack_268 = 0x3ff0000000000000;
      FUN_008d59d8(local_80);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = false;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = pcVar3 != local_90;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_270 = dVar18;
      local_260 = local_870;
      dStack_258 = local_880;
      if (bVar1) {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_270 = dVar18;
        local_260 = local_870;
        dStack_258 = local_880;
      }
      local_870 = local_270;
      _CGRectGetWidth(local_270,uStack_268,local_260,dStack_258);
      if (local_870 < 32.0) {
        local_870 = 32.0;
      }
      local_880 = local_270;
      _CGRectGetHeight(local_270,uStack_268,local_260,dStack_258);
      if (local_880 < 32.0) {
        local_880 = 32.0;
      }
      dVar18 = local_270;
      _CGRectGetMaxX(local_270,uStack_268,local_260,dStack_258);
      dVar18 = dVar18 + 6.0;
      _CGRectGetMinY(local_270,uStack_268,local_260,dStack_258);
      FUN_008d610c();
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFrame__026ca960);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_frame_026ca640);
      _CGRectGetHeight(dVar18,uVar20);
      local_270 = 1.0;
      if (dVar18 < 1.0) goto LAB_008d33e4;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_bringSubviewToFront__026ca550,local_80);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_frame_026ca640);
    _CGRectGetMaxX(dVar18,local_270,local_870,local_880);
    pcVar2 = local_70[0];
    dVar18 = dVar18 + 6.0;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      FUN_008d6158(dVar18,local_70[0]);
    }
    pcVar2 = local_78;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_70[0];
      FUN_008d48e4();
      if (((ulong)pcVar2 & 1) == 0) {
        FUN_008d6158(dVar18,local_78);
      }
      else {
        FUN_008d6520(dVar18,local_78,local_70[0]);
      }
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    local_84 = 0;
  }
  _objc_storeStrong(&local_90,0);
LAB_008d3aa8:
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

