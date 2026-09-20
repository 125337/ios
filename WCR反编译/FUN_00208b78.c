// FUN_00208b78 @ 00208b78

byte FUN_00208b78(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar1 = local_20;
  _objc_getClass();
  lVar2 = local_28;
  _NSSelectorFromString();
  if (((uVar1 == 0) || (lVar2 == 0)) ||
     (uVar3 = uVar1,
     (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_respondsToSelector__026ca818,lVar2),
     (uVar3 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,lVar2);
    local_11 = (byte)uVar1 & 1;
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

