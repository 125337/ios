// beginImportBatch @ 01b5f8e4

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::beginImportBatch(ID param_1,SEL param_2)

{
  if ((*(byte *)(param_1 + (long)_importBatchOpen) & 1) == 0) {
    *(undefined1 *)(param_1 + (long)_importBatchOpen) = 1;
    *(undefined1 *)(param_1 + (long)_suppressReloadForImport) = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_beginChangeBatch_026ae358);
  }
  return;
}

