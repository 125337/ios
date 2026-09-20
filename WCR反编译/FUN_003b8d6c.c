// FUN_003b8d6c @ 003b8d6c

void FUN_003b8d6c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_30;
  uint local_24;
  undefined *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineActionMenuConfigViewController_026ce608;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,puVar1,1);
    _objc_storeStrong(&local_30,0);
  }
  else {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  local_24 = (uint)(lVar2 != 0);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

