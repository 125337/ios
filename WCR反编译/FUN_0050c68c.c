// FUN_0050c68c @ 0050c68c

void FUN_0050c68c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_0050ebd4();
  if (((param_1 & 1) != 0) && ((DAT_028cb059 & 1) == 0)) {
    FUN_0050ed60();
    _objc_retainAutoreleasedReturnValue();
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getFailedLike_026a4690);
    if ((param_1 & 1) != 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getFailedLike_026a4690);
      _objc_unsafeClaimAutoreleasedReturnValue(uVar1);
    }
    _objc_storeStrong(&local_28,0);
  }
  (*DAT_028cb030)(local_18,local_20);
  return;
}

