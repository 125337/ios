// FUN_0026aa80 @ 0026aa80

void FUN_0026aa80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
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
  lVar2 = local_18;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    dVar3 = _dispatch_time(0,700000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0026c29c;
    local_48 = &DAT_025791c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    local_38 = local_20;
    _dispatch_after(dVar3,puVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_40,0);
  }
  local_30 = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_18,0);
  return;
}

