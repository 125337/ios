// FUN_016adcd8 @ 016adcd8

void FUN_016adcd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30 [3];
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028e3e50,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar3 = _dispatch_time(0,1000000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_016aed30;
  local_38 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_30[0] = uVar1;
  _dispatch_after(dVar3,puVar2,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

