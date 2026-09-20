// FUN_01f15558 @ 01f15558

ulong FUN_01f15558(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_mesSvrID_026c8390);
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mesSvrID_026c8390);
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

