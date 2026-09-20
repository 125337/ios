// FUN_006c14cc @ 006c14cc

byte FUN_006c14cc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_58 [2];
  undefined *local_48;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_006c13bc();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    if (uVar2 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      local_48 = PTR_s_onReturnToOriginalMsg_026a6930;
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_onReturnToOriginalMsg_026a6930);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        FUN_006c2238();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_s_locateToMsg__0269d608;
        local_58[0] = uVar2;
        if (uVar2 == 0) {
          local_11 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_locateToMsg__0269d608);
          if ((uVar2 & 1) == 0) {
            local_11 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_58[0],puVar1,local_30);
            local_11 = 1;
          }
        }
        local_24 = 1;
        _objc_storeStrong(local_58,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,local_48);
        local_11 = 1;
        local_24 = 1;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

