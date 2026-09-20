// usedBytesDisplayText @ 00eadc44

/* Function Stack Size: 0x10 bytes */

ID WCRefineAutoDownloadQuotaHelper::usedBytesDisplayText(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_usedBytes_026ab198);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_formatBytes__026ab1a0,IVar1);
  return param_1;
}

