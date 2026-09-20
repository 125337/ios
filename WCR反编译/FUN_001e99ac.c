// FUN_001e99ac @ 001e99ac

byte FUN_001e99ac(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nextResponder_0269d0d8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  do {
    if (local_28 == 0) {
      local_11 = 0;
LAB_001e9acc:
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      return local_11 & 1;
    }
    uVar1 = local_28;
    FUN_001eadf0();
    if ((uVar1 & 1) != 0) {
      local_11 = 1;
      goto LAB_001e9acc;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  } while( true );
}

