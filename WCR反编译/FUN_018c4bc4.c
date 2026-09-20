// FUN_018c4bc4 @ 018c4bc4

void FUN_018c4bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ulong local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_30;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_sheetPresentationController_026af2b8)
  ;
  if ((uVar1 & 1) == 0) {
    local_44 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sheetPresentationController_026af2b8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setPrefersGrabberVisible__026af2c0,1);
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,
               PTR_s_setPrefersScrollingExpandsWhenSc_026af2d0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setPrefersScrollingExpandsWhenSc_026af2d0,0);
    }
    pcVar2 = &cf_UISheetPresentationControllerDetent;
    _NSClassFromString();
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_customDetentWithIdentifier_resol_026af2d8);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_mediumDetent_026af300);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_mediumDetent_026af300);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_28 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_28,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDetents__026af2f0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setSelectedDetentIdentifier__026af2f8,&cf_medium);
      }
    }
    else {
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc0000000;
      local_7c = 0;
      local_78 = FUN_018dfdf4;
      local_70 = &DAT_0258a0a8;
      local_68 = local_40;
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_customDetentWithIdentifier_resol_026af2d8,local_38,&local_88);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_60 = pcVar2;
      local_20 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDetents__026af2f0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setSelectedDetentIdentifier__026af2f8,local_38);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

