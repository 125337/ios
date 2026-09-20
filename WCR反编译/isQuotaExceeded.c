// isQuotaExceeded @ 00eadd94

/* Function Stack Size: 0x10 bytes */

bool WCRefineAutoDownloadQuotaHelper::isQuotaExceeded(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_usedBytes_026ab198);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isQuotaExceededForUsedBytes__026ab1a8,IVar1);
  return (bool)param_1;
}

