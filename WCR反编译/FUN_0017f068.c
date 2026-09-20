// FUN_0017f068 @ 0017f068

void FUN_0017f068(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long local_b8;
  long local_50;
  undefined4 local_48;
  long local_38;
  ulong local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_24 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_24;
  uVar3 = local_30;
  lVar2 = local_20;
  FUN_0017d778();
  _objc_retainAutoreleasedReturnValue();
  FUN_0017d9e4(uVar3,uVar1);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_38;
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
    local_48 = 1;
  }
  else {
    lVar2 = local_20;
    FUN_0017dd44();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = lVar2;
    if (lVar2 == 0) {
      local_b8 = local_38;
    }
    local_50 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b8;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

