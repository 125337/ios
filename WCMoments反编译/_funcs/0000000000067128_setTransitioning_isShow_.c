// setTransitioning:isShow: @0x67128

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::setTransitioning_isShow_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  byte local_2c;
  byte local_28;
  
  *(byte *)(param_1 + (long)_transitioning) = (byte)param_3 & 1;
  local_28 = 0;
  if ((param_3 & 1) != 0) {
    local_28 = (byte)param_4;
  }
  *(byte *)(param_1 + (long)_showTransitioning) = local_28 & 1;
  local_2c = 0;
  if ((param_3 & 1) != 0) {
    local_2c = (byte)param_4 ^ 1;
  }
  *(byte *)(param_1 + (long)_hideTransitioning) = local_2c & 1;
  _objc_msgSend_containerView(param_1,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setUserInteractionEnabled_(uVar2,local_48,(param_3 & 0xff ^ 1) & 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_collectionView(param_1,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setUserInteractionEnabled_(uVar2,local_48,(param_3 & 0xff ^ 1) & 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((param_3 & 1) == 0) {
    _objc_msgSend_delegate(param_1,local_48);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_opt_respondsToSelector(uVar2,"wcm_yb_imageBrowser:endTransitioningWithIsShow:");
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if ((uVar1 & 1) != 0) {
      _objc_msgSend_delegate(param_1,local_48);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_imageBrowser_endTransitioningWithIsShow_
                (uVar2,local_48,param_1,param_4 & 1);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
  }
  else {
    _objc_msgSend_delegate(param_1,local_48);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_opt_respondsToSelector(uVar2,"wcm_yb_imageBrowser:beginTransitioningWithIsShow:");
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if ((uVar1 & 1) != 0) {
      _objc_msgSend_delegate(param_1,local_48);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_imageBrowser_beginTransitioningWithIsShow_
                (uVar2,local_48,param_1,param_4 & 1);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
  }
  return;
}

