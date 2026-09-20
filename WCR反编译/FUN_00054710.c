// FUN_00054710 @ 00054710

void FUN_00054710(undefined8 param_1,undefined8 param_2)

{
  dispatch_semaphore_t pdVar1;
  uint uVar2;
  undefined8 uVar4;
  undefined *puVar5;
  dispatch_time_t timeout;
  long lVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  dispatch_semaphore_t local_60;
  long local_58;
  undefined8 local_50;
  dispatch_semaphore_t local_48;
  undefined4 local_40;
  undefined8 local_30;
  long local_28;
  undefined8 *puVar3;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar3 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  if (local_28 == 0) {
    FUN_00056ab0(local_30);
    local_40 = 1;
  }
  else if ((((DAT_028c7b7a & 1) == 0) && ((DAT_028c7b78 & 1) != 0)) &&
          (FUN_0004c074(), (uVar2 & 1) != 0)) {
    local_48 = _dispatch_semaphore_create(0);
    lVar6 = local_28;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00056bf4;
    local_70 = &DAT_02579740;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_30;
    local_58 = lVar6;
    (*(code *)PTR__objc_retain_02578638)();
    pdVar1 = local_48;
    local_68 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = pdVar1;
    uVar4 = 0x10;
    _dispatch_block_create(0x10,&local_88);
    puVar5 = PTR___dispatch_main_q_02578680;
    local_50 = uVar4;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    timeout = _dispatch_time(0,1000000000);
    lVar6 = _dispatch_semaphore_wait(local_48,timeout);
    if (lVar6 == 0) {
      if (((DAT_028c7b7a & 1) == 0) && ((DAT_028c7b78 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fd6666666666666,PTR__OBJC_CLASS___NSThread_026ce0a8,
                   PTR_s_sleepForTimeInterval__0269d9e8);
        local_40 = 0;
      }
      else {
        local_40 = 1;
      }
    }
    else {
      _dispatch_block_cancel(local_50);
      FUN_0004b4d0(&cf__NRA__SSN_>mSe);
      FUN_00056ab0(local_30);
      local_40 = 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    if ((DAT_028c7b78 & 1) == 0) {
      FUN_0004b4d0(&cf___u_eQ__mr_);
    }
    FUN_00056ab0(local_30);
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

