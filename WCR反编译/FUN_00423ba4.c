// FUN_00423ba4 @ 00423ba4

void FUN_00423ba4(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38 [3];
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    FUN_00405c08(local_18);
    lVar3 = local_18;
    FUN_00405f68();
    FUN_00404f4c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_0042ea24;
    local_40 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_38[0] = lVar2;
    _dispatch_async(lVar3,&local_58);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _objc_storeStrong(local_38,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

