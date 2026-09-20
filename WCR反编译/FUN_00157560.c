// FUN_00157560 @ 00157560

void FUN_00157560(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_0015ab30();
  uVar2 = local_18;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if ((uVar2 == 0) || (uVar3 = local_30, FUN_0015aee0(uVar2), (uVar3 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      FUN_0015b108(local_28,local_30);
      bVar1 = true;
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
    if (bVar1) {
      return;
    }
  }
  (*DAT_028c87f8)(local_18,local_20);
  return;
}

