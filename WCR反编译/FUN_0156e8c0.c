// FUN_0156e8c0 @ 0156e8c0

byte FUN_0156e8c0(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_28;
  byte local_21;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_21 = param_2;
  if ((local_20 == 0) || (uVar2 = local_20, FUN_01564574(), (uVar2 & 1) != 0)) {
    local_11 = 0;
    local_28 = 1;
  }
  else {
    FUN_0152b7ec();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_setContact_favour_sync__0269ff88;
    local_30 = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setContact_favour_sync__0269ff88),
       (uVar2 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      FUN_01533f64(local_20,PTR_s_isFavour_0269ff28,0);
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,local_20,local_21 & 1,1);
      local_11 = (byte)uVar2 & 1;
    }
    local_28 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

