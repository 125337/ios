// adjustToolbarInsets @0xa4268

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::adjustToolbarInsets(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 local_100;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_48 = *(undefined8 *)(PTR__UIEdgeInsetsZero_001100b0 + 8);
  local_50 = *(undefined8 *)PTR__UIEdgeInsetsZero_001100b0;
  uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_001100b0 + 0x18);
  local_40 = *(undefined8 *)(PTR__UIEdgeInsetsZero_001100b0 + 0x10);
  uVar1 = _objc_msgSend_verticalLayout(param_1);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_view(param_1,local_100);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_safeAreaInsets(uVar2,local_100);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uStack_48 = in_d1;
  }
  else {
    lVar3 = _objc_msgSend_toolbarPosition(param_1,local_100);
    if (lVar3 + -1 == 0) {
      _objc_msgSend_view(0,param_1,local_100);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      local_50 = _objc_msgSend_safeAreaInsets(uVar2,local_100);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    else {
      _objc_msgSend_view(lVar3 + -1,param_1,local_100);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_safeAreaInsets(uVar2,local_100);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      local_40 = in_d2;
    }
  }
  _objc_msgSend_toolbar(param_1,local_100);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundViewOutsets_(local_50,uStack_48,local_40,uVar4,uVar2,local_100);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = _objc_msgSend_statusBarHeight(param_1,local_100);
  _objc_msgSend_toolbar(param_1,local_100);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setStatusBarHeightInset_(uVar2,uVar4,local_100);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_toolbar(param_1,local_100);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNeedsLayout(uVar4,local_100);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  return;
}

