// FUN_0061b690 @ 0061b690

void FUN_0061b690(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getCellAt__026a0b80),
     (uVar1 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getCellAt__026a0b80,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

