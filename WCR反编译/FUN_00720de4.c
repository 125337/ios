// FUN_00720de4 @ 00720de4

void FUN_00720de4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined4 local_30;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  lVar2 = local_18;
  if (lVar3 == 0) {
    local_30 = 1;
  }
  else {
    ppuVar4 = &local_68;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0072102c;
    local_50 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_20;
    local_48 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar1;
    _objc_retainBlock();
    puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_38 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar6 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar5 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)local_38[2])();
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

