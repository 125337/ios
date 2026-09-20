// updateTitle @ 01fa5ed4

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::updateTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((*(byte *)(param_1 + (long)_isExportSelectMode) & 1) == 0) {
    if (*(long *)(param_1 + (long)_displayPaths) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + (long)_displayPaths),PTR_s_count_0269cfe0);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_4lpS__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTitle__0269cef0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + (long)_selectedWatermarksForExport),PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__b_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTitle__0269cef0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

