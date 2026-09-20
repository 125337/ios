// FUN_008c34dc @ 008c34dc

ulong FUN_008c34dc(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_count_0269cfe0);
  if ((uVar1 & 1) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
  }
  _objc_storeStrong(&local_18,0);
  return local_38;
}

