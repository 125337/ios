// openBaidu @ 01e2bed4

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::openBaidu(ID param_1,SEL param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineSuperFloatBaiduAPIViewController_026cf640;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSuperFloatBaiduAPIViewController_026cf640,PTR_s_new_0269d288);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_38 = puVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setModalPresentationStyle__0269d2a8,1);
  iVar1 = 2;
  ___isPlatformVersionAtLeast(2,0xf,0);
  if (iVar1 != 0) {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_sheetPresentationController_026af2b8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPrefersGrabberVisible__026af2c0,1);
    puVar2 = PTR__OBJC_CLASS___UISheetPresentationControllerDetent_026cf618;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UISheetPresentationControllerDetent_026cf618,
               PTR_s_mediumDetent_026af300);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDetents__026af2f0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_48,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

