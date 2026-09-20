// FUN_00fb1e00 @ 00fb1e00

void FUN_00fb1e00(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_wcr_sendFileAtPathToFileHelper_d_026acf80,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S0ReNORKb1Y_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__S0ReNORKb);
  }
  FUN_00fb1194(0x4014000000000000,*(undefined8 *)(param_1 + 0x30));
  return;
}

