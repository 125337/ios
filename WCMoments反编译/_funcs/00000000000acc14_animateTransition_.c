// animateTransition: @0xacc14

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMTOCropViewControllerTransitioning::animateTransition_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 uVar14;
  undefined8 in_d3;
  undefined8 uVar15;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_310;
  undefined *local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  code *local_2f8;
  undefined *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  code *local_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 local_258 [6];
  undefined8 local_228;
  undefined8 local_208;
  undefined8 local_1e8;
  long local_1c8 [5];
  undefined8 local_1a0;
  undefined8 local_180;
  undefined1 local_159;
  long local_158;
  undefined8 local_130;
  undefined8 local_110;
  undefined1 local_e9;
  long local_e8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  _objc_msgSend_containerView(local_38,local_310);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_viewControllerForKey_
            (local_38,local_310,
             *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_00110138);
  local_48 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_viewControllerForKey_
            (local_38,local_310,*(undefined8 *)PTR__UITransitionContextToViewControllerKey_00110140)
  ;
  local_50 = _objc_retainAutoreleasedReturnValue();
  iVar4 = _objc_msgSend_isDismissing(local_28,local_310);
  if (iVar4 == 0) {
    local_328 = local_50;
  }
  else {
    local_328 = local_48;
  }
  local_58 = (*(code *)PTR__objc_retain_00110460)(local_328);
  iVar4 = _objc_msgSend_isDismissing(local_28,local_310);
  if (iVar4 == 0) {
    local_330 = local_48;
  }
  else {
    local_330 = local_50;
  }
  local_60 = (*(code *)PTR__objc_retain_00110460)(local_330);
  local_80 = _objc_msgSend_bounds(local_40,local_310);
  uStack_78 = in_d1;
  local_70 = in_d2;
  uStack_68 = in_d3;
  _objc_msgSend_view(local_58,local_310);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(local_80,uVar6,local_310);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  uVar7 = _objc_msgSend_isDismissing(local_28,local_310);
  uVar6 = uStack_78;
  uVar14 = local_70;
  uVar15 = uStack_68;
  if ((uVar7 & 1) != 0) {
    local_c0 = _objc_msgSend_bounds(local_40,local_310);
    uStack_b8 = uStack_78;
    local_b0 = local_70;
    uStack_a8 = uStack_68;
    _objc_msgSend_view(local_60,local_310);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(local_c0,uVar6,local_310);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    uVar6 = uStack_b8;
    uVar14 = local_b0;
    uVar15 = uStack_a8;
  }
  iVar4 = _objc_msgSend_isDismissing(local_28,local_310);
  uVar9 = local_40;
  if (iVar4 == 0) {
    _objc_msgSend_view(local_58,local_310);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(uVar9,local_310);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    _objc_msgSend_view(local_58,local_310);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setNeedsLayout(uVar9,local_310);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    _objc_msgSend_view(local_58,local_310);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_layoutIfNeeded(uVar9,local_310);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    _objc_msgSend_viewDidLayoutSubviews(local_58,local_310);
  }
  else {
    _objc_msgSend_view(local_60,local_310);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_58,local_310);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_insertSubview_belowSubview_(uVar9,local_310,uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar11);
    (*(code *)PTR__objc_release_00110458)(uVar8);
  }
  _objc_msgSend_prepareForTransitionHandler(local_28,local_310);
  lVar10 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar10 != 0) {
    _objc_msgSend_prepareForTransitionHandler(local_28,local_310);
    lVar10 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar10);
  }
  uVar7 = _objc_msgSend_isDismissing(local_28,local_310);
  local_e9 = 0;
  bVar3 = false;
  uVar1 = (uVar7 & 1) == 0;
  if ((bool)uVar1) {
    _objc_msgSend_fromView(local_28,local_310);
    local_e8 = _objc_retainAutoreleasedReturnValue();
    bVar3 = local_e8 != 0;
    local_e9 = uVar1;
    (*(code *)PTR__objc_release_00110458)(local_e8);
    uVar1 = local_e9;
  }
  local_e9 = uVar1;
  if (bVar3) {
    _objc_msgSend_fromView(local_28,local_310);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_superview(uVar9,local_310);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_fromView(local_28,local_310);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    local_130 = _objc_msgSend_frame(uVar11,local_310);
    local_110 = _objc_msgSend_convertRect_toView_(local_130,uVar8,local_310,local_40);
    _objc_msgSend_setFromFrame_(local_110,local_28,local_310);
    (*(code *)PTR__objc_release_00110458)(uVar11);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar9);
  }
  else {
    uVar7 = _objc_msgSend_isDismissing(local_28,local_310);
    local_159 = 0;
    bVar3 = false;
    uVar1 = (uVar7 & 1) != 0;
    if ((bool)uVar1) {
      _objc_msgSend_toView(local_28,local_310);
      local_158 = _objc_retainAutoreleasedReturnValue();
      bVar3 = local_158 != 0;
      local_159 = uVar1;
      (*(code *)PTR__objc_release_00110458)(local_158);
      uVar1 = local_159;
    }
    local_159 = uVar1;
    if (bVar3) {
      _objc_msgSend_toView(local_28,local_310);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_superview(uVar9,local_310);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_toView(local_28,local_310);
      uVar11 = _objc_retainAutoreleasedReturnValue();
      local_1a0 = _objc_msgSend_frame(uVar11,local_310);
      local_180 = _objc_msgSend_convertRect_toView_(local_1a0,uVar8,local_310,local_40);
      _objc_msgSend_setToFrame_(local_180,local_28,local_310);
      (*(code *)PTR__objc_release_00110458)(uVar11);
      (*(code *)PTR__objc_release_00110458)(uVar8);
      (*(code *)PTR__objc_release_00110458)(uVar9);
    }
  }
  local_1c8[0] = 0;
  uVar7 = _objc_msgSend_isDismissing(local_28,local_310);
  if ((uVar7 & 1) == 0) {
LAB_000ad32c:
    uVar7 = _objc_msgSend_isDismissing(local_28,local_310);
    if ((uVar7 & 1) != 0) goto LAB_000ad454;
    local_208 = _objc_msgSend_fromFrame(local_28,local_310);
    uVar7 = _CGRectIsEmpty(local_208);
    if ((uVar7 & 1) != 0) goto LAB_000ad454;
  }
  else {
    local_1e8 = _objc_msgSend_toFrame(local_28,local_310);
    uVar7 = _CGRectIsEmpty(local_1e8);
    if ((uVar7 & 1) != 0) goto LAB_000ad32c;
  }
  uVar9 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  _objc_msgSend_image(local_28,local_310);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  lVar12 = _objc_msgSend_initWithImage_(uVar9,local_310);
  lVar10 = local_1c8[0];
  local_1c8[0] = lVar12;
  (*(code *)PTR__objc_release_00110458)(lVar10);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  local_228 = _objc_msgSend_fromFrame(local_28,local_310);
  _objc_msgSend_setFrame_(local_228,uVar6,uVar14,uVar15,local_1c8[0],local_310);
  _objc_msgSend_setAccessibilityIgnoresInvertColors_(local_1c8[0],local_310,1);
  _objc_msgSend_addSubview_(local_40,local_310,local_1c8[0]);
LAB_000ad454:
  uVar5 = _objc_msgSend_isDismissing(local_28,local_310);
  fVar13 = 1.0;
  if ((uVar5 & 1) == 0) {
    fVar13 = 0.0;
  }
  _objc_msgSend_view(uVar5 & 1,local_58,local_310);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_((double)fVar13,uVar6,local_310);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  if (local_1c8[0] != 0) {
    uVar6 = _objc_msgSend_transitionDuration_(local_28,local_310,local_38);
    puVar2 = PTR___NSConcreteStackBlock_001104f0;
    local_280 = PTR___NSConcreteStackBlock_001104f0;
    local_278 = 0xc2000000;
    local_274 = 0;
    local_270 = ___58__WCMTOCropViewControllerTransitioning_animateTransition___block_invoke;
    local_268 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;
    local_260 = (*(code *)PTR__objc_retain_00110460)(local_1c8[0]);
    local_258[0] = (*(code *)PTR__objc_retain_00110460)(local_28);
    local_2a8 = puVar2;
    local_2a0 = 0xc2000000;
    local_29c = 0;
    local_298 = ___58__WCMTOCropViewControllerTransitioning_animateTransition___block_invoke_2;
    local_290 = &___block_descriptor_40_e8_32s_e8_v12__0B8l;
    local_288 = (*(code *)PTR__objc_retain_00110460)(local_1c8[0]);
    _objc_msgSend_animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
              (uVar6,0,0x3ff0000000000000,0x3fe6666660000000,&_OBJC_CLASS___UIView,local_310,0,
               &local_280,&local_2a8);
    _objc_storeStrong(&local_288);
    _objc_storeStrong(local_258,0);
    _objc_storeStrong(&local_260,0);
  }
  uVar6 = _objc_msgSend_transitionDuration_(local_28,local_310,local_38);
  puVar2 = PTR___NSConcreteStackBlock_001104f0;
  local_2d8 = PTR___NSConcreteStackBlock_001104f0;
  local_2d0 = 0xc2000000;
  local_2cc = 0;
  local_2c8 = ___58__WCMTOCropViewControllerTransitioning_animateTransition___block_invoke_5;
  local_2c0 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;
  local_2b8 = (*(code *)PTR__objc_retain_00110460)(local_58);
  local_2b0 = (*(code *)PTR__objc_retain_00110460)(local_28);
  local_308 = puVar2;
  local_300 = 0xc2000000;
  local_2fc = 0;
  local_2f8 = ___58__WCMTOCropViewControllerTransitioning_animateTransition___block_invoke_2_6;
  local_2f0 = &___block_descriptor_48_e8_32s40s_e8_v12__0B8l;
  local_2e8 = (*(code *)PTR__objc_retain_00110460)(local_28);
  local_2e0 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_msgSend_animateWithDuration_animations_completion_
            (uVar6,&_OBJC_CLASS___UIView,local_310,&local_2d8,&local_308);
  _objc_storeStrong(&local_2e0);
  _objc_storeStrong(&local_2e8,0);
  _objc_storeStrong(&local_2b0,0);
  _objc_storeStrong(&local_2b8,0);
  _objc_storeStrong(local_1c8,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

