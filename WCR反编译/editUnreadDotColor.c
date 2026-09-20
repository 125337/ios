// editUnreadDotColor @ 01cb6c48

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::editUnreadDotColor(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  _objc_initWeak(auStack_30,local_18);
  puVar1 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_unreadDotColorLight_026af0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_unreadDotColorDark_026af0d8);
  _objc_retainAutoreleasedReturnValue();
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01cb6eec;
  local_58 = &DAT_0258bb10;
  _objc_copyWeak(auStack_50,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,puVar2,puVar3,&local_70);
  local_38 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTitle__0269cef0,&cf_Wpr);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithRootViewController__0269d2a0,local_38);
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,puVar1,1,0);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_38,0);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

