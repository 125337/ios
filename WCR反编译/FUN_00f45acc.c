// FUN_00f45acc @ 00f45acc

void FUN_00f45acc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  DAT_028e2d68 = 0;
  _objc_storeStrong(&DAT_028e2d60,0);
  FUN_00f45b8c();
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_sendImageDataAsCustomEmoticon_ch_026ac1c0,*(undefined8 *)(param_1 + 0x20)
               ,*(undefined8 *)(param_1 + 0x28));
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,&cf_lh_1Y_,
             0);
  return;
}

