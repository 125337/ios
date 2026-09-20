// FUN_001acd50 @ 001acd50

void FUN_001acd50(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined *local_50 [3];
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 == 0) {
    local_2c = 1;
  }
  else {
    _objc_getAssociatedObject(lVar2,&DAT_028c8a8b);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSObject_026ce188;
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_new_0269d288);
    local_50[0] = puVar3;
    _objc_setAssociatedObject(local_28,&DAT_028c8a8b,puVar3,1);
    if (local_38 == 0) {
      FUN_001acfa0(local_28);
    }
    dVar4 = _dispatch_time(0,120000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_001ad0bc;
    local_68 = &DAT_025797f0;
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    puVar1 = local_50[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = puVar1;
    _dispatch_after(dVar4,puVar3,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_60);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(local_50,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

