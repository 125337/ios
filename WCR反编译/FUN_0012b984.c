// FUN_0012b984 @ 0012b984

byte FUN_0012b984(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_s_isChatroom_0269e248;
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isChatroom_0269e248);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1);
      local_11 = (byte)uVar2 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

