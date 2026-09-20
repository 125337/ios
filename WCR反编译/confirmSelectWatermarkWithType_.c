// confirmSelectWatermarkWithType: @ 01fac540

/* Function Stack Size: 0x14 bytes */

void WCRefineWatermarkLibraryViewController::confirmSelectWatermarkWithType_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ID IVar5;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = *(byte *)(param_1 + (long)_pendingNoneItem) & 1;
  if ((local_22 != 0) || (*(long *)(param_1 + (long)_selectedImagePath) != 0)) {
    if (local_22 == 0) {
      local_40 = *(cfstringStruct **)(param_1 + (long)_selectedImagePath);
    }
    else {
      local_40 = &::cf___;
    }
    local_20 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_18;
    local_30 = local_40;
    *(undefined1 *)(local_18 + (long)_pendingNoneItem) = 0;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar5,&cf_WCRefineWatermarkIsDay,puVar1,1);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_18 + (long)_delegate;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = local_18 + (long)_delegate;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar3 & 1) == 0) {
        uVar2 = local_18 + (long)_delegate;
        _objc_loadWeakRetained();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (((uVar3 & 1) != 0) && ((local_22 & 1) == 0)) {
          puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                     local_30);
          _objc_retainAutoreleasedReturnValue();
          local_38 = puVar1;
          if (puVar1 != (undefined *)0x0) {
            lVar4 = local_18 + (long)_delegate;
            _objc_loadWeakRetained();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
          _objc_storeStrong(&local_38,0);
        }
      }
      else {
        lVar4 = local_18 + (long)_delegate;
        _objc_loadWeakRetained();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
    }
    else {
      lVar4 = local_18 + (long)_delegate;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

