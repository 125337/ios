// FUN_00159c1c @ 00159c1c

void FUN_00159c1c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8850)(param_1,param_2);
  FUN_0015ab30();
  uVar1 = local_18;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 != 0) && (uVar1 = local_30, FUN_0015aee0(), (uVar1 & 1) == 0)) {
      FUN_0015b108(local_28,local_30);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

