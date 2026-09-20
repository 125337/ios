// FUN_000faaac @ 000faaac

void FUN_000faaac(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  long local_58;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_38 = param_1;
  local_30 = param_3;
  FUN_000fad50();
  lVar2 = local_28;
  local_40 = param_3;
  _objc_getAssociatedObject(local_28,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_28;
  uVar1 = local_40;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_58 = lVar3 + 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar3 + 1
            );
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(lVar2,uVar1,puVar4,1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_initWeak(auStack_60,local_28);
  dVar5 = _dispatch_time(0,(long)(local_38 * 1000000000.0));
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_000ff35c;
  local_88 = &DAT_0257a1b8;
  _objc_copyWeak(auStack_80,auStack_60);
  local_78 = local_40;
  local_70 = local_58;
  local_68 = local_30;
  _dispatch_after(dVar5,puVar4,&local_a0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_28,0);
  return;
}

