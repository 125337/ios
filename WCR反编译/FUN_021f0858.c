// FUN_021f0858 @ 021f0858

/* WARNING: Removing unreachable block (ram,0x021f0c30) */
/* WARNING: Removing unreachable block (ram,0x021f0a48) */
/* WARNING: Removing unreachable block (ram,0x021f0e50) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_021f0858(double param_1,long param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  bool bVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 *******pppppppuVar6;
  undefined8 uVar7;
  double local_420;
  double local_3f8;
  long local_3d8;
  long local_3d0;
  undefined8 local_390;
  double local_388;
  double local_370;
  undefined8 *******local_350;
  undefined8 *******local_348;
  long local_308;
  long local_2f0;
  long local_2d0;
  long local_2c8;
  long local_290;
  undefined8 local_288;
  long local_270;
  long local_250;
  long local_248;
  long local_210;
  long local_208;
  undefined8 *******local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double local_1d8;
  undefined1 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [24];
  undefined8 ******appppppuStack_1a0 [3];
  long local_188;
  long local_180;
  double local_178 [3];
  double local_160;
  undefined1 auStack_158 [24];
  double local_140;
  undefined1 local_138;
  char *local_130;
  undefined8 local_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90;
  long local_88;
  long local_80;
  undefined1 local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long local_30;
  long local_28;
  
  local_88 = 0;
  local_e8 = 0;
  local_160 = 0.0;
  local_1e0 = 0.0;
  pcVar4 = "ballAppearance";
  uVar7 = 0xe;
  local_28 = param_2;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("ballAppearance",0xe,1);
  puVar1 = (undefined8 *)(param_2 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_60,0x20,0);
  local_70 = pcVar4;
  local_68 = uVar7;
  __sSDyq_Sgxcig(auStack_48,&local_70,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_70);
  _swift_endAccess(auStack_60);
  if (local_30 == 0) {
    FUN_021c7fc0(auStack_48);
    local_248 = 0;
  }
  else {
    uVar7 = 0;
    FUN_021c80bc(0);
    plVar5 = &local_210;
    _swift_dynamicCast(plVar5,auStack_48,PTR___sypN_02578b08 + 8,uVar7,6);
    if (((ulong)plVar5 & 1) == 0) {
      local_250 = 0;
    }
    else {
      local_250 = local_210;
    }
    local_248 = local_250;
  }
  bVar3 = local_248 == 0;
  if (bVar3) {
    local_270 = 0;
  }
  else {
    local_270 = local_248;
    FUN_02222880(local_248,local_288);
    (*(code *)PTR__objc_release_02578630)(local_248);
  }
  local_80 = local_270;
  if (bVar3) {
    local_290 = 0;
  }
  else {
    local_290 = local_270;
  }
  local_88 = local_290;
  pcVar4 = "triggerMode";
  uVar7 = 0xb;
  local_78 = bVar3;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("triggerMode",0xb,1);
  puVar1 = (undefined8 *)(param_2 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_c0,0x20,0);
  local_d0 = pcVar4;
  local_c8 = uVar7;
  __sSDyq_Sgxcig(auStack_a8,&local_d0,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_d0);
  _swift_endAccess(auStack_c0);
  if (local_90 == 0) {
    FUN_021c7fc0(auStack_a8);
    local_2c8 = 0;
  }
  else {
    uVar7 = 0;
    FUN_021c80bc(0);
    plVar5 = &local_208;
    _swift_dynamicCast(plVar5,auStack_a8,PTR___sypN_02578b08 + 8,uVar7,6);
    if (((ulong)plVar5 & 1) == 0) {
      local_2d0 = 0;
    }
    else {
      local_2d0 = local_208;
    }
    local_2c8 = local_2d0;
  }
  bVar3 = local_2c8 == 0;
  if (bVar3) {
    local_2f0 = 0;
  }
  else {
    local_2f0 = local_2c8;
    FUN_02222880(local_2c8,local_288);
    (*(code *)PTR__objc_release_02578630)(local_2c8);
  }
  local_e0 = local_2f0;
  if (bVar3) {
    local_308 = 0;
  }
  else {
    local_308 = local_2f0;
  }
  local_e8 = local_308;
  local_d8 = bVar3;
  if (local_290 == 0 || local_308 == 1) {
    pcVar4 = "shortLineWidth";
    uVar7 = 0xe;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("shortLineWidth",0xe,1);
    puVar1 = (undefined8 *)(param_2 + WCRSuperFloatFanMenuView::config);
    _swift_beginAccess(puVar1,auStack_1b8,0x20,0);
    local_1c8 = pcVar4;
    local_1c0 = uVar7;
    __sSDyq_Sgxcig(appppppuStack_1a0,&local_1c8,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_1c8);
    _swift_endAccess(auStack_1b8);
    if (local_188 == 0) {
      pppppppuVar6 = appppppuStack_1a0;
      FUN_021c7fc0(pppppppuVar6);
      local_348 = (undefined8 *******)0x0;
    }
    else {
      uVar7 = 0;
      FUN_021c80bc(0);
      pppppppuVar6 = &local_200;
      _swift_dynamicCast(pppppppuVar6,appppppuStack_1a0,PTR___sypN_02578b08 + 8,uVar7,6);
      if (((ulong)pppppppuVar6 & 1) == 0) {
        local_350 = (undefined8 *******)0x0;
      }
      else {
        local_350 = local_200;
      }
      local_348 = local_350;
    }
    bVar3 = local_348 == (undefined8 *******)0x0;
    if (bVar3) {
      local_370 = 0.0;
    }
    else {
      FUN_02222360(local_348,local_288);
      (*(code *)PTR__objc_release_02578630)(local_348);
      pppppppuVar6 = local_348;
      local_370 = param_1;
    }
    local_1d8 = local_370;
    if (bVar3) {
      local_388 = 5.0;
    }
    else {
      local_388 = local_370;
    }
    local_1e0 = local_388;
    local_1f0 = local_388 * 0.5 + 1.0;
    local_1f8 = 0x4010000000000000;
    local_1d0 = bVar3;
    FUN_021c8058();
    __ss3maxyxx_xtSLRzlF
              (&local_1e8,&local_1f0,&local_1f8,PTR___s12CoreGraphics7CGFloatVN_02578ba0,
               pppppppuVar6);
    local_390 = local_1e8;
  }
  else {
    pcVar4 = "ballSize";
    uVar7 = 8;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("ballSize",8,1);
    puVar1 = (undefined8 *)(param_2 + WCRSuperFloatFanMenuView::config);
    _swift_beginAccess(puVar1,auStack_120,0x20,0);
    local_130 = pcVar4;
    local_128 = uVar7;
    __sSDyq_Sgxcig(auStack_108,&local_130,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_130);
    _swift_endAccess(auStack_120);
    if (local_f0 == 0) {
      FUN_021c7fc0(auStack_108);
      local_3d0 = 0;
    }
    else {
      uVar7 = 0;
      FUN_021c80bc(0);
      plVar5 = &local_180;
      _swift_dynamicCast(plVar5,auStack_108,PTR___sypN_02578b08 + 8,uVar7,6);
      if (((ulong)plVar5 & 1) == 0) {
        local_3d8 = 0;
      }
      else {
        local_3d8 = local_180;
      }
      local_3d0 = local_3d8;
    }
    bVar3 = local_3d0 == 0;
    if (bVar3) {
      local_3f8 = 0.0;
    }
    else {
      FUN_02222360(local_3d0,local_288);
      (*(code *)PTR__objc_release_02578630)(local_3d0);
      local_3f8 = param_1;
    }
    (*(code *)PTR__objc_retain_02578638)(param_2);
    local_140 = local_3f8;
    local_138 = bVar3;
    if (bVar3) {
      pdVar2 = (double *)(param_2 + WCRSuperFloatFanMenuView::buttonSize);
      _swift_beginAccess(pdVar2,auStack_158,0x20,0);
      local_420 = *pdVar2;
      _swift_endAccess(auStack_158);
      (*(code *)PTR__objc_release_02578630)(param_2);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(param_2);
      local_420 = local_140;
    }
    local_160 = local_420;
    local_178[1] = 14.0;
    local_178[0] = local_420 * 0.5;
    FUN_021c8058();
    __ss3maxyxx_xtSLRzlF
              (local_178 + 2,local_178 + 1,local_178,PTR___s12CoreGraphics7CGFloatVN_02578ba0,
               param_2);
    local_390 = local_178[2];
  }
  return local_390;
}

