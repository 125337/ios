// FUN_0012df50 @ 0012df50

void FUN_0012df50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_40 [3];
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8658)(param_1,param_2);
  uVar1 = local_18;
  FUN_0012e2f4();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_0012f0c4();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    if (uVar1 != 0) {
      FUN_0012f148(uVar1,1);
    }
    FUN_00132788(local_18,0);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar1;
    if (uVar1 != 0) {
      FUN_00131590(uVar1,0);
    }
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

