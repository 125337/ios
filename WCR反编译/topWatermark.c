// topWatermark @ 01fb39a8

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::topWatermark(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    lVar2 = 9;
    local_20 = param_2;
    local_18 = param_1;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_30 = 0;
    uVar4 = *(ulong *)(local_18 + (long)_selectedImagePath);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasPrefix__0269d320,local_28);
    if ((uVar4 & 1) == 0) {
      _objc_storeStrong(&local_30,*(undefined8 *)(local_18 + (long)_selectedImagePath));
    }
    else {
      uVar7 = *(undefined8 *)(local_18 + (long)_selectedImagePath);
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_substringFromIndex__0269d120,lVar3 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_screenshotWatermarkToppedList_026a78b8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (local_40 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_40;
      local_40 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_30);
    if (((ulong)puVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_insertObject_atIndex__0269eac0,local_30,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__n_v);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObject__0269d678,local_30);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Smn_v);
    }
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setScreenshotWatermarkToppedList_026c9e38);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadWatermarks_026c9d78);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_18 + (long)_collectionView),PTR_s_reloadData_0269e400);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

