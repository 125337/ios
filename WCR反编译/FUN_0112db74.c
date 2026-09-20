// FUN_0112db74 @ 0112db74

void FUN_0112db74(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined **ppuVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
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
    local_28 = uVar1;
    if (uVar1 == 0) {
      local_1c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setPrefersGrabberVisible__026af2c0,1);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setPrefersEdgeAttachedInCompactH_026af2c8);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setPrefersEdgeAttachedInCompactH_026af2c8,1);
      }
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setPrefersScrollingExpandsWhenSc_026af2d0);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setPrefersScrollingExpandsWhenSc_026af2d0,1);
      }
      pcVar2 = &cf_UISheetPresentationControllerDetent;
      _NSClassFromString();
      local_30 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_customDetentWithIdentifier_resol_026af2d8);
      pcVar4 = local_30;
      puVar5 = PTR_s_customDetentWithIdentifier_resol_026af2d8;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_mediumDetent_026af300);
        if (((ulong)pcVar2 & 1) != 0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_30;
          local_50 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mediumDetent_026af300);
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar2;
          if (pcVar2 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,pcVar2);
          }
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_largeDetent_026af2e8);
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_largeDetent_026af2e8);
            _objc_retainAutoreleasedReturnValue();
            local_60 = pcVar2;
            if (pcVar2 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,pcVar2);
            }
            _objc_storeStrong(&local_60,0);
          }
          puVar5 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
          if (puVar5 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDetents__026af2f0,local_50);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setSelectedDetentIdentifier__026af2f8,&cf_medium);
          }
          _objc_storeStrong(&local_58);
          _objc_storeStrong(&local_50,0);
        }
      }
      else {
        ppuVar3 = &PTR___NSConcreteGlobalBlock_02585920;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar5,&cf_wcr_quickRemark_official);
        _objc_retainAutoreleasedReturnValue();
        local_38 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(ppuVar3);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_40 = puVar5;
        if (local_38 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180,local_38);
        }
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_largeDetent_026af2e8);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_largeDetent_026af2e8);
          _objc_retainAutoreleasedReturnValue();
          local_48 = pcVar2;
          if (pcVar2 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,pcVar2);
          }
          _objc_storeStrong(&local_48,0);
        }
        puVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
        if (puVar5 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDetents__026af2f0,local_40);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setSelectedDetentIdentifier__026af2f8,DAT_02585878);
        }
        _objc_storeStrong(&local_40);
        _objc_storeStrong(&local_38,0);
      }
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

