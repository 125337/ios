// FUN_00436f2c @ 00436f2c

void FUN_00436f2c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 != 0) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setBMutliContact__026a39c0),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBMutliContact__026a39c0,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

