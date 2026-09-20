// FUN_0026ee10 @ 0026ee10

byte FUN_0026ee10(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (param_2 == 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
     (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
    local_11 = (byte)uVar1 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

