// FUN_017a65f0 @ 017a65f0

void FUN_017a65f0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  double in_d3;
  char *local_60;
  char *local_58 [3];
  undefined *local_40;
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = &cf_WCTimeLineViewController;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  if (pcVar1 != (cfstringStruct *)0x0) {
    local_28 = pcVar1;
    _objc_alloc_init();
    local_30 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_34 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_30);
      local_40 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        pcVar3 = "MMPageSheetConfig";
        _objc_getClass();
        _objc_alloc_init();
        local_58[0] = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setEnableDragToClose__026aa740,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
        pcVar3 = "MMPageSheetAdapter";
        _objc_getClass();
        _objc_alloc_init();
        local_60 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setPageSheetConfig__026aa758,local_58[0])
        ;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setHostViewController__026a58c8,local_40);
        puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(in_d3 * 0.7,local_60,PTR_s_setContentHeight__026aa760)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_showWithAnimated__0269e5a8,1);
        FUN_017afbb8(local_40);
        _objc_storeStrong(&local_60);
        _objc_storeStrong(local_58,0);
      }
      local_34 = (uint)(puVar2 == (undefined *)0x0);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

