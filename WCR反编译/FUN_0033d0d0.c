// FUN_0033d0d0 @ 0033d0d0

void FUN_0033d0d0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_delegateEx;
  _NSSelectorFromString();
  if ((local_20 != 0) && (pcVar1 != (cfstringStruct *)0x0)) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
      goto LAB_0033d224;
    }
  }
  uVar2 = local_20;
  FUN_0033d258(local_20,&cf_delegateEx);
  _objc_retainAutoreleasedReturnValue();
  local_18 = uVar2;
LAB_0033d224:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

