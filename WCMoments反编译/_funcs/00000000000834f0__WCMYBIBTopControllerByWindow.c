// _WCMYBIBTopControllerByWindow @0x834f0

void _WCMYBIBTopControllerByWindow(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_68;
  long local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined4 local_24;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_000838b8;
  }
  local_30 = 0;
  local_38 = 0;
  _objc_msgSend_subviews(local_20,local_68);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar4 = _objc_msgSend_count(uVar3,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (lVar4 != 0) {
    _objc_msgSend_subviews(lVar4,local_20,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectAtIndex_(uVar3,local_68,0);
    local_40 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_nextResponder(local_40,local_68);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    lVar4 = local_38;
    local_38 = lVar5;
    (*(code *)PTR__objc_release_00110458)(lVar4);
    _objc_storeStrong(&local_40,0);
  }
  lVar4 = local_38;
  if (local_38 == 0) {
LAB_00083644:
    _objc_msgSend_rootViewController(local_20,local_68);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_30 = uVar7;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  else {
    uVar3 = _objc_opt_class(&_OBJC_CLASS___UIViewController);
    uVar6 = _objc_opt_isKindOfClass(lVar4,uVar3);
    if ((uVar6 & 1) == 0) goto LAB_00083644;
    _objc_storeStrong(&local_30,local_38);
  }
  while( true ) {
    uVar3 = local_30;
    uVar7 = _objc_opt_class(&_OBJC_CLASS___UITabBarController);
    uVar6 = _objc_opt_isKindOfClass(uVar3,uVar7);
    uVar3 = local_30;
    bVar1 = false;
    bVar2 = true;
    if ((uVar6 & 1) == 0) {
      uVar7 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);
      uVar6 = _objc_opt_isKindOfClass(uVar3,uVar7);
      bVar2 = true;
      if ((uVar6 & 1) == 0) {
        _objc_msgSend_presentedViewController(local_30,local_68);
        local_48 = _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        bVar2 = local_48 != 0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_00110458)(local_48);
    }
    uVar3 = local_30;
    if (!bVar2) break;
    uVar7 = _objc_opt_class(&_OBJC_CLASS___UITabBarController);
    uVar6 = _objc_opt_isKindOfClass(uVar3,uVar7);
    uVar3 = local_30;
    if ((uVar6 & 1) == 0) {
      uVar7 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);
      uVar6 = _objc_opt_isKindOfClass(uVar3,uVar7);
      if ((uVar6 & 1) == 0) {
        _objc_msgSend_presentedViewController(local_30,local_68);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)();
        if (lVar4 != 0) {
          _objc_msgSend_presentedViewController(local_30,local_68);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          uVar3 = local_30;
          local_30 = uVar7;
          (*(code *)PTR__objc_release_00110458)(uVar3);
        }
      }
      else {
        _objc_msgSend_topViewController(local_30,local_68);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        uVar3 = local_30;
        local_30 = uVar7;
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
    }
    else {
      _objc_msgSend_selectedViewController(local_30,local_68);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_30 = uVar7;
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
  }
  local_18 = (*(code *)PTR__objc_retain_00110460)(local_30);
  local_24 = 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
LAB_000838b8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

