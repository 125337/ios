// FUN_00f7ad34 @ 00f7ad34

void FUN_00f7ad34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (((uVar1 != 0) &&
      ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_running_026aca70), (uVar1 & 1) != 0)) &&
     (uVar2 = *(ulong *)(param_1 + 0x30), uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_requestToken_026acb48), uVar2 == uVar1)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setGapBlock__026acb90,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_fireCgiForUserName__026acbb0,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

