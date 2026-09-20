// msgBannerUploadImageStatusText @ 01b95788

/* Function Stack Size: 0x10 bytes */

ID WCRefineMessageBannerBeautifyViewController::msgBannerUploadImageStatusText
             (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerCurrentFolderHasImageFi_026c0088);
  pcVar1 = &cf__X__W;
  if ((param_1 & 1) == 0) {
    pcVar1 = &cf_NO;
  }
  _objc_retainAutoreleaseReturnValue();
  return (ID)pcVar1;
}

