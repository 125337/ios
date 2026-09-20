// FUN_010eb8cc @ 010eb8cc

uint FUN_010eb8cc(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  uint local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_14 = 0xffffffff;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0);
    if ((uVar1 & 1) == 0) {
      local_14 = 0xffffffff;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isSender_0269d1b0);
      local_14 = (uint)((uVar1 & 1) != 0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

