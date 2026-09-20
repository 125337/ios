// FUN_00f672bc @ 00f672bc

byte FUN_00f672bc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
    if (uVar1 == 3) {
      local_11 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
        if (uVar1 == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scope_0269ea90);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scope_0269ea90);
            if ((uVar1 & 0x82) == 0) {
              local_11 = 1;
            }
            else {
              local_11 = 0;
            }
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

