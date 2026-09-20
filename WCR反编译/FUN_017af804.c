// FUN_017af804 @ 017af804

void FUN_017af804(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  char *pcVar2;
  double dVar3;
  char *local_50;
  char *local_48 [3];
  undefined *local_30;
  undefined4 local_24;
  double local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  local_20 = param_1;
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_initWithRootViewController__0269d2a0,local_18);
    local_30 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_24 = 1;
    }
    else {
      pcVar2 = "MMPageSheetConfig";
      _objc_getClass();
      _objc_alloc_init();
      local_48[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setEnableDragToClose__026aa740,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
      pcVar2 = "MMPageSheetAdapter";
      _objc_getClass();
      _objc_alloc_init();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setPageSheetConfig__026aa758,local_48[0]);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHostViewController__026a58c8,local_30)
      ;
      if ((local_20 <= 0.0) || (dVar3 = local_20, 1.0 <= local_20)) {
        dVar3 = DAT_023242c8;
      }
      puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (param_4 * dVar3,local_50,PTR_s_setContentHeight__026aa760);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showWithAnimated__0269e5a8,1);
      FUN_017afbb8(local_30);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(local_48,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

