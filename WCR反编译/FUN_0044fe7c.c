// FUN_0044fe7c @ 0044fe7c

void FUN_0044fe7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_4c;
  undefined *local_48;
  undefined *local_40 [3];
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineEmoticonFunctionViewController_026ce6c0;
  local_20 = param_1;
  local_18 = param_1;
  _objc_alloc_init();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setScrollToLocalGroupSection__026a3c68,1);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_40[0];
  local_48 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) != 0) {
      _objc_storeStrong(&local_48,local_40[0]);
    }
  }
  if (local_48 != (undefined *)0x0) {
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,
               PTR_s_PushViewController_animated__0269cd40);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_PushViewController_animated__0269cd40,local_28,1);
      local_4c = 1;
      goto LAB_00450134;
    }
  }
  if (local_48 == (undefined *)0x0) {
    if (local_40[0] != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_initWithRootViewController__0269d2a0,local_28);
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_presentViewController_animated_c_0269d2b0,puVar1,1,0);
      _objc_storeStrong(&local_58,0);
    }
    local_4c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_pushViewController_animated__0269d590,local_28,1);
    local_4c = 1;
  }
LAB_00450134:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

