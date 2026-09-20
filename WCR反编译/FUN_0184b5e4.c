// FUN_0184b5e4 @ 0184b5e4

void FUN_0184b5e4(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined **local_50;
  cfstringStruct *local_48;
  long local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_sheetPresentationController_026af2b8)
  ;
  if ((uVar1 & 1) == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetPresentationController_026af2b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_UISheetPresentationControllerDetent;
    local_28 = uVar1;
    _NSClassFromString();
    local_30 = pcVar2;
    if ((local_28 == 0) || (pcVar2 == (cfstringStruct *)0x0)) {
      local_1c = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_40 = 0;
      pcVar2 = &cf_customDetentWithIdentifier_resolver_;
      local_38 = puVar3;
      _NSSelectorFromString();
      pcVar4 = local_30;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)pcVar4 & 1) != 0) {
        ppuVar5 = &PTR___NSConcreteGlobalBlock_025899d8;
        _objc_retainBlock();
        pcVar4 = local_30;
        pcVar2 = local_48;
        local_50 = ppuVar5;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar2,&cf_wcr_avatar_scale_filter_half);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(ppuVar5);
        if (local_58 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_58);
          _objc_storeStrong(&local_40,&cf_wcr_avatar_scale_filter_half);
        }
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_50,0);
      }
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if ((puVar3 == (undefined *)0x0) &&
         (pcVar2 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_mediumDetent_026af300),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mediumDetent_026af300);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar2;
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,pcVar2);
          _objc_storeStrong(&local_40,&cf_medium);
        }
        _objc_storeStrong(&local_60,0);
      }
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if ((puVar3 != (undefined *)0x0) &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setDetents__026af2f0),
         (uVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDetents__026af2f0,local_38);
      }
      lVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if ((lVar6 != 0) &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_respondsToSelector__026ca818,
                    PTR_s_setSelectedDetentIdentifier__026af2f8), (uVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setSelectedDetentIdentifier__026af2f8,local_40);
      }
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setPrefersGrabberVisible__026af2c0);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPrefersGrabberVisible__026af2c0,1);
      }
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setPreferredCornerRadius__026b68c8);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4030000000000000,local_28,PTR_s_setPreferredCornerRadius__026b68c8);
      }
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setPrefersScrollingExpandsWhenSc_026af2d0);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setPrefersScrollingExpandsWhenSc_026af2d0,0);
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

