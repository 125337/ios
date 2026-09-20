// FUN_01639f30 @ 01639f30

void FUN_01639f30(ulong param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  FUN_0163a198();
  FUN_01639cc4();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = param_1;
  if (param_1 != 0) {
    pcVar2 = &cf_destroyBall;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_respondsToSelector__026ca818,pcVar2);
    uVar3 = local_38[0];
    if ((param_1 & 1) != 0) {
      pcVar2 = &cf_destroyBall;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar2);
      goto LAB_0163a0b0;
    }
  }
  uVar3 = local_38[0];
  if (local_38[0] != 0) {
    pcVar2 = &cf_hideBall;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    uVar1 = local_38[0];
    if ((uVar3 & 1) != 0) {
      pcVar2 = &cf_hideBall;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2);
    }
  }
LAB_0163a0b0:
  if (DAT_028e3cb8 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&DAT_028e3cb8,0);
  }
  DAT_028e3cc0 = 0;
  _objc_storeStrong(local_38,0);
  return;
}

