// coverHost @0x38d40

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::coverHost(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  uVar1 = _objc_msgSend_capturedChrome(param_1);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_host(param_1,local_28);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_navigationController(uVar2,local_28);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_isNavigationBarHidden(uVar3,local_28);
    _objc_msgSend_setPreviousNavigationHidden_(param_1,local_28,uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_host(param_1,local_28);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_hidesBottomBarWhenPushed(uVar2,local_28);
    _objc_msgSend_setPreviousHidesBottomBar_(param_1,local_28,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_host(param_1,local_28);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_edgesForExtendedLayout(uVar2,local_28);
    _objc_msgSend_setPreviousEdges_(param_1,local_28,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_host(param_1,local_28);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_extendedLayoutIncludesOpaqueBars(uVar2,local_28);
    _objc_msgSend_setPreviousOpaqueBars_(param_1,local_28,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setCapturedChrome_(param_1,local_28,1);
  }
  _objc_msgSend_host(param_1,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setEdgesForExtendedLayout_(uVar2,local_28,0xf);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_host(param_1,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setExtendedLayoutIncludesOpaqueBars_(uVar2,local_28,1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_host(param_1,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_navigationController(uVar2,local_28);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNavigationBarHidden_animated_(uVar3,local_28,1,0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_view(param_1,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_28,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_host(param_1,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_view(uVar2,local_28);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_view(param_1,local_28);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bringSubviewToFront_(uVar3,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_host(param_1,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_navigationController(uVar2,local_28);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_view(uVar3,local_28);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNeedsLayout(uVar4,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_host(param_1,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_navigationController(uVar2,local_28);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_view(uVar3,local_28);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layoutIfNeeded(uVar4,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_ensureTabBarVisible(param_1,local_28);
  return;
}

