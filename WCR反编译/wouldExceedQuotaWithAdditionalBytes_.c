// wouldExceedQuotaWithAdditionalBytes: @ 00eade74

/* Function Stack Size: 0x18 bytes */

bool WCRefineAutoDownloadQuotaHelper::wouldExceedQuotaWithAdditionalBytes_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  bool local_11;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_limitBytes_026ab1b0);
  if ((IVar1 == 0) || (param_3 == 0)) {
    local_11 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_usedBytes_026ab198);
    local_11 = IVar1 < param_1 + param_3;
  }
  return (uint)local_11;
}

