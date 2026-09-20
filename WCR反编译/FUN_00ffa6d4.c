// FUN_00ffa6d4 @ 00ffa6d4

void FUN_00ffa6d4(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = DAT_028e3138;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = lVar1;
  _objc_storeStrong(&DAT_028e3138,0);
  if (local_28 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 *(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_finishWithText_success_completio_026a1728,
               *(undefined8 *)(param_1 + 0x20),*(byte *)(param_1 + 0x28) & 1,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

