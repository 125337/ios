// WCRefine_openPluginSearchSettings @ 004cce24

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameSearchButton::WCRefine_openPluginSearchSettings(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  ID local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = &cf_WCRefineSearchSettingsViewController;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  if (pcVar1 != (cfstringStruct *)0x0) {
    local_28 = pcVar1;
    _objc_alloc_init();
    local_30 = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setHidesBottomBarWhenPushed__0269db60);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      }
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_38 = IVar2;
      if (IVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_pushViewController_animated__0269d590,local_30,1);
        dVar3 = _dispatch_time(0,300000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_30;
        local_60 = PTR___NSConcreteStackBlock_02578660;
        local_58 = 0xc2000000;
        local_54 = 0;
        local_50 = FUN_004ccffc;
        local_48 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = pcVar1;
        _dispatch_after(dVar3,puVar4,&local_60);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_40,0);
      }
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

