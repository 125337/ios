// FUN_016bca74 @ 016bca74

void FUN_016bca74(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined8 local_68 [3];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_21 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar4 = local_20;
  local_48 = param_6;
  if ((local_21 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar4;
    local_4c = 1;
  }
  else {
    uVar1 = local_20;
    FUN_016bfd70(local_20,local_30);
    uVar4 = local_20;
    if ((uVar1 & 1) == 0) {
      uVar2 = local_30;
      _WCRPluginIconResolvedTitle(local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_68[0] = uVar2;
      _WCRPluginIconResolvedIcon(local_30,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_20;
      local_70 = uVar3;
      FUN_016c0118(local_20,local_68[0],uVar3,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_4c = 1;
      local_18 = uVar4;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(local_68,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar4;
      local_4c = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

