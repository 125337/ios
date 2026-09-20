// FUN_00f5ddcc @ 00f5ddcc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f5ddcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  byte local_69;
  double local_68;
  undefined *local_60;
  undefined *local_58;
  int local_4c;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = param_1 + 0x28;
  local_40 = param_1;
  _objc_loadWeakRetained();
  local_48 = lVar1;
  if (lVar1 == 0) {
    local_4c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___CLLocation_026ceb88;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    puVar3 = PTR__OBJC_CLASS___CLLocation_026ceb88;
    local_58 = puVar2;
    _objc_alloc();
    dVar5 = *(double *)(param_1 + 0x40);
    (*(code *)PTR__objc_msgSend_02578628)(dVar5,*(undefined8 *)(param_1 + 0x48));
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_distanceFromLocation__026ac620,puVar3);
    local_69 = 0;
    local_68 = dVar5;
    if (local_30 == 0) {
      local_69 = 1;
    }
    else if ((((*(byte *)(param_1 + 0x60) & 1) != 0) && (200.0 < dVar5)) &&
            ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_distance_026ac6f8),
            local_68 * 4.0 < dVar5)) {
      local_69 = 1;
    }
    lVar1 = local_48;
    if (((local_69 & 1) == 0) && (local_30 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),local_48,
                 PTR_s_applyMKRoute_start_destination_t_026ac758,local_30,
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20));
      local_4c = 1;
    }
    else if (*(long *)(param_1 + 0x58) == 1) {
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_00f5e21c;
      local_80 = &DAT_02582318;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar1,
                 PTR_s_applyStraightRouteFrom_to_comple_026ac750,&local_98);
      local_4c = 1;
      _objc_storeStrong(&local_78,0);
    }
    else {
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_00f5e2d0;
      local_d8 = &DAT_02583338;
      _objc_copyWeak(auStack_c8,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x38);
      local_c0 = *(undefined8 *)(param_1 + 0x30);
      uStack_a8 = *(undefined8 *)(param_1 + 0x48);
      local_b0 = *(undefined8 *)(param_1 + 0x40);
      local_a0 = *(undefined8 *)(param_1 + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar1,
                 PTR_s_requestMKDirectionsFrom_to_mkTra_026ac760,1,&local_f0);
      _objc_storeStrong(&local_d0,0);
      _objc_destroyWeak(auStack_c8);
      local_4c = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

