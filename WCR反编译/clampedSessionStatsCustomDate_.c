// clampedSessionStatsCustomDate: @ 0212cf84

/* Function Stack Size: 0x18 bytes */

double WCRefineConfig::clampedSessionStatsCustomDate_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  double dVar2;
  double local_18;
  
  if (1317427200.0 <= param_3) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    dVar2 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_18 = param_3;
    if (dVar2 + 86400.0 < param_3) {
      local_18 = dVar2 + 86400.0;
    }
  }
  else {
    local_18 = 1317427200.0;
  }
  return local_18;
}

