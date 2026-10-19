// setup @0xbed40

/* Function Stack Size: 0x10 bytes */

void WCMTOCropToolbar::setup(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_1b0;
  undefined8 local_138;
  undefined8 local_b8;
  undefined8 local_a8;
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  byte local_81;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  uVar4 = _objc_alloc(&_OBJC_CLASS___UIView);
  local_50 = _objc_msgSend_bounds(local_28,local_b8);
  uVar4 = _objc_msgSend_initWithFrame_(local_50,in_d1,in_d2,in_d3,uVar4,local_b8);
  _objc_msgSend_setBackgroundView_(local_28,local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  local_58 = (*(code *)PTR__objc_retain_00110460)(local_28);
  iVar3 = ___isPlatformVersionAtLeast(2,0x1a,0);
  if (iVar3 == 0) {
    _objc_msgSend_colorWithWhite_alpha_
              (0x3fbeb851e0000000,0x3ff0000000000000,&_OBJC_CLASS___UIColor,local_b8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_backgroundView(local_28,local_b8);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(uVar6,local_b8,uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    IVar2 = local_28;
    _objc_msgSend_backgroundView(local_28,local_b8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(IVar2,local_b8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  else {
    local_60 = 0;
    local_68 = 0;
    local_70 = _NSSelectorFromString(&cf_effectWithStyle_);
    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIGlassEffect);
    uVar5 = _objc_opt_respondsToSelector(uVar4,local_70);
    if ((uVar5 & 1) == 0) {
      uVar6 = _objc_opt_new(&_OBJC_CLASS___UIGlassEffect);
      uVar4 = local_68;
      local_68 = uVar6;
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    else {
      _objc_msgSend_effectWithStyle_(&_OBJC_CLASS___UIGlassEffect,local_b8,1);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      uVar4 = local_68;
      local_68 = uVar6;
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    _objc_msgSend_setInteractive_(local_68,local_b8,1);
    _objc_storeStrong(&local_60,local_68);
    uVar4 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);
    uVar4 = _objc_msgSend_initWithEffect_(uVar4,local_b8,local_60);
    uVar6 = *(undefined8 *)(local_28 + (long)_glassView);
    *(undefined8 *)(local_28 + (long)_glassView) = uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _objc_msgSend_capsuleConfiguration(&_OBJC_CLASS___UICornerConfiguration,local_b8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setCornerConfiguration_(*(undefined8 *)(local_28 + (long)_glassView),local_b8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_setUserInteractionEnabled_
              (*(undefined8 *)(local_28 + (long)_glassView),local_b8,1);
    _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_glassView));
    _objc_msgSend_contentView(*(undefined8 *)(local_28 + (long)_glassView),local_b8);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar4 = local_58;
    local_58 = uVar6;
    (*(code *)PTR__objc_release_00110458)(uVar4);
    *(undefined1 *)(local_28 + (long)_showOnlyIcons) = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  uVar4 = _objc_msgSend_semanticContentAttribute(local_28,local_b8);
  lVar7 = _objc_msgSend_userInterfaceLayoutDirectionForSemanticContentAttribute_
                    (&_OBJC_CLASS___UIView,local_b8,uVar4);
  *(bool *)(local_28 + (long)_reverseContentLayout) = lVar7 == 1;
  _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(local_28);
  local_78 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _WCMTOCropViewUsesGlassDesign();
  if ((uVar5 & 1) == 0) {
    _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(local_28 + (long)_doneTextButton);
    *(undefined8 *)(local_28 + (long)_doneTextButton) = uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar6);
    uVar4 = *(undefined8 *)(local_28 + (long)_doneTextButton);
    local_81 = 0;
    bVar1 = *(long *)(local_28 + (long)_doneTextButtonTitle) == 0;
    if (bVar1) {
      _objc_msgSend_localizedStringForKey_value_table_
                (local_78,local_b8,&cf_Done,&cf___,&cf_WCMTOCropViewControllerLocalizable);
      local_138 = _objc_retainAutoreleasedReturnValue();
      local_80 = local_138;
    }
    else {
      local_138 = *(undefined8 *)(local_28 + (long)_doneTextButtonTitle);
    }
    local_81 = bVar1;
    _objc_msgSend_setTitle_forState_(uVar4,local_b8,local_138,0);
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_80);
    }
    uVar6 = *(undefined8 *)(local_28 + (long)_doneTextButton);
    _objc_msgSend_colorWithRed_green_blue_alpha_
              (0x3ff0000000000000,0x3fe99999a0000000,0,&_OBJC_CLASS___UIColor,local_b8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTitleColor_forState_(uVar6,local_b8,uVar4,0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_titleLabel(*(undefined8 *)(local_28 + (long)_doneTextButton),local_b8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_systemFontOfSize_weight_
              (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightMedium_001100c0,
               &_OBJC_CLASS___UIFont,local_b8);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFont_(uVar4,local_b8);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_addTarget_action_forControlEvents_
              (*(undefined8 *)(local_28 + (long)_doneTextButton),local_b8,local_28,"buttonTapped:",
               0x40);
    _objc_msgSend_sizeToFit(*(undefined8 *)(local_28 + (long)_doneTextButton),local_b8);
    _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_doneTextButton));
  }
  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(local_28 + (long)_doneIconButton);
  *(undefined8 *)(local_28 + (long)_doneIconButton) = uVar4;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  uVar6 = *(undefined8 *)(local_28 + (long)_doneIconButton);
  _objc_msgSend_doneImage(&objc::class_t::WCMTOCropToolbar,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  uVar6 = *(undefined8 *)(local_28 + (long)_doneIconButton);
  _objc_msgSend_colorWithRed_green_blue_alpha_
            (0x3ff0000000000000,0x3fe99999a0000000,0,&_OBJC_CLASS___UIColor,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTintColor_(uVar6,local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_addTarget_action_forControlEvents_
            (*(undefined8 *)(local_28 + (long)_doneIconButton),local_b8,local_28,"buttonTapped:",
             0x40);
  iVar3 = ___isPlatformVersionAtLeast(2,0x1a,0);
  if (iVar3 != 0) {
    _objc_msgSend_prominentGlassButtonConfiguration(&_OBJC_CLASS___UIButtonConfiguration,local_b8);
    local_90 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_labelColor(&_OBJC_CLASS___UIColor,local_b8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBaseForegroundColor_(local_90,local_b8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_setConfiguration_
              (*(undefined8 *)(local_28 + (long)_doneIconButton),local_b8,local_90);
    _objc_storeStrong(&local_90,0);
  }
  _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_doneIconButton));
  _objc_msgSend_setDoneButtonColor_(local_28,local_b8,0);
  uVar5 = _WCMTOCropViewUsesGlassDesign();
  if ((uVar5 & 1) == 0) {
    _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(local_28 + (long)_cancelTextButton);
    *(undefined8 *)(local_28 + (long)_cancelTextButton) = uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar6);
    uVar4 = *(undefined8 *)(local_28 + (long)_cancelTextButton);
    local_99 = 0;
    bVar1 = *(long *)(local_28 + (long)_cancelTextButtonTitle) == 0;
    if (bVar1) {
      _objc_msgSend_localizedStringForKey_value_table_
                (local_78,local_b8,&cf_Cancel,&cf___,&cf_WCMTOCropViewControllerLocalizable);
      local_1b0 = _objc_retainAutoreleasedReturnValue();
      local_98 = local_1b0;
    }
    else {
      local_1b0 = *(undefined8 *)(local_28 + (long)_cancelTextButtonTitle);
    }
    local_99 = bVar1;
    _objc_msgSend_setTitle_forState_(uVar4,local_b8,local_1b0,0);
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_98);
    }
    _objc_msgSend_titleLabel(*(undefined8 *)(local_28 + (long)_cancelTextButton),local_b8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_systemFontOfSize_(0x4031000000000000,&_OBJC_CLASS___UIFont,local_b8);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFont_(uVar4,local_b8);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_addTarget_action_forControlEvents_
              (*(undefined8 *)(local_28 + (long)_cancelTextButton),local_b8,local_28,"buttonTapped:"
               ,0x40);
    _objc_msgSend_sizeToFit(*(undefined8 *)(local_28 + (long)_cancelTextButton),local_b8);
    _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_cancelTextButton))
    ;
  }
  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(local_28 + (long)_cancelIconButton);
  *(undefined8 *)(local_28 + (long)_cancelIconButton) = uVar4;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  uVar6 = *(undefined8 *)(local_28 + (long)_cancelIconButton);
  _objc_msgSend_cancelImage(&objc::class_t::WCMTOCropToolbar,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_addTarget_action_forControlEvents_
            (*(undefined8 *)(local_28 + (long)_cancelIconButton),local_b8,local_28,"buttonTapped:",
             0x40);
  iVar3 = ___isPlatformVersionAtLeast(2,0x1a,0);
  if (iVar3 != 0) {
    _objc_msgSend_clearGlassButtonConfiguration(&_OBJC_CLASS___UIButtonConfiguration,local_b8);
    local_a8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_labelColor(&_OBJC_CLASS___UIColor,local_b8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBaseForegroundColor_(local_a8,local_b8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_setConfiguration_
              (*(undefined8 *)(local_28 + (long)_cancelIconButton),local_b8,local_a8);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_cancelIconButton));
  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(local_28 + (long)_clampButton);
  *(undefined8 *)(local_28 + (long)_clampButton) = uVar4;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_msgSend_setContentMode_(*(undefined8 *)(local_28 + (long)_clampButton),local_b8);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTintColor_(*(undefined8 *)(local_28 + (long)_clampButton),local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  uVar6 = *(undefined8 *)(local_28 + (long)_clampButton);
  _objc_msgSend_clampImage(&objc::class_t::WCMTOCropToolbar,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar6,local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_addTarget_action_forControlEvents_
            (*(undefined8 *)(local_28 + (long)_clampButton),local_b8,local_28,"buttonTapped:");
  _objc_msgSend_addSubview_(local_58,local_b8,*(undefined8 *)(local_28 + (long)_clampButton));
  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton);
  *(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton) = uVar4;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_msgSend_setContentMode_
            (*(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton),local_b8,4);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTintColor_
            (*(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton),local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  uVar6 = *(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton);
  _objc_msgSend_rotateCCWImage(&objc::class_t::WCMTOCropToolbar,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_addTarget_action_forControlEvents_
            (*(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton),local_b8,local_28,
             "buttonTapped:",0x40);
  _objc_msgSend_addSubview_
            (local_58,local_b8,*(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton));
  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(local_28 + (long)_rotateClockwiseButton);
  *(undefined8 *)(local_28 + (long)_rotateClockwiseButton) = uVar4;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_msgSend_setContentMode_(*(undefined8 *)(local_28 + (long)_rotateClockwiseButton),local_b8,4)
  ;
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTintColor_(*(undefined8 *)(local_28 + (long)_rotateClockwiseButton),local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  uVar6 = *(undefined8 *)(local_28 + (long)_rotateClockwiseButton);
  _objc_msgSend_rotateCWImage(&objc::class_t::WCMTOCropToolbar,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_addTarget_action_forControlEvents_
            (*(undefined8 *)(local_28 + (long)_rotateClockwiseButton),local_b8,local_28,
             "buttonTapped:",0x40);
  _objc_msgSend_addSubview_
            (local_58,local_b8,*(undefined8 *)(local_28 + (long)_rotateClockwiseButton));
  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(local_28 + (long)_resetButton);
  *(undefined8 *)(local_28 + (long)_resetButton) = uVar4;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_msgSend_setContentMode_(*(undefined8 *)(local_28 + (long)_resetButton),local_b8,4);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTintColor_(*(undefined8 *)(local_28 + (long)_resetButton),local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_setEnabled_(*(undefined8 *)(local_28 + (long)_resetButton),local_b8,0);
  uVar6 = *(undefined8 *)(local_28 + (long)_resetButton);
  _objc_msgSend_resetImage(&objc::class_t::WCMTOCropToolbar,local_b8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_addTarget_action_forControlEvents_
            (*(undefined8 *)(local_28 + (long)_resetButton),local_b8,local_28,"buttonTapped:",0x40);
  _objc_msgSend_localizedStringForKey_value_table_
            (local_78,local_b8,&cf_Reset,&cf___,&cf_WCMTOCropViewControllerLocalizable);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAccessibilityLabel_(*(undefined8 *)(local_28 + (long)_resetButton),local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_addSubview_(local_58,local_b8,*(undefined8 *)(local_28 + (long)_resetButton));
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_58,0);
  return;
}

