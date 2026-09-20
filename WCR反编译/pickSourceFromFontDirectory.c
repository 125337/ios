// pickSourceFromFontDirectory @ 019f1f38

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::pickSourceFromFontDirectory(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID local_a8;
  undefined *local_90 [3];
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_availableFontPaths_026bb370);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_W_SOvU__Nzz);
    local_2c = 1;
  }
  else {
    puVar2 = PTR_WCRefineFontConvertLibraryPickerController_026cf240;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setFontPaths__026bb378,local_28);
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    IVar1 = local_18;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_librarySourcePaths_026bb208);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = IVar1;
    if (IVar1 == 0) {
      local_a8 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0,local_a8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_intersectSet__026a2c18,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectedPaths__026bb380,local_48);
    _objc_initWeak(auStack_50,local_18);
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_019f22c8;
    local_60 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_58,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOnDone__026bb388,&local_78);
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_38);
    local_90[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_90[0],1,0);
    _objc_storeStrong(local_90);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

