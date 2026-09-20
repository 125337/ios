// FUN_017a29b0 @ 017a29b0

void FUN_017a29b0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  cfstringStruct *local_50 [3];
  char *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = &cf_WCRefineSearchSettingsViewController;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  if (pcVar1 != (cfstringStruct *)0x0) {
    local_28 = pcVar1;
    _objc_alloc_init();
    local_30 = pcVar1;
    if (DAT_028e41d8 == (char *)0x0) {
      pcVar2 = "WCRefineHelper";
      _objc_getClass();
      DAT_028e41d8 = pcVar2;
    }
    pcVar2 = DAT_028e41d8;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    if ((pcVar2 != (char *)0x0) && (local_30 != (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      dVar3 = _dispatch_time(0,300000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_017af788;
      local_58 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_50[0] = pcVar1;
      _dispatch_after(dVar3,puVar4,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

