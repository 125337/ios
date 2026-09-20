// topFrame @ 01d708ec

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::topFrame(ID param_1,SEL param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_48;
  undefined *local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    uVar1 = *(ulong *)(param_1 + (long)_selectedImagePath);
    local_20 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = 9;
    local_28 = uVar1;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_38 = 0;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,local_30);
    uVar1 = local_28;
    if ((uVar4 & 1) == 0) {
      _objc_storeStrong(&local_38,local_28);
    }
    else {
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,lVar3 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_38;
      local_38 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_screenshotFrameToppedList_026a74a8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (local_48 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_48;
      local_48 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    puVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_38);
    if (((ulong)puVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_insertObject_atIndex__0269eac0,local_38,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showToast__026b3a18,&cf__n_v);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObject__0269d678,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showToast__026b3a18,&cf__Smn_v);
    }
    puVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setScreenshotFrameToppedList__026c4a48);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadFrames_026b63c0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

