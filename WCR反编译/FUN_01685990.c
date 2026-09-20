// FUN_01685990 @ 01685990

void FUN_01685990(ulong param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_20;
  byte local_11;
  
  local_11 = 1;
  if (((DAT_028e3d28 & 1) == 0) && (local_11 = 1, (DAT_028e3d29 & 1) == 0)) {
    local_11 = DAT_028e3d2a;
  }
  local_11 = local_11 & 1;
  FUN_01639cc4();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_setPreviewTouchYield_;
  local_20 = param_1;
  _NSSelectorFromString(&cf_setPreviewTouchYield_);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_respondsToSelector__026ca818,pcVar2);
  uVar1 = local_20;
  if ((param_1 & 1) != 0) {
    pcVar2 = &cf_setPreviewTouchYield_;
    _NSSelectorFromString(&cf_setPreviewTouchYield_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2,local_11 & 1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

