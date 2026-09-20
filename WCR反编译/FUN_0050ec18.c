// FUN_0050ec18 @ 0050ec18

void FUN_0050ec18(ulong param_1)

{
  ulong uVar1;
  ulong local_18;
  
  FUN_0050ebd4();
  if (((param_1 & 1) != 0) && ((DAT_028cb059 & 1) == 0)) {
    DAT_028cb059 = 1;
    FUN_0050ed60();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getFailedLike_026a4690);
    if ((param_1 & 1) != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getFailedLike_026a4690);
      _objc_unsafeClaimAutoreleasedReturnValue(uVar1);
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_onCommentOrLikeFailQueueChange_026a46a0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onCommentOrLikeFailQueueChange_026a46a0);
    }
    DAT_028cb059 = 0;
    _objc_storeStrong(&local_18,0);
  }
  return;
}

