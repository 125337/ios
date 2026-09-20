// FUN_008a6738 @ 008a6738

void FUN_008a6738(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  dispatch_time_t dVar5;
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  long local_50;
  undefined1 auStack_48 [8];
  long local_40;
  uint local_38;
  byte local_31;
  undefined *local_30;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_31 = 0;
  local_7c = 1;
  if (local_18 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_7c = (uint)puVar3 ^ 1;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  bVar1 = (local_7c & 1) == 0;
  if (bVar1) {
    FUN_008a6a3c(local_18);
    lVar4 = local_18;
    FUN_008a6b70();
    lVar2 = local_18;
    local_40 = lVar4 + 1;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_40);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,&DAT_028cddd8,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_setAssociatedObject(local_18,&DAT_028cddd9,0,1);
    _objc_initWeak(auStack_48,local_18);
    dVar5 = _dispatch_time(0,300000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_008a6c48;
    local_60 = &DAT_02579bb0;
    _objc_copyWeak(auStack_58,auStack_48);
    local_50 = local_40;
    _dispatch_after(dVar5,puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

