// restoreChrome @0x39140

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::restoreChrome(ID param_1,SEL param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  
  uVar2 = _objc_msgSend_capturedChrome(param_1);
  if ((uVar2 & 1) != 0) {
    uVar1 = _objc_msgSend_previousHidesBottomBar(param_1,local_30);
    _objc_msgSend_host(param_1,local_30);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidesBottomBarWhenPushed_(uVar3,local_30,uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = _objc_msgSend_previousEdges(param_1,local_30);
    _objc_msgSend_host(param_1,local_30);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setEdgesForExtendedLayout_(uVar4,local_30,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar1 = _objc_msgSend_previousOpaqueBars(param_1,local_30);
    _objc_msgSend_host(param_1,local_30);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setExtendedLayoutIncludesOpaqueBars_(uVar3,local_30,uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_host(param_1,local_30);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_navigationController(uVar3,local_30);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend_previousNavigationHidden(param_1,local_30);
    _objc_msgSend_setNavigationBarHidden_animated_(uVar4,local_30,uVar5,0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_setCapturedChrome_(param_1,local_30,0);
  }
  return;
}

