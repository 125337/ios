// FUN_00f3ea90 @ 00f3ea90

void FUN_00f3ea90(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrYt1Y_);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_sendImageDataAsCustomEmoticon_ch_026ac1c0,*(undefined8 *)(param_1 + 0x20)
               ,*(undefined8 *)(param_1 + 0x28));
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ubh_1Y_);
    }
  }
  return;
}

