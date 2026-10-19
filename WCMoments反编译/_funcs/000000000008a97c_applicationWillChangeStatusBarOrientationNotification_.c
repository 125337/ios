// applicationWillChangeStatusBarOrientationNotification: @0x8a97c

/* Function Stack Size: 0x18 bytes */

void WCMYBIBScreenRotationHandler::applicationWillChangeStatusBarOrientationNotification_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 local_38;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = _objc_msgSend_supportedOnlyOneSystemOrientation(local_18,local_48);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    _objc_msgSend_setRotating_(local_18,local_48,1);
    uVar3 = _objc_loadWeakRetained(local_18 + 8);
    uVar4 = _objc_msgSend_currentPage(uVar3,local_48);
    *(undefined8 *)(local_18 + 0x30) = uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = _objc_loadWeakRetained(local_18 + 8);
    _objc_msgSend_collectionView(uVar3,local_48);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_centerCell(uVar4,local_48);
    local_38 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_userInfo(local_28,local_48);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_
              (uVar3,local_48,
               *(undefined8 *)PTR__UIApplicationStatusBarOrientationUserInfoKey_00110090);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend_integerValue(uVar4,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_orientationWillChangeWithExpectOrientation_centerCell_
              (local_18,local_48,uVar5,local_38);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

