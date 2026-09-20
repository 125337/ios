// FUN_00eb90d0 @ 00eb90d0

void FUN_00eb90d0(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if ((((uVar1 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isInBackground_026ab300), (uVar1 & 1) != 0
       )) && (uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEnabled_026a0ef0),
             (uVar1 & 1) != 0)) &&
     ((FUN_00eb6ed8(), (uVar1 & 1) == 0 && (FUN_00eb7158(), (uVar1 & 1) == 0)))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ensureAudioPlaying_026ab3b8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

