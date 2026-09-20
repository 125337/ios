// FUN_0018d1cc @ 0018d1cc

ulong FUN_0018d1cc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 < 0)) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionType__0269fca8);
    if ((uVar1 & 1) == 0) {
      local_18 = 0xffffffffffffffff;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionType__0269fca8,param_2);
      local_18 = uVar1 & 0xffffffff;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

