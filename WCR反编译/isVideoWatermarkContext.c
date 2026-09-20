// isVideoWatermarkContext @ 01fa608c

/* Function Stack Size: 0x10 bytes */

bool WCRefineWatermarkLibraryViewController::isVideoWatermarkContext(ID param_1,SEL param_2)

{
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  if (*(long *)(param_1 + (long)_watermarkIndex) < 100) {
    local_28 = param_2;
    local_20 = param_1;
    _objc_getAssociatedObject
              (*(long *)(param_1 + (long)_watermarkIndex) + -100,param_1,
               &cf_WCRefineVideoWatermarkIndex);
    _objc_retainAutoreleasedReturnValue();
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_integerValue_026ca750);
    local_11 = 0 < (long)param_1;
    _objc_storeStrong(&local_30,0);
  }
  else {
    local_11 = 1;
  }
  return local_11 & 1;
}

