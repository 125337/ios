// FUN_00294e24 @ 00294e24

void FUN_00294e24(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  uint local_30;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar3 = local_18;
  bVar1 = local_18 != 0;
  if (bVar1) {
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_002957d4;
    local_48 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_20;
    local_40 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    FUN_00276c80(1,0,&local_60);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  else {
    FUN_0028e9e4(&cf__beHe);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

