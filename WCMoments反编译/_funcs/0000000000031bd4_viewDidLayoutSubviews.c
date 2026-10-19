// viewDidLayoutSubviews @0x31bd4

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::viewDidLayoutSubviews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 local_98;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMFeedController;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLayoutSubviews");
  _objc_msgSend_refreshControl(local_18,local_98);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)_objc_msgSend_qqSafeTop(uVar1,local_98);
  _objc_msgSend_view(local_18,local_98);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)_objc_msgSend_safeAreaInsets(uVar2,local_98);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (dVar3 != dVar4) {
    _objc_msgSend_view(local_18,local_98);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend_safeAreaInsets(uVar1,local_98);
    _objc_msgSend_refreshControl(local_18,local_98);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setQqSafeTop_(uVar5,uVar2,local_98);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_refreshControl(local_18,local_98);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setNeedsLayout(uVar1,local_98);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}

