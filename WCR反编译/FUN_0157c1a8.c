// FUN_0157c1a8 @ 0157c1a8

byte FUN_0157c1a8(ulong param_1)

{
  undefined *puVar1;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  FUN_01532090();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if ((param_1 == 0) || (FUN_01564574(), (param_1 & 1) == 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_01569d5c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_showRoomContactSelectorViewContr_026b0798;
    local_30 = param_1;
    if ((param_1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (param_1,PTR_s_respondsToSelector__026ca818,
                   PTR_s_showRoomContactSelectorViewContr_026b0798), (param_1 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      FUN_0157b188();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1);
      FUN_0157c5ec(8);
      local_11 = 1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

