// FUN_00f064c4 @ 00f064c4

void FUN_00f064c4(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined1 local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_30 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_pruneOldBackupsWithCompletion__026abb90);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

