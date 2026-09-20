// FUN_0156f9e8 @ 0156f9e8

byte FUN_0156f9e8(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (uVar1 = local_20, FUN_01564574(), (uVar1 & 1) != 0)) ||
     (uVar1 = local_20, FUN_01565620(), (uVar1 & 1) != 0)) {
    local_11 = false;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_11 = false;
    }
    else {
      uVar1 = local_30;
      _WCRefineSmallSignalSendYoToUsername();
      local_11 = (int)uVar1 != 0;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

