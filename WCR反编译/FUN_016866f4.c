// FUN_016866f4 @ 016866f4

void FUN_016866f4(ulong param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  FUN_0168679c();
  FUN_01639cc4();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_attachToActiveSceneIfNeeded;
  local_28 = param_1;
  _NSSelectorFromString(&cf_attachToActiveSceneIfNeeded);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_respondsToSelector__026ca818,pcVar2);
  uVar1 = local_28;
  if ((param_1 & 1) != 0) {
    pcVar2 = &cf_attachToActiveSceneIfNeeded;
    _NSSelectorFromString(&cf_attachToActiveSceneIfNeeded);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

