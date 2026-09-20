// WCRefine_onSearchPluginTapped @ 004c4a40

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameMenuSearchItem::WCRefine_onSearchPluginTapped(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  ID local_48;
  cfstringStruct *local_40 [3];
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
    local_40[0] = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setHidesBottomBarWhenPushed__0269db60);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40[0],PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      }
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_valueForKey__0269d128,&cf_navigationController);
      _objc_retainAutoreleasedReturnValue();
      local_48 = IVar2;
      if (IVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_pushViewController_animated__0269d590,local_40[0],1);
        dVar3 = _dispatch_time(0,300000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_40[0];
        local_70 = PTR___NSConcreteStackBlock_02578660;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = FUN_004c4cb4;
        local_58 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = pcVar1;
        _dispatch_after(dVar3,puVar4,&local_70);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(local_40,0);
  }
  return;
}

