// currentQRCodeBeautifyFileNamePreview @ 01f34014

/* Function Stack Size: 0x10 bytes */

ID WCRefineUIBeautifyViewController::currentQRCodeBeautifyFileNamePreview(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_availableQRCodeBeautifyFileNames_026c8708);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar2 = &cf__NO;
  if (IVar1 == 0) {
    pcVar2 = &cf__gNO;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar2;
}

