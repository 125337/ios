// FUN_00438fd4 @ 00438fd4

void FUN_00438fd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (((local_28 == 0) ||
      (lVar2 = DAT_028ca880,
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca880,PTR_s_count_0269cfe0), lVar2 == 0)) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     lVar2 == 0)) {
    FUN_004389c8();
    local_40 = 1;
  }
  else {
    lVar2 = DAT_028ca880;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca880,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca880,PTR_s_removeObjectAtIndex__0269d530,0);
    local_50 = DAT_028ca9a8;
    dVar3 = _dispatch_time(0,350000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_004392b8;
    local_78 = &DAT_02579000;
    local_58 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_48;
    local_70 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_30;
    local_68 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar1;
    _dispatch_after(dVar3,puVar4,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

