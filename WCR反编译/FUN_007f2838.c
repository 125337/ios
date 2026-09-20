// FUN_007f2838 @ 007f2838

void FUN_007f2838(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  code *local_38;
  undefined8 local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  lVar2 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  _objc_autoreleasePoolPush();
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_WCRefineToDo_tryInstall_026a87c8);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_50 = &local_58;
    local_58 = 0;
    local_48 = 0x32000000;
    local_44 = 0x30;
    local_40 = FUN_007f2a5c;
    local_38 = FUN_007f2ab0;
    local_30 = 0;
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)PTR__UIApplicationDidFinishLaunchingNotification_025780c0;
    puVar5 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_007f2adc;
    local_78 = &DAT_0257c458;
    local_70 = &local_58;
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_addObserverForName_object_queue__026ca4b0,uVar7,0,puVar5,&local_90);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = local_50[5];
    local_50[5] = puVar6;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    __Block_object_dispose(&local_58,8);
    _objc_storeStrong(&local_30,0);
  }
  local_24 = (uint)!bVar1;
  _objc_autoreleasePoolPop(lVar2);
  return;
}

