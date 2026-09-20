// openChatSinkHistory: @ 01b46958

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::openChatSinkHistory_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_78 [3];
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineChatSinkHistoryViewController_026cf3d8;
  _objc_alloc_init();
  local_30 = puVar1;
  _objc_initWeak(auStack_38,local_18);
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01b46b3c;
  local_48 = &DAT_0257be28;
  _objc_copyWeak(auStack_40,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setApplyHistoryBlock__026bf488,&local_60);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithRootViewController__0269d2a0,local_30);
  local_78[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8,2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_78[0],1,0);
  _objc_storeStrong(local_78);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

