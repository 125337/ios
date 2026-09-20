// FUN_00f46e98 @ 00f46e98

/* WARNING: Removing unreachable block (ram,0x00f4715c) */

void FUN_00f46e98(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  byte local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined **local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  byte local_40;
  undefined **local_38;
  long local_30;
  long local_28;
  
  puVar5 = PTR___NSConcreteStackBlock_02578660;
  ppuVar2 = &local_68;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_00f47320;
  local_50 = &DAT_02582e28;
  local_40 = *(byte *)(param_1 + 0x38) & 1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  _objc_retainBlock();
  ppuVar4 = &local_a8;
  local_a8 = puVar5;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_00f473e8;
  local_90 = &DAT_0257cb48;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_38 = ppuVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_88 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  ppuVar2 = local_38;
  local_80 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = ppuVar2;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  local_70 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_authorizationStatus_026a1770);
  puVar6 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  local_b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,
             PTR_s_authorizationStatusForAccessLeve_026a1760,1);
  ppuVar2 = local_70;
  puVar5 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  local_b0 = puVar6;
  if ((puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) ||
     ((dword *)puVar6 == &MACH_HEADER.cputype)) {
    (*(code *)local_70[2])();
    local_b4 = 1;
  }
  else if (puVar6 == (undefined1 *)0x0) {
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_00f47980;
    local_d0 = &DAT_02582eb8;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = ppuVar2;
    local_b8 = *(byte *)(param_1 + 0x38) & 1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_requestAuthorizationForAccessLev_026a1768,1,&local_e8);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_c8,0);
    local_b4 = 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf_AQvQ);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    }
    local_b4 = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_48,0);
  return;
}

