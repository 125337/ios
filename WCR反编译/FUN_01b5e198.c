// FUN_01b5e198 @ 01b5e198

void FUN_01b5e198(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_sheetPresentationController_026af2b8)
  ;
  if ((uVar2 & 1) == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sheetPresentationController_026af2b8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    if (uVar2 == 0) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setPrefersGrabberVisible__026af2c0,1);
      iVar1 = 2;
      ___isPlatformVersionAtLeast(2,0xf,0);
      if (iVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x403e000000000000,local_38,PTR_s_setPreferredCornerRadius__026b68c8);
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setPrefersScrollingExpandsWhenSc_026af2d0);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setPrefersScrollingExpandsWhenSc_026af2d0,0);
      }
      pcVar3 = &cf_UISheetPresentationControllerDetent;
      _NSClassFromString();
      local_40 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,
                 PTR_s_customDetentWithIdentifier_resol_026af2d8);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_mediumDetent_026af300);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mediumDetent_026af300);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_20 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_20,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDetents__026af2f0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setSelectedDetentIdentifier__026af2f8,&cf_medium);
        }
        local_2c = 0;
      }
      else {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_customDetentWithIdentifier_resol_026af2d8,&cf_wcr_le_half,
                   &PTR___NSConcreteGlobalBlock_0258b468);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_48 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,pcVar3)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_40;
        local_50 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_largeDetent_026af2e8);
        puVar4 = local_50;
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_largeDetent_026af2e8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDetents__026af2f0,local_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setSelectedDetentIdentifier__026af2f8,&cf_wcr_le_half);
        local_2c = 1;
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

