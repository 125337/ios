// FUN_0004e678 @ 0004e678

byte FUN_0004e678(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_28, FUN_0004ff90(), (uVar1 & 1) != 0)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    FUN_0005011c();
    local_11 = ((byte)uVar1 ^ 1) & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

