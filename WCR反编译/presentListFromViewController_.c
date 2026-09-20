// presentListFromViewController: @ 01135f50

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickReplyStore::presentListFromViewController_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  char *local_70;
  ulong local_58;
  char *local_50;
  char *local_48;
  ulong local_40;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR_WCRefineQuickReplyListViewController_026ced10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineQuickReplyListViewController_026ced10,PTR_s_new_0269d288);
    uVar2 = local_28;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isNavigationBarHidden_026a08a0),
       (uVar2 & 1) != 0)) {
      local_70 = "MMUINavigationController";
      _objc_getClass();
      if (local_70 == (char *)0x0) {
        local_70 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      }
      local_48 = local_70;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      local_50 = local_70;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setModalPresentationStyle__0269d2a8,1);
      uVar2 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar2;
      while( true ) {
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar2 == 0) break;
        uVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_58;
        local_58 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_pushViewController_animated__0269d590,local_38,1);
      local_2c = 1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

