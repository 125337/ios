// enterExportSelectMode @ 01fb1944

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::enterExportSelectMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + (long)_isExportSelectMode) = 1;
  if (*(long *)(param_1 + (long)_selectedWatermarksForExport) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + (long)_selectedWatermarksForExport);
    *(undefined8 *)(param_1 + (long)_selectedWatermarksForExport) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_selectedWatermarksForExport),
             PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateNavigationBar_026c9e20);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_collectionView),PTR_s_reloadData_0269e400);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateTitle_026b63c8);
  return;
}

