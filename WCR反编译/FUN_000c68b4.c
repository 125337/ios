// FUN_000c68b4 @ 000c68b4

void FUN_000c68b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  double dVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_31 = param_5;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028c829d,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*DAT_028c8238)(local_18,local_20,local_28,local_30,local_31 & 1);
  dVar4 = DAT_02323c78;
  if ((local_31 & 1) == 0) {
    dVar4 = 0.0;
  }
  dVar3 = _dispatch_time(0,(long)(dVar4 * 1000000000.0));
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc0000000;
  local_64 = 0;
  local_60 = FUN_000d284c;
  local_58 = &DAT_025797b0;
  local_50 = local_18;
  _dispatch_after(dVar3,puVar2,&local_70);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

