// FUN_002906f8 @ 002906f8

void FUN_002906f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  uint local_30;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (lVar3 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_002924a4;
    local_48 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_20;
    local_40 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar1;
    _dispatch_async(puVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  local_30 = (uint)(lVar3 == 0);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

