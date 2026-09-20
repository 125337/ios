// FUN_01f8a31c @ 01f8a31c

void FUN_01f8a31c(long param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_30 = uVar1;
  if ((((uVar1 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setDurationPrefetchPending__026c9b68,0),
       (local_19 & 1) != 0)) &&
      (uVar2 = *(ulong *)(param_1 + 0x28), uVar1 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_statsGeneration_026c99b0), uVar2 == uVar1
      )) && (uVar1 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewVisible_026c9808),
            (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rebuildListSections_026ba410);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

