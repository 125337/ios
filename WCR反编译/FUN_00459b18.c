// FUN_00459b18 @ 00459b18

void FUN_00459b18(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_00459d08();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    FUN_00459e94(local_18);
    uVar2 = local_18;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_50 = PTR___NSConcreteGlobalBlock_02578658;
    local_48 = 0xd0800000;
    local_44 = 0;
    local_40 = FUN_0045a2a4;
    local_38 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_50);
    _objc_initWeak(auStack_58,local_18);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0045be74;
    local_68 = &DAT_02578da0;
    _objc_copyWeak(auStack_60,auStack_58);
    _dispatch_async(puVar3,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

