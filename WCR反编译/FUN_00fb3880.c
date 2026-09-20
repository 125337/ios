// FUN_00fb3880 @ 00fb3880

void FUN_00fb3880(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    FUN_00fb39d8(uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mo__1Y_9e_ueNlS);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardFileAtPath_fromViewCo_026a9b60,
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
    }
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_wcr_startOfficialForwardForMessa_026acf88,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),4);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x30);
      FUN_00fb39d8(uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
      }
    }
  }
  return;
}

