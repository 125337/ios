// FUN_00fb1194 @ 00fb1194

void FUN_00fb1194(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  long local_30;
  uint local_24;
  double local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar1 = local_18;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
    local_30 = lVar2;
    dVar3 = _dispatch_time(0,(long)(local_20 * 1000000000.0));
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00fc89c8;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar2;
    _dispatch_after(dVar3,puVar4,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  local_24 = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_18,0);
  return;
}

