// FUN_0029662c @ 0029662c

void FUN_0029662c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    if (local_20 != 0) {
      (**(code **)(local_20 + 0x10))(local_20,0,&cf_VGreHe);
    }
    local_30 = 1;
  }
  else {
    FUN_002813d4();
    lVar1 = local_20;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_00296d84;
    local_48 = &DAT_0257b7b8;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_18;
    local_38 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar2;
    FUN_00281e7c(&local_60);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

