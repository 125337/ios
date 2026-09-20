// FUN_003ab8cc @ 003ab8cc

void FUN_003ab8cc(undefined8 param_1)

{
  char *pcVar1;
  char *local_50;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined4 local_24;
  char *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = "WCRefineGroupManagementViewController";
  _objc_getClass();
  local_20 = pcVar1;
  if ((local_18 == 0) || (pcVar1 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R__tubNS_u);
    local_24 = 1;
  }
  else {
    _objc_alloc_init();
    local_50 = "MMUINavigationController";
    local_30 = pcVar1;
    _objc_getClass();
    if (local_50 == (char *)0x0) {
      local_50 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_38 = local_50;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

