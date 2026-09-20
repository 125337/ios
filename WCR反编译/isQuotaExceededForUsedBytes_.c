// isQuotaExceededForUsedBytes: @ 00eaddf0

/* Function Stack Size: 0x18 bytes */

bool WCRefineAutoDownloadQuotaHelper::isQuotaExceededForUsedBytes_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  bool local_11;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_limitBytes_026ab1b0);
  local_11 = param_1 != 0 && param_1 <= param_3;
  return (uint)local_11;
}

