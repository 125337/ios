// openPluginAggregateSearchFromAvatar: @ 017874b0

/* Function Stack Size: 0x18 bytes */

void WCPluginsViewControllerBehavior::openPluginAggregateSearchFromAvatar_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 3) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      puVar2 = PTR_WCRefineSearchSettingsViewController_026cefb8;
      _objc_alloc_init();
      local_38 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pushController__026b46d8,local_38);
      dVar4 = _dispatch_time(0,300000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_38;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_017876d0;
      local_48 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = puVar3;
      _dispatch_after(dVar4,puVar2,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

