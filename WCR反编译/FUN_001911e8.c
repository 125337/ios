// FUN_001911e8 @ 001911e8

ulong FUN_001911e8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong local_68;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (param_2 < 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,
                PTR_s_ConvertToNormalContactSection__0269fce0), (uVar1 & 1) == 0)) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    local_68 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_ConvertToNormalContactSection__0269fce0,param_2);
    if ((long)local_68 < 0) {
      local_68 = 0xffffffffffffffff;
    }
    local_18 = local_68;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

