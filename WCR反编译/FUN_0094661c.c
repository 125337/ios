// FUN_0094661c @ 0094661c

void FUN_0094661c(double param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_30;
  double local_28;
  double local_20;
  cfstringStruct *local_18;
  
  local_20 = param_1;
  if (0.0 < param_1) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    param_1 = param_1 - local_20;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_28 = param_1;
    if (param_1 < 0.0) {
      local_28 = 0.0;
    }
    if (60.0 <= local_28) {
      if (3600.0 <= local_28) {
        if (86400.0 <= local_28) {
          if (604800.0 <= local_28) {
            pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
            _objc_alloc_init();
            local_30 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setDateFormat__0269d1c8,&cf_MM_dd);
            pcVar2 = local_30;
            puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR__OBJC_CLASS___NSDate_026cdf88,
                       PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringFromDate__0269d1d8);
            _objc_retainAutoreleasedReturnValue();
            local_18 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            _objc_storeStrong(&local_30,0);
          }
          else {
            pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
            _objc_retainAutoreleasedReturnValue();
            local_18 = pcVar2;
          }
        }
        else {
          pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
        }
      }
      else {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_RR;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

