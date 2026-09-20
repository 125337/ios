// FUN_0058e3bc @ 0058e3bc

ulong FUN_0058e3bc(ulong param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  FUN_0058f5d8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getPostPrivacy_026a54c0);
    if ((param_1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getPostPrivacy_026a54c0);
      local_18 = uVar1;
      goto LAB_0058e478;
    }
  }
  local_18 = 0;
LAB_0058e478:
  _objc_storeStrong(&local_20,0);
  return local_18;
}

