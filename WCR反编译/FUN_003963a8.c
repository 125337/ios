// FUN_003963a8 @ 003963a8

byte FUN_003963a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_0037a830(local_20,&cf_m_isFolding);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      uVar2 = local_20;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_28 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_28;
    FUN_003bcb18(local_28,local_20);
    local_11 = (byte)uVar1 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

