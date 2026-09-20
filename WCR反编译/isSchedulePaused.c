// isSchedulePaused @ 00f219e0

/* Function Stack Size: 0x10 bytes */

bool WCRefineDoNotDisturbSupport::isSchedulePaused(ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  double dVar2;
  bool local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (0.0 < in_d0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    dVar2 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = dVar2 < in_d0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_11 = false;
  }
  return (uint)local_11;
}

