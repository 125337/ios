// FUN_017a7578 @ 017a7578

void FUN_017a7578(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  undefined1 local_69;
  char *local_68;
  char *local_60 [3];
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  pcVar3 = &cf_WCRefineAssistFunctionViewController;
  local_30 = param_2;
  local_28 = param_1;
  _NSClassFromString();
  if (pcVar3 != (cfstringStruct *)0x0) {
    local_38 = pcVar3;
    _objc_alloc_init();
    local_40 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      if (DAT_028e41d8 == (char *)0x0) {
        pcVar4 = "WCRefineHelper";
        _objc_getClass();
        DAT_028e41d8 = pcVar4;
      }
      pcVar4 = DAT_028e41d8;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 0;
      bVar2 = false;
      uVar1 = pcVar4 != (char *)0x0;
      local_60[0] = pcVar4;
      if ((bool)uVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = pcVar4 != (char *)0x0;
        local_69 = uVar1;
        local_68 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        uVar1 = local_69;
      }
      local_69 = uVar1;
      if (bVar2) {
        pcVar4 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        dVar5 = _dispatch_time(0,300000000);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_40;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_017b0d5c;
        local_80 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = pcVar3;
        _dispatch_after(dVar5,puVar6,&local_98);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(local_60,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  return;
}

