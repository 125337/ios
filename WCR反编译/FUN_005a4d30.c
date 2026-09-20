// FUN_005a4d30 @ 005a4d30

void FUN_005a4d30(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  uint local_34;
  long local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  if ((param_2 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    local_28 = param_1;
    local_19 = param_2;
    local_18 = param_1;
    FUN_005a4e54();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___dispatch_main_q_02578680;
    local_30 = lVar2;
    if (lVar2 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_005a59a4;
      local_48 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = lVar1;
      _dispatch_async(puVar3,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_40,0);
    }
    local_34 = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

