// FUN_017a3630 @ 017a3630

void FUN_017a3630(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined1 local_61;
  char *local_60;
  char *local_58 [3];
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
    local_61 = 0;
    bVar2 = false;
    uVar1 = pcVar4 != (char *)0x0;
    local_58[0] = pcVar4;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = pcVar4 != (char *)0x0;
      local_61 = uVar1;
      local_60 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      uVar1 = local_61;
    }
    local_61 = uVar1;
    if (bVar2) {
      pcVar4 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      dVar5 = _dispatch_time(0,300000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_40;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_017b0b68;
      local_78 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = pcVar3;
      _dispatch_after(dVar5,puVar6,&local_90);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

