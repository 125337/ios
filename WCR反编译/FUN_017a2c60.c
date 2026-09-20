// FUN_017a2c60 @ 017a2c60

void FUN_017a2c60(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  char *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar2 = &cf_WCFinderLiveHomePageViewController;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  if (pcVar2 != (cfstringStruct *)0x0) {
    local_30 = (cfstringStruct *)0x0;
    pcVar3 = &cf_initWithParams_;
    local_28 = pcVar2;
    _NSSelectorFromString();
    pcVar2 = local_28;
    local_38 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_instancesRespondToSelector__0269da90,pcVar3);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = &cf_WCFinderLiveHomePageInitialParams;
      _NSClassFromString();
      local_58 = (cfstringStruct *)0x0;
      local_50 = pcVar2;
      if (pcVar2 != (cfstringStruct *)0x0) {
        _objc_alloc_init();
        pcVar3 = local_58;
        local_58 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if (local_58 != (cfstringStruct *)0x0) {
        pcVar3 = local_28;
        _objc_alloc();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_performSelector_withObject__026ca7c0,local_38,local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_30;
        local_30 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      _objc_storeStrong(&local_58,0);
    }
    if (local_30 == (cfstringStruct *)0x0) {
      pcVar3 = local_28;
      _objc_alloc_init();
      pcVar2 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_30 == (cfstringStruct *)0x0) {
      local_5c = 1;
    }
    else {
      if (DAT_028e41d8 == (char *)0x0) {
        pcVar5 = "WCRefineHelper";
        _objc_getClass();
        DAT_028e41d8 = pcVar5;
      }
      pcVar5 = DAT_028e41d8;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      local_68 = pcVar5;
      if (pcVar5 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = pcVar5 != (char *)0x0;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      if (bVar1) {
        pcVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      _objc_storeStrong(&local_68,0);
      local_5c = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

