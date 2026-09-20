// FUN_002a4894 @ 002a4894

void FUN_002a4894(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9660)(param_1,param_2);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c9838);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028c9838,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  dVar3 = _dispatch_time(0,200000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc0000000;
  local_54 = 0;
  local_50 = FUN_002d4078;
  local_48 = &DAT_025797b0;
  local_40 = local_18;
  _dispatch_after(dVar3,puVar2,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

