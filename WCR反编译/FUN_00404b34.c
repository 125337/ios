// FUN_00404b34 @ 00404b34

void FUN_00404b34(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  uint local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar3 = local_18;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  bVar1 = lVar3 != 0;
  if (bVar1) {
    FUN_00404da4();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_00404ea0;
    local_40 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar2;
    _dispatch_sync(lVar3,&local_58);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _objc_storeStrong(&local_38,0);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

