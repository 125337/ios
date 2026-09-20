// FUN_000f4020 @ 000f4020

void FUN_000f4020(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  dispatch_time_t dVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  ulong local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_38 = 1;
  }
  else {
    pcVar4 = &cf_WCRefineSearchSettingsViewController;
    _NSClassFromString();
    local_40 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_38 = 1;
    }
    else {
      _objc_alloc_init();
      puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      local_48 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      pcVar1 = local_48;
      if (((ulong)pcVar4 & 1) == 0) {
        local_38 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar3;
        if (uVar3 == 0) {
          local_38 = 1;
        }
        else {
          pcVar4 = &cf_PushViewController_animated_;
          _NSSelectorFromString();
          uVar3 = local_58;
          local_60 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4);
          if ((uVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_pushViewController_animated__0269d590,local_50,1);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60,local_50,1);
          }
          dVar5 = _dispatch_time(0,300000000);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_50;
          local_88 = PTR___NSConcreteStackBlock_02578660;
          local_80 = 0xc2000000;
          local_7c = 0;
          local_78 = FUN_000f4418;
          local_70 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = pcVar4;
          _dispatch_after(dVar5,puVar2,&local_88);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_68,0);
          local_38 = 0;
        }
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

