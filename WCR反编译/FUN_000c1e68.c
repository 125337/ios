// FUN_000c1e68 @ 000c1e68

byte FUN_000c1e68(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_type_0269e6f8), (uVar2 & 1) == 0))
  {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_type_0269e6f8);
    bVar1 = (byte)uVar2;
    FUN_000c17c8();
    local_11 = bVar1 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

