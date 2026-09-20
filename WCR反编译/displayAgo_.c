// displayAgo: @ 014dfbc4

/* Function Stack Size: 0x14 bytes */

ID __thiscall
WCRefineSessionStatsEngine::displayAgo_
          (WCRefineSessionStatsEngine *this,ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  double in_d0;
  double local_38;
  cfstringStruct *local_18;
  
  if (param_3 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gS;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (double)NEON_ucvtf((ulong)param_3);
    local_38 = in_d0 - local_38;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_38 < 0.0) {
      local_38 = 0.0;
    }
    if (60.0 <= local_38) {
      local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (3600.0 <= local_38) {
        if (86400.0 <= local_38) {
          if ((long)(local_38 / 86400.0) < 0x3c) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__)
            ;
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayTime__026af760,param_3);
            _objc_retainAutoreleasedReturnValue();
            local_18 = (cfstringStruct *)param_1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_RR;
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

