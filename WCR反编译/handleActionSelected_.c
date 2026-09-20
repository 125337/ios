// handleActionSelected: @ 000aa4c0

/* Function Stack Size: 0x18 bytes */

void WCRefineActionMenuViewController::handleActionSelected_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  long local_70;
  ID local_68;
  ID local_60;
  undefined4 local_54;
  long local_50 [3];
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = lVar1;
  if (lVar1 == 0) {
    local_54 = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainTabBarVC_0269e410);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_60 = IVar2;
    _objc_getAssociatedObject(local_28,&DAT_028c8088);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar3;
    if (IVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
      if ((IVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_dismissWithAnimated__0269e420,1);
        dVar4 = _dispatch_time(0,500000000);
        puVar5 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_60;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_000aa7c8;
        local_80 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        lVar1 = local_50[0];
        local_78 = IVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = lVar1;
        _dispatch_after(dVar4,puVar5,&local_98);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_78,0);
      }
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

