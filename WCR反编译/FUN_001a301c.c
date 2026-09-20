// FUN_001a301c @ 001a301c

void FUN_001a301c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [28];
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  bVar1 = local_18 != 0;
  if (bVar1) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,&DAT_028c89b1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_initWeak(auStack_38,local_18);
    dVar4 = _dispatch_time(0,600000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_001a3d64;
    local_48 = &DAT_02578da0;
    _objc_copyWeak(auStack_40,auStack_38);
    _dispatch_after(dVar4,puVar3,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

