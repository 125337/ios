// FUN_0080c3e8 @ 0080c3e8

void FUN_0080c3e8(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  double local_b0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  double local_40;
  undefined4 local_38;
  long local_28;
  double local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar1 = DAT_028ccf50;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028ccf50,PTR_s_objectForKeyedSubscript__0269d098,local_18);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  FUN_0080c250(local_18,0);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    local_38 = 1;
  }
  else {
    local_48 = 0;
    local_50 = local_20;
    if (local_20 <= 0.0) {
      local_b0 = 0.0;
    }
    else {
      local_b0 = local_20;
    }
    local_58 = local_b0;
    local_40 = local_b0 + DAT_02323c88;
    dVar3 = _dispatch_time(0,(long)(local_40 * 1000000000.0));
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0080c8b8;
    local_68 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar1;
    _dispatch_after(dVar3,puVar4,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_60,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

