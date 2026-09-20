// _WCRefinePresentMomentsScheduledTasks @ 00583f8c

void _WCRefinePresentMomentsScheduledTasks(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  char *local_88;
  char *local_58;
  char *local_50;
  cfstringStruct *local_48;
  ulong local_40 [3];
  undefined *local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    puVar1 = PTR_WCRMomentsScheduledTaskListViewController_026ce7a0;
    _objc_alloc_init();
    uVar2 = local_18;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_PushViewController_animated_;
    local_40[0] = uVar2;
    _NSSelectorFromString();
    uVar2 = local_40[0];
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar2 & 1) == 0) {
      if (local_40[0] == 0) {
        local_88 = "MMUINavigationController";
        _objc_getClass();
        if (local_88 == (char *)0x0) {
          local_88 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        }
        local_50 = local_88;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_initWithRootViewController__0269d2a0,local_28);
        local_58 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_88,1,0);
        _objc_storeStrong(&local_58,0);
        local_1c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40[0],PTR_s_pushViewController_animated__0269d590,local_28,1);
        local_1c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],local_48,local_28,1);
      local_1c = 1;
    }
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

