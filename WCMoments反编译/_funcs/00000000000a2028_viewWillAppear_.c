// viewWillAppear: @0xa2028

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::viewWillAppear_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 in_d1;
  undefined8 local_60;
  ID local_38;
  class_t *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = &objc::class_t::WCMTOCropViewController;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,"viewWillAppear:",param_3 & 1);
  if ((local_21 & 1) != 0) {
    _objc_msgSend_setInTransition_(local_18,local_60,1);
    _objc_msgSend_setNeedsStatusBarAppearanceUpdate(local_18,local_60);
  }
  _objc_msgSend_navigationController(local_18,local_60);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    _objc_msgSend_cropView(local_18,local_60);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundImageViewHidden_animated_(uVar4,local_60,1,0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    in_d1 = 0x3f800000;
    fVar6 = 0.0;
    if ((local_21 & 1) == 0) {
      fVar6 = 1.0;
    }
    _objc_msgSend_titleLabel(local_21 & 1,local_18,local_60);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAlpha_((double)fVar6,uVar4,local_60);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  else {
    uVar3 = _objc_msgSend_hidesNavigationBar(local_18,local_60);
    if ((uVar3 & 1) != 0) {
      _objc_msgSend_navigationController(local_18,local_60);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_msgSend_isNavigationBarHidden(uVar4,local_60);
      _objc_msgSend_setNavigationBarHidden_(local_18,local_60,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_navigationController(local_18,local_60);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_msgSend_isToolbarHidden(uVar4,local_60);
      _objc_msgSend_setToolbarHidden_(local_18,local_60,uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_navigationController(local_18,local_60);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setNavigationBarHidden_animated_(uVar4,local_60,1,local_21 & 1);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_navigationController(local_18,local_60);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setToolbarHidden_animated_(uVar4,local_60,1,local_21 & 1);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    _objc_msgSend_setModalTransitionStyle_(local_18,local_60,0);
  }
  uVar4 = _objc_msgSend_aspectRatioPreset(local_18,local_60);
  uVar3 = ___CGSizeEqualToSize
                    (uVar4,in_d1,*(undefined8 *)PTR__CGSizeZero_001108e0,
                     *(undefined8 *)(PTR__CGSizeZero_001108e0 + 8));
  IVar1 = local_18;
  if ((uVar3 & 1) == 0) {
    uVar4 = _objc_msgSend_aspectRatioPreset(local_18,local_60);
    _objc_msgSend_setAspectRatioPreset_animated_(uVar4,in_d1,IVar1,local_60,0);
  }
  return;
}

