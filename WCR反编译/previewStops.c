// previewStops @ 01a87c64

/* Function Stack Size: 0x10 bytes */

ID WCRefineGradientPalettePickerViewController::previewStops(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewDark_026bd8d0);
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lightStops_026acc90);
    _objc_retainAutoreleasedReturnValue();
    local_50 = param_1;
    local_40 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_darkStops_026acc88);
    _objc_retainAutoreleasedReturnValue();
    local_50 = param_1;
    local_30 = param_1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_autoreleaseReturnValue();
  return local_50;
}

