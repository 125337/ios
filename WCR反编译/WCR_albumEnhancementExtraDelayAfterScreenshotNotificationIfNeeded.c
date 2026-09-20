// WCR_albumEnhancementExtraDelayAfterScreenshotNotificationIfNeeded @ 00709ad8

/* Function Stack Size: 0x10 bytes */

double WCRefineScreenshotFrameProcessor::
       WCR_albumEnhancementExtraDelayAfterScreenshotNotificationIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  double local_78;
  double local_18;
  
  if (DAT_028cc328 == 0) {
    local_18 = 0.0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((in_d0 < 0.0) || (12.0 < in_d0)) {
      local_18 = 0.0;
    }
    else {
      local_78 = 1.65 - in_d0;
      if (local_78 <= 0.0) {
        local_78 = 0.0;
      }
      local_18 = local_78;
    }
  }
  return local_18;
}

