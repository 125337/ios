// FUN_000d8bac @ 000d8bac

ulong FUN_000d8bac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (param_2 == 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
     (uVar1 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

