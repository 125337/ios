// FUN_008cf174 @ 008cf174

void FUN_008cf174(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_48;
  long local_40 [3];
  undefined *local_28;
  undefined4 local_1c;
  long local_18;
  
  FUN_008cb618();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  if (param_1 == 0) {
    local_1c = 1;
  }
  else {
    puVar1 = PTR_WCRefineVoicePackSettingsViewController_026cea18;
    _objc_alloc_init();
    lVar2 = local_18;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar2;
    if (lVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_initWithRootViewController__0269d2a0,local_28);
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar2,PTR_s_pushViewController_animated__0269d590,local_28,1);
    }
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

