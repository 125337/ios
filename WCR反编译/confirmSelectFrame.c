// confirmSelectFrame @ 01d71b0c

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::confirmSelectFrame(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint local_7c;
  undefined *local_58;
  byte local_49;
  ID local_48;
  byte local_39;
  ID local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    lVar1 = 9;
    local_20 = param_2;
    local_18 = param_1;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    uVar3 = *(undefined8 *)(local_18 + (long)_selectedImagePath);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(ulong *)(local_18 + (long)_selectedImagePath);
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasPrefix__0269d320,local_28);
    if ((uVar4 & 1) != 0) {
      uVar7 = *(undefined8 *)(local_18 + (long)_selectedImagePath);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_substringFromIndex__0269d120,lVar2 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_30 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isSelectMode_026b6440);
    local_39 = 0;
    local_49 = 0;
    local_7c = 0;
    if ((IVar5 & 1) != 0) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_7c = 0;
      local_38 = IVar5;
      if (IVar5 != 0) {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_48 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_7c = (uint)IVar5;
      }
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if ((local_7c & 1) == 0) {
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setScreenshotFrameTemplate__026b5a18,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showToast__026b3a18,&cf__b);
      _objc_storeStrong(&local_58,0);
    }
    else {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

