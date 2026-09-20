// ensureFontBasePathExists @ 019d6fbc

/* Function Stack Size: 0x10 bytes */

void WCRefineFontBeautifyViewController::ensureFontBasePathExists(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fontBasePath_026baec0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,param_1,1,0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

