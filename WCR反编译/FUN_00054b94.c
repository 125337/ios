// FUN_00054b94 @ 00054b94

void FUN_00054b94(double param_1,undefined8 param_2)

{
  long lVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  undefined4 local_30;
  double local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar1 = local_18;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_30 = 1;
  }
  else if (0.0 < local_20) {
    dVar2 = _dispatch_time(0,(long)(local_20 * 1000000000.0));
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00056c78;
    local_40 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar1;
    _dispatch_after(dVar2,puVar3,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  else {
    FUN_00056ab0(local_18);
    local_30 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

