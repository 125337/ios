// FUN_007fa220 @ 007fa220

/* WARNING: Type propagation algorithm not settling */

void FUN_007fa220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_44;
  long local_40 [3];
  undefined8 uStack_28;
  
  local_40[1] = 0;
  local_40[2] = param_1;
  uStack_28 = param_2;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  lVar2 = local_40[0];
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  bVar1 = local_40[0] != 0;
  if (bVar1) {
    local_80 = PTR___NSConcreteGlobalBlock_02578658;
    local_78 = 0xd0800000;
    local_74 = 0;
    local_70 = FUN_008026a0;
    local_68 = &DAT_02580460;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar2;
    uStack_50 = uStack_28;
    local_58 = local_40[2];
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_performWithoutAnimation__0269e7e0);
    _objc_initWeak(auStack_88,local_40[0]);
    dVar3 = _dispatch_time(0,300000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_88);
    uStack_90 = uStack_28;
    local_98 = local_40[2];
    _dispatch_after(dVar3,puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_60,0);
  }
  local_44 = (uint)!bVar1;
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

