// openMyMoments @0x565b0

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::openMyMoments(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_a0;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_host(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_navigationController(uVar2,local_a0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_topViewController(uVar3,local_a0);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_host(local_18,local_a0);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(lVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (lVar4 == lVar5) {
    uVar2 = _NSClassFromString(0,&cf_WCCommentListViewController);
    local_28 = uVar2;
    uVar3 = _objc_opt_class(&_OBJC_CLASS___UIViewController);
    uVar6 = _objc_msgSend_isSubclassOfClass_(uVar2,local_a0,uVar3);
    if ((uVar6 & 1) != 0) {
      local_30 = _objc_alloc_init(local_28);
      _objc_msgSend_host(local_18,local_a0);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addChildViewController_(uVar2,local_a0,local_30);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_restoreChrome(local_18,local_a0);
      _Call(local_30,&cf_showMyWCListView,PTR____NSArray0__struct_00110718);
      local_38 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_removeFromParentViewController(local_30,local_a0);
      bVar1 = true;
      if (local_38 != 0) {
        _objc_msgSend_host(local_18,local_a0);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_navigationController(uVar2,local_a0);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_topViewController(uVar3,local_a0);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_host(local_18,local_a0);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar4 == lVar5;
        (*(code *)PTR__objc_release_00110458)(lVar5);
        (*(code *)PTR__objc_release_00110458)(lVar4);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        (*(code *)PTR__objc_release_00110458)(uVar2);
      }
      if (bVar1) {
        _objc_msgSend_coverHost(local_18,local_a0);
        _objc_msgSend_status_(local_18,local_a0,&cf_feelSb);
      }
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

