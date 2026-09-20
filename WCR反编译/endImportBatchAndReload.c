// endImportBatchAndReload @ 01b5f974

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::endImportBatchAndReload(ID param_1,SEL param_2)

{
  if ((*(byte *)(param_1 + (long)_importBatchOpen) & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_endChangeBatch_026ae360);
    *(undefined1 *)(param_1 + (long)_importBatchOpen) = 0;
  }
  *(undefined1 *)(param_1 + (long)_suppressReloadForImport) = 0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadItems_026ae4d8);
  return;
}

