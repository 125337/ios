// _willRotateToInterfaceOrientation:duration: @0xa492c

/* Function Stack Size: 0x20 bytes */

void WCMTOCropViewController::_willRotateToInterfaceOrientation_duration_
               (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  double in_d2;
  undefined8 in_d3;
  undefined8 local_158;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  _objc_msgSend_toolbar(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_snapshotViewAfterScreenUpdates_(uVar1,local_158,0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setToolbarSnapshotView_(param_1,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_toolbar(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_frame(uVar1,local_158);
  _objc_msgSend_toolbarSnapshotView(param_1,local_158);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar4,uVar2,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar3 = _UIInterfaceOrientationIsLandscape(param_3);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend_toolbarSnapshotView(param_1,local_158);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAutoresizingMask_(uVar1,local_158,0x14);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  else {
    _objc_msgSend_toolbarSnapshotView(param_1,local_158);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAutoresizingMask_(uVar1,local_158,10);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_msgSend_view(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_toolbarSnapshotView(param_1,local_158);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addSubview_(uVar1,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _UIInterfaceOrientationIsPortrait(param_3);
  local_a0 = (double)_objc_msgSend_frameForToolbarWithVerticalLayout_(param_1,local_158,uVar1);
  uStack_98 = in_d3;
  uVar3 = _UIInterfaceOrientationIsLandscape(param_3);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend_view(param_1,local_158);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_bounds(uVar1,local_158);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  else {
    local_a0 = -in_d2;
    uStack_98 = in_d1;
  }
  _objc_msgSend_toolbar(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(local_a0,uVar1,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_toolbar(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layoutIfNeeded(uVar1,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_toolbar(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0,uVar1,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_cropView(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_prepareforRotation(uVar1,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _UIInterfaceOrientationIsPortrait(param_3);
  uVar2 = _objc_msgSend_frameForCropViewWithVerticalLayout_(param_1,local_158,uVar1);
  _objc_msgSend_cropView(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,uStack_98,in_d2,in_d3,uVar1,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_cropView(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setSimpleRenderMode_(uVar1,local_158,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_cropView(param_1,local_158);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setInternalLayoutDisabled_(uVar1,local_158,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

