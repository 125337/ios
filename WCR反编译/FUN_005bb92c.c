// FUN_005bb92c @ 005bb92c

byte FUN_005bb92c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_forwardNote2WC_026a5920),
     (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_forwardNote2WC_026a5920);
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

