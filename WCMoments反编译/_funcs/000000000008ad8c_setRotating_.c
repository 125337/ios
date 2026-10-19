// setRotating: @0x8ad8c

/* Function Stack Size: 0x14 bytes */

void WCMYBIBScreenRotationHandler::setRotating_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  
  *(byte *)(param_1 + 0x38) = (byte)param_3 & 1;
  uVar1 = _objc_loadWeakRetained(param_1 + 8);
  _objc_msgSend_containerView(uVar1,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setUserInteractionEnabled_(uVar2,local_50,(param_3 & 0xff ^ 1) & 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 8);
  _objc_msgSend_collectionView(uVar1,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setUserInteractionEnabled_(uVar2,local_50,(param_3 & 0xff ^ 1) & 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 8);
  _objc_msgSend_collectionView(uVar1,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_panGestureRecognizer(uVar2,local_50);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setEnabled_(uVar3,local_50,(param_3 & 0xff ^ 1) & 1);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

