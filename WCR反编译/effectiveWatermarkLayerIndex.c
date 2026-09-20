// effectiveWatermarkLayerIndex @ 01fa6144

/* Function Stack Size: 0x10 bytes */

long_long WCRefineWatermarkLibraryViewController::effectiveWatermarkLayerIndex
                    (ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_watermarkIndex) < 100) {
    local_28 = param_2;
    local_20 = param_1;
    _objc_getAssociatedObject
              (*(long *)(param_1 + (long)_watermarkIndex) + -100,param_1,
               &cf_WCRefineVideoWatermarkIndex);
    _objc_retainAutoreleasedReturnValue();
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_integerValue_026ca750);
    if ((long)param_1 < 1) {
      if ((*(long *)(local_20 + (long)_watermarkIndex) < 1) ||
         (3 < *(long *)(local_20 + (long)_watermarkIndex))) {
        local_18 = 0;
      }
      else {
        local_18 = *(ID *)(local_20 + (long)_watermarkIndex);
      }
    }
    else {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
      local_18 = IVar1;
    }
    _objc_storeStrong(&local_30,0);
  }
  else {
    local_18 = *(long *)(param_1 + (long)_watermarkIndex) - 100;
  }
  return local_18;
}

