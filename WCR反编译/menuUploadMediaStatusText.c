// menuUploadMediaStatusText @ 01b874c0

/* Function Stack Size: 0x10 bytes */

ID WCRefineMenuBeautifyViewController::menuUploadMediaStatusText(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentMenuFolderHasMediaFile_026bfda8);
  pcVar1 = &cf__X__W;
  if ((param_1 & 1) == 0) {
    pcVar1 = &cf_NO;
  }
  _objc_retainAutoreleaseReturnValue();
  return (ID)pcVar1;
}

