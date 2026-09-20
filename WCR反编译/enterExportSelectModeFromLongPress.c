// enterExportSelectModeFromLongPress @ 01fb1a5c

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::enterExportSelectModeFromLongPress
               (ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
      uVar6 = *(undefined8 *)(local_18 + (long)_selectedImagePath);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_substringFromIndex__0269d120,lVar2 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_30 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    *(undefined1 *)(local_18 + (long)_isExportSelectMode) = 1;
    if (*(long *)(local_18 + (long)_selectedWatermarksForExport) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(local_18 + (long)_selectedWatermarksForExport);
      *(undefined8 *)(local_18 + (long)_selectedWatermarksForExport) = puVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_18 + (long)_selectedWatermarksForExport),
               PTR_s_removeAllObjects_0269d508);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_18 + (long)_selectedWatermarksForExport),
               PTR_s_addObject__0269d180,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateNavigationBar_026c9e20);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_18 + (long)_collectionView),PTR_s_reloadData_0269e400);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateTitle_026b63c8);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

