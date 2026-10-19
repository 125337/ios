// openMessages @0x5691c

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::openMessages(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_host(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_navigationController(uVar1,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_topViewController(uVar2,local_50);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_host(local_18,local_50);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(lVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (lVar3 == lVar4) {
    uVar1 = _objc_alloc(&objc::class_t::WCMInboxController);
    local_28 = _objc_msgSend_initWithStyle_(uVar1,local_50,0);
    _objc_msgSend_setHidesBottomBarWhenPushed_(local_28,local_50,1);
    _objc_msgSend_restoreChrome(local_18,local_50);
    _objc_msgSend_host(local_18,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_navigationController(uVar1,local_50);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_pushViewController_animated_(uVar2,local_50,local_28,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

