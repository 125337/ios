// imagePreparedForExport @ 01672864

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::imagePreparedForExport(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureCropSelection_026b24b8);
  if ((IVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_croppedImage_026b2310);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

