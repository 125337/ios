// presentSvgColorSchemeHistoryWithMode: @ 01f36400

/* Function Stack Size: 0x18 bytes */

void WCRefineUIBeautifyViewController::presentSvgColorSchemeHistoryWithMode_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineSvgColorSchemeHistoryViewController_026cf770;
  _objc_alloc_init();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setMode__026ac3b0,local_28);
  _objc_initWeak(auStack_38,local_18);
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01f36680;
  local_48 = &DAT_0258bb10;
  _objc_copyWeak(auStack_40,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setApplyFixedSchemeBlock__026c8950,&local_60)
  ;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_01f36760;
  local_80 = &DAT_0258cc30;
  _objc_copyWeak(auStack_78,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setApplyRandomSchemeBlock__026c8958,&local_98);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithRootViewController__0269d2a0,local_30);
  local_a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8,2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_a0,1,0);
  _objc_storeStrong(&local_a0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  return;
}

