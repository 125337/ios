// FUN_00364dd0 @ 00364dd0

uint FUN_00364dd0(undefined8 param_1)

{
  ulong uVar1;
  uint local_20;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_1c = 0;
  if (local_18 != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDragging_0269ddf8);
    local_20 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDecelerating_0269e888);
      local_20 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isTracking_0269ddf0);
        local_20 = (uint)uVar1;
      }
    }
    local_1c = local_20;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

