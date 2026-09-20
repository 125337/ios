// FUN_01575b98 @ 01575b98

void FUN_01575b98(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [15];
  byte local_31;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,PTR__OBJC_CLASS___NSDate_026cdf88,
             PTR_s_dateWithTimeIntervalSinceNow__0269cf50);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  while( true ) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    FUN_01575044();
    local_31 = 0;
    bVar1 = false;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      local_31 = 1;
      local_30 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar2 == (undefined *)0xffffffffffffffff;
    }
    if ((local_31 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    puVar2 = PTR___dispatch_main_q_02578680;
    if (!bVar1) break;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc3333333333333,PTR__OBJC_CLASS___NSThread_026ce0a8,
               PTR_s_sleepForTimeInterval__0269d9e8);
  }
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01575db8;
  local_50 = &DAT_02579c60;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar4;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _dispatch_async(puVar2,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

