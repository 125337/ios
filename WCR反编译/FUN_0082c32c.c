// FUN_0082c32c @ 0082c32c

void FUN_0082c32c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong local_138;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  uVar1 = param_3;
  local_30 = param_3;
  local_28 = param_3;
  _objc_autoreleasePoolPush();
  uVar2 = uVar1;
  FUN_0082ba38();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_38 == 0) {
    uVar3 = *(ulong *)(param_3 + 0x20);
    dVar7 = *(double *)(param_3 + 0x50);
    FUN_0082c88c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_38 != 0) {
      local_58 = 1;
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_images_026ca698);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_138 = uVar3;
      if (uVar3 <= local_58) {
        local_138 = local_58;
      }
      local_68 = local_138;
      local_50 = local_138;
      local_60 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
      dVar10 = dVar7;
      local_80 = dVar7;
      local_78 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scale_026ca830);
      dVar7 = dVar7 * dVar10;
      dVar8 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
      dVar7 = dVar7 * dVar10;
      uVar2 = local_38;
      dVar9 = dVar7;
      local_90 = dVar8;
      local_88 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scale_026ca830);
      dVar10 = (double)NEON_ucvtf(local_50);
      local_70 = (long)(dVar7 * dVar9 * 4.0 * dVar10);
      FUN_0082ba38();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = 0xc2000000;
  local_e4 = 0;
  local_e0 = FUN_0082d1f4;
  local_d8 = &DAT_025806c0;
  _objc_copyWeak(auStack_a8,param_3 + 0x40);
  _objc_copyWeak(auStack_a0,param_3 + 0x48);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_38;
  local_d0 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = uVar2;
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = *(undefined8 *)(param_3 + 0x58);
  uVar6 = *(undefined8 *)(param_3 + 0x38);
  local_c0 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  local_b8 = uVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = uVar5;
  _dispatch_async(puVar4,&local_f0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_a8);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleasePoolPop(uVar1);
  return;
}

