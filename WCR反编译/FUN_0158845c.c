// FUN_0158845c @ 0158845c

void FUN_0158845c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((((local_18 != 0) && (local_20 != 0)) &&
      (uVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_deferredDataPending_026b0530),
      (uVar1 & 1) != 0)) &&
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGroup_026af768),
     (uVar1 & 1) == 0)) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isSelf_0269ff30);
    if ((uVar1 & 1) == 0) {
      lVar2 = local_18;
      FUN_01588828(local_18);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setCommonGroupCount__026af818,lVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setDeferredDataPending__026b0820,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

