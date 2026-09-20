// editGlyphDrawingRules @ 019f4048

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::editGlyphDrawingRules(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [24];
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineGlyphDrawingEditorViewController_026cf248;
  _objc_alloc_init();
  local_28 = puVar1;
  _objc_initWeak(auStack_30,local_18);
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_019f4358;
  local_40 = &DAT_0258a078;
  _objc_copyWeak(auStack_38,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnSave__026b5960,&local_58);
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_019f479c;
  local_78 = &DAT_0257be28;
  _objc_copyWeak(auStack_70,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnClearAll__026bb3b0,&local_90);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_initWithRootViewController__0269d2a0,local_28);
    local_98 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_98,1,0);
    _objc_storeStrong(&local_98,0);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

