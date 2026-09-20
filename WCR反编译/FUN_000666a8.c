// FUN_000666a8 @ 000666a8

void FUN_000666a8(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar3 = local_18;
  FUN_00065878();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (((uVar3 == 0) || (uVar3 = local_38[0], FUN_0006171c(), (uVar3 & 1) != 0)) ||
     (uVar4 = local_38[0], FUN_000614c8(), uVar3 = local_38[0], (uVar4 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
  }
  else {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
    FUN_000668e8(0,uVar3,uVar4 & 0xffffffff);
    puVar2 = PTR_WCRefineHelper_026ce000;
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
    pcVar1 = &cf__S_NRg;
    if ((uVar3 & 1) == 0) {
      pcVar1 = &cf__SN9_Q;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

