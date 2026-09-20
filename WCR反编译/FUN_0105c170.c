// FUN_0105c170 @ 0105c170

ulong FUN_0105c170(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
  if ((uVar1 & 1) == 0) {
    local_20 = 0;
  }
  else {
    local_20 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_longLongValue_0269d5e0);
  }
  _objc_storeStrong(&local_18,0);
  return local_20;
}

