// wcr_presentPicker:from: @ 010a58c4

/* Function Stack Size: 0x20 bytes */

void WCRefineMessageRepositoryPicker::wcr_presentPicker_from_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  char *local_80;
  uint local_5c;
  long local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  byte local_39;
  long local_38;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_5c = 0;
  local_38 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_isNavigationBarHidden_026a08a0);
    local_5c = (uint)lVar1;
  }
  local_39 = (byte)local_5c & 1;
  if ((local_38 == 0) || ((local_5c & 1) != 0)) {
    local_80 = "MMUINavigationController";
    _objc_getClass();
    if (local_80 == (char *)0x0) {
      local_80 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_48 = local_80;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_50 = local_80;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setModalPresentationStyle__0269d2a8,1);
    lVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar1;
    while( true ) {
      lVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 == 0) break;
      lVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_58;
      local_58 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_40 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_pushViewController_animated__0269d590,local_28,1);
    local_40 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

