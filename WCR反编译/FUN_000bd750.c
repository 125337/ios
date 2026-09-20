// FUN_000bd750 @ 000bd750

void FUN_000bd750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48 [3];
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    lVar2 = local_18;
    if (local_20 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = lVar2;
      while( true ) {
        lVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (lVar2 == 0) break;
        lVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_48[0];
        local_48[0] = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      if (local_48[0] == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRelSb);
        local_2c = 1;
      }
      else {
        pcVar4 = &cf_MMUINavigationController;
        _NSClassFromString();
        puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_50 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isSubclassOfClass__0269e590,puVar5);
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          local_50 = pcVar4;
        }
        pcVar4 = local_50;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_initWithRootViewController__0269d2a0,local_28);
        local_58 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setModalPresentationStyle__0269d2a8,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_presentViewController_animated_c_0269d2b0,local_58,1,0);
        _objc_storeStrong(&local_58,0);
        local_2c = 0;
      }
      _objc_storeStrong(local_48,0);
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PushViewController_animated__0269cd40);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_pushViewController_animated__0269d590,local_28,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_PushViewController_animated__0269cd40,local_28,1);
      }
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

