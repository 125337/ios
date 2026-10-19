// showToView:containerSize: @0x63db8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCMYBImageBrowser::showToView_containerSize_(ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  ID IVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_150;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  double dStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double dStack_88;
  undefined8 local_68;
  double dStack_60;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  
  dVar9 = param_4.field1_0x8;
  local_30 = param_4.field0_0x0;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  local_28 = dVar9;
  _objc_storeStrong(&local_48,param_3);
  _objc_msgSend_rotationHandler(local_38,local_150);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_startObserveStatusBarOrientation(uVar3,local_150);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_addSubview_(local_48,local_150,local_38);
  local_90 = _objc_msgSend_bounds(local_48,local_150);
  dStack_88 = dVar9;
  local_68 = local_90;
  dStack_60 = dVar9;
  _objc_msgSend_setFrame_(local_90,dVar9,local_38,local_150);
  _objc_msgSend_setAutoresizingMask_(local_38,local_150,0x12);
  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_150);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_isStatusBarHidden(uVar3,local_150);
  *(undefined1 *)(local_38 + (long)_originStatusBarHidden) = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_rotationHandler(local_38,local_150);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  dVar9 = local_28;
  _objc_msgSend_configContainerSize_(local_30,uVar3,local_150);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_dataMediator(local_38,local_150);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_currentPage(local_38,local_150);
  _objc_msgSend_preloadWithPage_(uVar3,local_150,uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  local_98 = 0;
  local_a0 = 0;
  uStack_b8 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);
  local_c0 = *(undefined8 *)PTR__CGRectZero_001108d8;
  dStack_a8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);
  local_b0 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);
  _objc_msgSend_dataMediator(local_38,local_150);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_currentPage(local_38,local_150);
  _objc_msgSend_dataForCellAtIndex_(uVar3,local_150,uVar4);
  local_c8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  uVar5 = _objc_opt_respondsToSelector(local_c8,"wcm_yb_projectiveView");
  if ((uVar5 & 1) != 0) {
    _objc_msgSend_wcm_yb_projectiveView(local_c8,local_150);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar3 = local_98;
    local_98 = uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_setHiddenProjectiveView_(local_38,local_150,local_98);
    uVar3 = local_98;
    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIImageView);
    uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);
    if ((uVar5 & 1) == 0) {
      _WCMYBIBSnapshotView(local_98);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar3 = local_a0;
      local_a0 = uVar4;
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else {
      _objc_msgSend_image(local_98,local_150);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar3 = local_a0;
      local_a0 = uVar4;
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
  }
  uVar5 = _objc_opt_respondsToSelector
                    (local_c8,"wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:");
  uVar3 = local_c8;
  if ((uVar5 & 1) != 0) {
    local_108 = _objc_msgSend_bounds(local_38,local_150);
    local_100 = dVar9;
    local_f8 = in_d2;
    local_f0 = in_d3;
    local_118 = _objc_msgSend_size(local_a0,local_150);
    local_110 = dVar9;
    _objc_msgSend_rotationHandler(local_38,local_150);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar7 = _objc_msgSend_currentOrientation(uVar6,local_150);
    uVar4 = local_118;
    dVar9 = local_110;
    local_e8 = _objc_msgSend_wcm_yb_imageViewFrameWithContainerSize_imageSize_orientation_
                         (local_f8,uVar3,local_150,uVar7);
    local_d8 = uVar4;
    dStack_d0 = dVar9;
    local_c0 = local_e8;
    uStack_b8 = local_f0;
    local_b0 = uVar4;
    dStack_a8 = dVar9;
    (*(code *)PTR__objc_release_00110458)(uVar6);
  }
  _objc_msgSend_setTransitioning_isShow_(local_38,local_150,1,1);
  _objc_msgSend_animatedTransition(local_38,local_150);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  IVar1 = local_38;
  uVar4 = local_98;
  uVar3 = local_a0;
  _objc_msgSend_rotationHandler(local_38,local_150);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  uVar8 = _objc_msgSend_currentOrientation(uVar7,local_150);
  local_140 = PTR___NSConcreteStackBlock_001104f0;
  local_138 = 0xc2000000;
  local_134 = 0;
  local_130 = ___46__WCMYBImageBrowser_showToView_containerSize___block_invoke;
  local_128 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_120 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_msgSend_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion_
            (local_c0,uStack_b8,local_b0,dStack_a8,uVar6,local_150,IVar1,uVar4,uVar3,uVar8,
             &local_140);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_48,0);
  return;
}

