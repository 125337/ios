// FUN_007a7000 @ 007a7000

void FUN_007a7000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_28 = param_3;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_38 = param_5;
  if (DAT_028ccb40 != (code *)0x0) {
    uVar1 = local_20;
    (*DAT_028ccb40)(local_20,PTR_s_tableView_viewForHeaderInSection_026a2358,local_30,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_40 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar1 = local_20;
  FUN_007a88cc(local_20,local_30,local_38);
  uVar2 = local_40;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_50 = 1;
  }
  else if (local_40 == 0) {
    uVar2 = local_20;
    FUN_007a7300(local_20,local_30,local_38);
    local_58 = param_1;
    FUN_007a8a14(param_1);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = 1;
    local_18 = uVar2;
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_50 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

