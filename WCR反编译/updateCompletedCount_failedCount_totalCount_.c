// updateCompletedCount:failedCount:totalCount: @ 011292cc

/* Function Stack Size: 0x28 bytes */

void WCRefineProgressToast::updateCompletedCount_failedCount_totalCount_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4,long_long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long_long local_108;
  long_long local_100;
  long_long local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  long_long local_c8;
  double local_c0;
  long_long local_b8;
  undefined **local_b0;
  double local_a8;
  long_long local_a0;
  long_long local_98;
  long_long local_90;
  undefined4 local_84;
  long_long local_80;
  long_long local_78;
  long_long local_70;
  long_long local_68;
  undefined4 local_5c;
  long_long local_58;
  long_long local_50;
  long_long local_48;
  long_long local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_5c = 1;
  local_f8 = param_5;
  if ((long)param_5 < 1) {
    local_f8 = 1;
  }
  local_68 = local_f8;
  local_50 = local_f8;
  local_80 = param_3 + param_4;
  local_84 = 0;
  local_100 = local_80;
  if ((long)local_80 < 0) {
    local_100 = 0;
  }
  local_90 = local_100;
  local_78 = local_100;
  local_98 = local_f8;
  if ((long)local_100 < (long)local_f8) {
    local_108 = local_100;
  }
  else {
    local_108 = local_f8;
  }
  local_a0 = local_108;
  local_70 = local_108;
  local_a8 = (double)(long)local_108 / (double)(long)local_f8;
  ppuVar1 = &local_f0;
  local_f0 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = 0xc2000000;
  local_e4 = 0;
  local_e0 = FUN_01129504;
  local_d8 = &DAT_025857e8;
  local_58 = param_5;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_50;
  local_c0 = local_a8;
  local_b8 = local_40;
  local_d0 = param_1;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_b0 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)local_b0[2])();
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_d0,0);
  return;
}

