// cancelSelectMode @ 01b609c0

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::cancelSelectMode(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + (long)_exportSelectMode) = 0;
  *(undefined1 *)(param_1 + (long)_selectSingleMode) = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_selectedExportRels),PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshNavButtons_026bf870);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_collectionView),PTR_s_reloadData_0269e400);
  return;
}

