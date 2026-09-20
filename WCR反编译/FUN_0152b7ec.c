// FUN_0152b7ec @ 0152b7ec

void FUN_0152b7ec(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined **local_88 [3];
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 *local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  code *local_28;
  code *local_20;
  undefined8 local_18;
  
  local_50 = &local_40;
  local_40 = 0;
  local_30 = 0x32000000;
  local_2c = 0x30;
  local_28 = FUN_01560d04;
  local_20 = FUN_01560d58;
  local_18 = 0;
  ppuVar1 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01560d84;
  local_58 = &DAT_0257c428;
  local_38 = local_50;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_48 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = local_48;
    local_a8 = PTR___NSConcreteGlobalBlock_02578658;
    local_a0 = 0xd0800000;
    local_9c = 0;
    local_98 = FUN_01560eb0;
    local_90 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_88[0] = ppuVar1;
    _dispatch_sync(puVar3,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(local_88,0);
  }
  else {
    (*(code *)local_48[2])();
  }
  uVar4 = local_38[5];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  __Block_object_dispose(&local_40,8);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

