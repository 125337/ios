// formatDate: @ 01bf6dc0

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineMomentsDraftListViewController::formatDate_
          (WCRefineMomentsDraftListViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  double in_d0;
  cfstringStruct *local_48 [2];
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (60.0 <= in_d0) {
      if (3600.0 <= in_d0) {
        if (86400.0 <= in_d0) {
          if (604800.0 <= in_d0) {
            pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
            _objc_alloc_init();
            local_48[0] = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm);
            pcVar2 = local_48[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48[0],PTR_s_stringFromDate__0269d1d8,local_30);
            _objc_retainAutoreleasedReturnValue();
            local_34 = 1;
            local_18 = pcVar2;
            _objc_storeStrong(local_48,0);
          }
          else {
            pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_34 = 1;
            local_18 = pcVar2;
          }
        }
        else {
          pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          local_34 = 1;
          local_18 = pcVar2;
        }
      }
      else {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_34 = 1;
        local_18 = pcVar2;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_RR;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

