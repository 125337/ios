// cancelExportSelectMode @ 01fb1d04

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::cancelExportSelectMode(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + (long)_isExportSelectMode) = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_selectedWatermarksForExport),
             PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateNavigationBar_026c9e20);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_collectionView),PTR_s_reloadData_0269e400);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateTitle_026b63c8);
  return;
}

