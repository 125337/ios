// applicationDidChangedStatusBarOrientationNotification: @0x8ab20

/* Function Stack Size: 0x18 bytes */

void WCMYBIBScreenRotationHandler::applicationDidChangedStatusBarOrientationNotification_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined8 local_88;
  undefined8 local_40;
  undefined8 local_38;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = _objc_msgSend_supportedOnlyOneSystemOrientation(local_18,local_88);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_88);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_statusBarOrientation(uVar3,local_88);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_38 = uVar4;
    uVar3 = _objc_loadWeakRetained(local_18 + 8);
    _objc_msgSend_collectionView(uVar3,local_88);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_centerCell(uVar4,local_88);
    local_40 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_orientationChangeAnimationWithExpectOrientation_centerCell_
              (local_18,local_88,local_38,local_40);
    uVar6 = _objc_msgSend_containerSizeWithOrientation_(local_18,local_88,local_38);
    uVar3 = _objc_loadWeakRetained(local_18 + 8);
    _objc_msgSend_collectionView(uVar3,local_88);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_layout(uVar4,local_88);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setItemSize_(uVar6,in_d1,uVar5,local_88);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = _objc_loadWeakRetained(local_18 + 8);
    _objc_msgSend_collectionView(uVar3,local_88);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_scrollToPage_(uVar4,local_88,*(undefined8 *)(local_18 + 0x30));
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_setCurrentOrientation_(local_18,local_88,local_38);
    _objc_msgSend_setRotating_(local_18,local_88,0);
    _objc_msgSend_orientationDidChangedWithOrientation_centerCell_
              (local_18,local_88,local_38,local_40);
    _objc_storeStrong(&local_40,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

