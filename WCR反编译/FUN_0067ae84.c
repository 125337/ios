// FUN_0067ae84 @ 0067ae84

ulong FUN_0067ae84(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_status_026a1830), (uVar1 & 1) == 0
     )) {
    local_18 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_status_026a1830);
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

