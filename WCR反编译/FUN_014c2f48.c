// FUN_014c2f48 @ 014c2f48

void FUN_014c2f48(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  long local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  long local_a8;
  int local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50 [3];
  long local_38;
  long local_30;
  long local_28;
  
  lVar6 = param_1 + 0x30;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar6);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = puVar2;
  if (local_38 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_valueForKey__0269d128,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    if ((puVar2 == (undefined *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_boolValue_026ca540),
       puVar3 = PTR___dispatch_main_q_02578680, ((ulong)puVar2 & 1) != 0)) {
      local_9c = 0;
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_014c35cc;
      local_80 = &DAT_02583088;
      _objc_copyWeak(auStack_68,param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      local_78 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = *(undefined8 *)(param_1 + 0x38);
      local_70 = uVar5;
      _dispatch_async(puVar3,&local_98);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_9c = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
      _objc_destroyWeak(auStack_68);
    }
    _objc_storeStrong(&local_58,0);
    if (local_9c != 0) goto LAB_014c3438;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  _NSClassFromString();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_a8 = lVar6;
  if (lVar6 == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_014c3698;
    local_d0 = &DAT_02583088;
    _objc_copyWeak(auStack_b8,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_c8 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = *(undefined8 *)(param_1 + 0x38);
    local_c0 = uVar5;
    _dispatch_async(puVar2,&local_e8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_9c = 1;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_c8,0);
    _objc_destroyWeak(auStack_b8);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_130 = PTR___NSConcreteStackBlock_02578660;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_014c3764;
    local_118 = &DAT_02585f40;
    _objc_copyWeak(auStack_100,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_110 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = *(undefined8 *)(param_1 + 0x38);
    local_f0 = local_a8;
    local_108 = uVar5;
    _dispatch_async(puVar2,&local_130);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_108);
    _objc_storeStrong(&local_110,0);
    _objc_destroyWeak(auStack_100);
    local_9c = 0;
  }
LAB_014c3438:
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

