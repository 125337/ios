// FUN_00513280 @ 00513280

byte FUN_00513280(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_advertiseInfo_026a46e8);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_advertiseInfo_026a46e8);
    _objc_retainAutoreleasedReturnValue();
    local_11 = uVar1 != 0;
    (*(code *)PTR__objc_release_02578630)();
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

