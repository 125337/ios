// FUN_001b54dc @ 001b54dc

byte FUN_001b54dc(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_40;
  undefined4 local_38;
  byte local_21;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  local_21 = param_2;
  FUN_001b47e0();
  if ((uVar2 & 1) == 0) {
    FUN_001b753c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_setContact_favour_sync__0269ff88;
    local_40 = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setContact_favour_sync__0269ff88),
       (uVar2 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar1,local_20,local_21 & 1,1);
      local_11 = (byte)uVar2 & 1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_11 = 0;
    local_38 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

