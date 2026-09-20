// FUN_000d6440 @ 000d6440

void FUN_000d6440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  long local_68;
  undefined1 auStack_60 [24];
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c839c);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = lVar2 + 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar2 + 1
            );
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(lVar1,&DAT_028c839c,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_initWeak(auStack_60,local_28);
  dVar4 = _dispatch_time(0,200000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_000e6e14;
  local_78 = &DAT_02579bb0;
  _objc_copyWeak(auStack_70,auStack_60);
  local_68 = local_48;
  _dispatch_after(dVar4,puVar3,&local_90);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

