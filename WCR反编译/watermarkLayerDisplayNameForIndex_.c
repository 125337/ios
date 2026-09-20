// watermarkLayerDisplayNameForIndex: @ 01fa6280

/* Function Stack Size: 0x18 bytes */

ID WCRefineWatermarkLibraryViewController::watermarkLayerDisplayNameForIndex_
             (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_USB_;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_SB_;
  }
  else if (param_3 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_NB_;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_4lpS;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

