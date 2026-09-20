// FUN_005a09c4 @ 005a09c4

void FUN_005a09c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  long local_40;
  undefined **local_38;
  undefined4 local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  lVar1 = local_18;
  if ((lVar2 == 0) || (local_20 == 0)) {
    local_30 = 1;
  }
  else {
    ppuVar3 = &local_68;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_005bf2cc;
    local_50 = &DAT_02579e20;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_20;
    local_48 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar2;
    _objc_retainBlock();
    puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_38 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar5 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar5);
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

