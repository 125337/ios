// FUN_000bede0 @ 000bede0

byte FUN_000bede0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = &cf_WCRefineSearchSettingsViewController;
  _NSClassFromString();
  local_38 = pcVar2;
  if ((pcVar2 == (cfstringStruct *)0x0) || (local_30 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    pcVar1 = local_50;
    if (((ulong)pcVar2 & 1) == 0) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      pcVar2 = &cf_PushViewController_animated_;
      _NSSelectorFromString();
      uVar4 = local_30;
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_pushViewController_animated__0269d590,local_58,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_60,local_58,1);
      }
      dVar5 = _dispatch_time(0,300000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_000bf248;
      local_70 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = pcVar2;
      _dispatch_after(dVar5,puVar3,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_21 = 1;
      local_48 = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

