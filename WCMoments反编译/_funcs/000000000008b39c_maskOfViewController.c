// maskOfViewController @0x8b39c

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYBIBScreenRotationHandler::maskOfViewController(ID param_1,SEL param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  unsigned_long_long local_c0;
  unsigned_long_long local_b8;
  unsigned_long_long local_a0;
  undefined8 local_88;
  bool local_51;
  undefined8 local_50;
  bool local_41;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &DAT_00002710;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  local_38 = _objc_loadWeakRetained(param_1 + 8);
  do {
    lVar6 = local_38;
    if (local_38 == 0) {
LAB_0008b4e8:
      _objc_msgSend_tabBarController(local_30,local_88);
      lVar6 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      if (lVar6 == 0) {
        _objc_msgSend_navigationController(local_30,local_88);
        lVar6 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)();
        if (lVar6 == 0) {
          uVar7 = _objc_msgSend_shouldAutorotate(local_30,local_88);
          if ((uVar7 & 1) == 0) {
            local_c0 = 0;
          }
          else {
            local_c0 = _objc_msgSend_supportedInterfaceOrientations(local_30,local_88);
          }
          local_28 = (undefined *)local_c0;
        }
        else {
          _objc_msgSend_navigationController(local_30,local_88);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          uVar7 = _objc_msgSend_shouldAutorotate(uVar3,local_88);
          local_51 = (uVar7 & 1) == 0;
          if (local_51) {
            local_b8 = 0;
          }
          else {
            _objc_msgSend_navigationController(local_30,local_88);
            local_50 = _objc_retainAutoreleasedReturnValue();
            local_b8 = _objc_msgSend_supportedInterfaceOrientations(local_50,local_88);
          }
          local_51 = !local_51;
          local_28 = (undefined *)local_b8;
          if (local_51) {
            (*(code *)PTR__objc_release_00110458)(local_50);
          }
          (*(code *)PTR__objc_release_00110458)(uVar3);
        }
      }
      else {
        _objc_msgSend_tabBarController(local_30,local_88);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_msgSend_shouldAutorotate(uVar3,local_88);
        local_41 = (uVar7 & 1) == 0;
        if (local_41) {
          local_a0 = 0;
        }
        else {
          _objc_msgSend_tabBarController(local_30,local_88);
          local_40 = _objc_retainAutoreleasedReturnValue();
          local_a0 = _objc_msgSend_supportedInterfaceOrientations(local_40,local_88);
        }
        local_41 = !local_41;
        local_28 = (undefined *)local_a0;
        if (local_41) {
          (*(code *)PTR__objc_release_00110458)(local_40);
        }
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
      puVar1 = local_28;
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
      return (unsigned_long_long)puVar1;
    }
    _objc_opt_self(&_OBJC_CLASS___UIViewController);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_opt_isKindOfClass(lVar6);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    lVar6 = local_38;
    if ((uVar2 & 1) != 0) {
      _objc_storeStrong(&local_30,local_38);
      goto LAB_0008b4e8;
    }
    _objc_opt_self(&_OBJC_CLASS___UIWindow);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_opt_isKindOfClass(lVar6);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((uVar2 & 1) != 0) {
      _WCMYBIBTopControllerByWindow(local_38);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_30 = uVar4;
      (*(code *)PTR__objc_release_00110458)(uVar3);
      goto LAB_0008b4e8;
    }
    _objc_msgSend_nextResponder(local_38,local_88);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    lVar6 = local_38;
    local_38 = lVar5;
    (*(code *)PTR__objc_release_00110458)(lVar6);
  } while( true );
}

