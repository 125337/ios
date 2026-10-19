// setPullDistance: @0x7f78

/* Function Stack Size: 0x18 bytes */

void WCMQQRefreshControl::setPullDistance_(ID param_1,SEL param_2,double param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double local_260;
  double local_258;
  double local_200;
  double local_1f8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [48];
  undefined1 auStack_188 [48];
  double local_158;
  double local_150;
  double local_148;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  double local_128;
  undefined8 local_120;
  undefined1 local_111;
  double local_110;
  double local_108;
  double local_100;
  undefined4 local_f4;
  double local_f0;
  undefined4 local_e4;
  double local_e0;
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [48];
  double local_78;
  double local_70;
  undefined4 local_64;
  double local_60;
  double local_58;
  double local_50;
  undefined4 local_44;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSend_positionIndicator(param_1);
  uVar4 = _objc_msgSend_isRefreshing(local_28,local_1c0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = _objc_msgSend_qqShowingFeedback(local_28,local_1c0), (uVar4 & 1) == 0)) {
    if (3.0 <= local_38) {
      _objc_msgSend_qqSymbolView(local_28,local_1c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setHidden_(uVar5,local_1c0,1);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      local_44 = 0;
      local_50 = local_38;
      if (local_38 <= 0.0) {
        local_1d8 = 0.0;
      }
      else {
        local_1d8 = local_38;
      }
      local_58 = local_1d8;
      local_40 = local_1d8 / 72.0;
      local_64 = 0;
      local_70 = local_38 - 72.0;
      local_1e0 = local_70;
      if (local_70 <= 0.0) {
        local_1e0 = 0.0;
      }
      local_78 = local_1e0;
      dVar7 = (double)_exp(-local_1e0 / 80.0);
      local_60 = (1.0 - dVar7) * 18.0;
      uVar4 = _UIAccessibilityIsReduceMotionEnabled();
      if ((uVar4 & 1) == 0) {
        _CGAffineTransformMakeTranslation(auStack_a8,0,local_60);
      }
      else {
        _memcpy(auStack_a8,PTR__CGAffineTransformIdentity_00110738,0x30);
      }
      _objc_msgSend_qqIndicatorView(local_28,local_1c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _memcpy(auStack_d8,auStack_a8,0x30);
      _objc_msgSend_setTransform_(uVar5,local_1c0,auStack_d8);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      local_e4 = 1;
      local_f4 = 0;
      local_100 = (local_38 - 3.0) / 55.0;
      local_1f8 = local_100;
      if (local_100 <= 0.0) {
        local_1f8 = 0.0;
      }
      local_108 = local_1f8;
      local_f0 = local_1f8;
      if (local_1f8 <= 1.0) {
        local_200 = local_1f8;
      }
      else {
        local_200 = 1.0;
      }
      local_110 = local_200;
      local_e0 = local_200 * local_200 * (local_200 * -2.0 + 3.0);
      _objc_msgSend_qqIndicatorView(local_28,local_1c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setHidden_(uVar5,local_1c0,0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      dVar7 = local_e0;
      _objc_msgSend_qqIndicatorView(local_28,local_1c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setAlpha_(dVar7,uVar5,local_1c0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      local_111 = 72.0 <= local_38;
      pcVar1 = &cf__g;
      if (!(bool)local_111) {
        pcVar1 = &cf_Nb7Re;
      }
      local_120 = (*(code *)PTR__objc_retain_00110460)(pcVar1);
      _objc_msgSend_qqMessageLabel(local_28,local_1c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_text(uVar5,local_1c0);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      uVar3 = _objc_msgSend_isEqualToString_(uVar6,local_1c0,local_120);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = local_120;
      if ((uVar3 & 1) == 0) {
        _objc_msgSend_qqMessageLabel(local_28,local_1c0);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setText_(uVar6,local_1c0,uVar5);
        (*(code *)PTR__objc_release_00110458)(uVar6);
        _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_1c0,&cf_arrow_down);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_qqSymbolView(local_28,local_1c0);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setImage_(uVar6,local_1c0,uVar5);
        (*(code *)PTR__objc_release_00110458)(uVar6);
        (*(code *)PTR__objc_release_00110458)(uVar5);
      }
      local_12c = 1;
      local_13c = 0;
      local_148 = (local_40 - 0.65) / 0.35;
      local_258 = local_148;
      if (local_148 <= 0.0) {
        local_258 = 0.0;
      }
      local_150 = local_258;
      local_138 = local_258;
      if (local_258 <= 1.0) {
        local_260 = local_258;
      }
      else {
        local_260 = 1.0;
      }
      local_158 = local_260;
      local_128 = local_260 * 3.141592653589793;
      _CGAffineTransformMakeRotation(local_128);
      _objc_msgSend_qqSymbolView(local_28,local_1c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _memcpy(auStack_1b8,auStack_188,0x30);
      _objc_msgSend_setTransform_(uVar5,local_1c0,auStack_1b8);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_msgSend_layoutIndicatorContent(local_28,local_1c0);
      _objc_msgSend_setAccessibilityLabel_(local_28,local_1c0,local_120);
      IVar2 = local_28;
      dVar7 = local_40;
      _objc_msgSend_systemBlueColor(&_OBJC_CLASS___UIColor,local_1c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_drawRing_color_(dVar7,IVar2,local_1c0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_storeStrong(&local_120,0);
    }
    else {
      _objc_msgSend_qqIndicatorView(local_28,local_1c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setHidden_(uVar5,local_1c0,1);
      (*(code *)PTR__objc_release_00110458)(uVar5);
    }
  }
  return;
}

