// FUN_016acce0 @ 016acce0

void FUN_016acce0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  double local_f0;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined *local_50;
  undefined4 local_44;
  double local_40;
  long local_38;
  undefined8 local_30;
  long *local_28;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = param_1;
  if (local_38 == 0) {
    local_44 = 1;
  }
  else {
    local_28 = &DAT_028e3e60;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02587fb0);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__p__f);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = DAT_028e3e58;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3e58,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,local_50);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_68 = local_40;
    local_70 = 0x3ff0000000000000;
    if (1.0 <= local_40) {
      local_f0 = local_40;
    }
    else {
      local_f0 = 1.0;
    }
    local_78 = local_f0;
    dVar4 = _dispatch_time(0,(long)(local_f0 * 1000000000.0));
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_016ad0bc;
    local_88 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar2;
    _dispatch_after(dVar4,puVar3,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

