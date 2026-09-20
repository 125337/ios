// FUN_00f111d0 @ 00f111d0

void FUN_00f111d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc0000000;
  local_3c = 0;
  local_38 = FUN_00f11364;
  local_30 = &DAT_025826e8;
  local_28 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x408c200000000000,PTR__OBJC_CLASS___NSTimer_026ce210,
             PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,&local_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar1;
  local_68 = 0xc0000000;
  local_64 = 0;
  local_60 = FUN_00f113cc;
  local_58 = &DAT_025817b0;
  local_50 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar4,0,puVar3,&local_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

