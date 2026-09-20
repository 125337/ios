// FUN_005d0448 @ 005d0448

void FUN_005d0448(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [15];
  byte local_41;
  undefined *local_40;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,PTR__OBJC_CLASS___NSDate_026cdf88,
             PTR_s_dateWithTimeIntervalSinceNow__0269cf50);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  while( true ) {
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
    local_41 = 0;
    FUN_005a32d4();
    bVar1 = false;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar3 == (undefined *)0xffffffffffffffff;
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    puVar3 = PTR___dispatch_main_q_02578680;
    if (!bVar1) break;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc3333333333333,PTR__OBJC_CLASS___NSThread_026ce0a8,
               PTR_s_sleepForTimeInterval__0269d9e8);
  }
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_005d06e8;
  local_60 = &DAT_025797f0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar4;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  _dispatch_async(puVar3,&local_78);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_28,0);
  return;
}

