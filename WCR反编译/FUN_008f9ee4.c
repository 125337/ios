// FUN_008f9ee4 @ 008f9ee4

void FUN_008f9ee4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        _objc_setAssociatedObject
                  (*(undefined8 *)(param_1 + 0x30),&DAT_028ce334,*(undefined8 *)(param_1 + 0x20));
        _objc_setAssociatedObject
                  (*(undefined8 *)(param_1 + 0x30),&DAT_028ce335,*(undefined8 *)(param_1 + 0x28),3);
        _objc_setAssociatedObject
                  (*(undefined8 *)(param_1 + 0x30),&DAT_028ce336,*(undefined8 *)(param_1 + 0x38),1);
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x30),PTR_s_WCRefine_forwardVoiceFile__026a9db8,0);
          return;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x30),PTR_s_WCRefine_sendVoiceFileToCurrentC_026a9db0,0
                  );
        return;
      }
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_leN1Y_);
  return;
}

