// FUN_0067afc8 @ 0067afc8

byte FUN_0067afc8(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_patWrap_026a6400),
     (uVar1 & 1) == 0)) {
    local_11 = 1;
    local_30 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_patWrap_026a6400);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_canRevoke_026a6408),
       (uVar1 & 1) == 0)) {
      local_11 = 1;
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_canRevoke_026a6408);
      local_11 = (byte)uVar1 & 1;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

