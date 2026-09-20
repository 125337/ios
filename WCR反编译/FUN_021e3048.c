// FUN_021e3048 @ 021e3048

/* WARNING: Removing unreachable block (ram,0x021e31ec) */
/* WARNING: Removing unreachable block (ram,0x021e33c8) */

undefined8 FUN_021e3048(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d0;
  undefined8 **local_1b0;
  undefined8 **local_1a8;
  uint local_174;
  undefined8 local_170;
  uint local_15c;
  long local_148;
  long local_140;
  long local_108;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  undefined8 *apuStack_b8 [3];
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  byte local_78;
  char local_71;
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long local_30;
  
  local_78 = 0;
  pcVar4 = "menuStrokeEnabled";
  uVar8 = 0x11;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuStrokeEnabled",0x11,1)
  ;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_60,0x20,0);
  local_70 = pcVar4;
  local_68 = uVar8;
  __sSDyq_Sgxcig(auStack_48,&local_70,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_70);
  _swift_endAccess(auStack_60);
  if (local_30 == 0) {
    FUN_021c7fc0(auStack_48);
    local_148 = 0;
  }
  else {
    uVar8 = 0;
    FUN_021c80bc(0);
    plVar5 = &local_108;
    _swift_dynamicCast(plVar5,auStack_48,PTR___sypN_02578b08 + 8,uVar8,6);
    if (((ulong)plVar5 & 1) == 0) {
      local_140 = 0;
    }
    else {
      local_140 = local_108;
    }
    local_148 = local_140;
  }
  if (local_148 == 0) {
    local_15c = 2;
  }
  else {
    lVar6 = local_148;
    FUN_02222040(local_148,local_170);
    local_15c = (uint)lVar6;
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  local_71 = (char)local_15c;
  if (local_71 == '\x02') {
    local_174 = 1;
  }
  else {
    local_174 = local_15c & 0xff;
  }
  local_78 = (byte)local_174 & 1;
  if ((local_174 & 1) == 0) {
    local_1f0 = 0;
  }
  else {
    local_88 = 0;
    local_1d0 = 0x4018000000000000;
    local_98 = 0x4018000000000000;
    pcVar4 = "menuStrokeWidth";
    uVar8 = 0xf;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuStrokeWidth",0xf,1);
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
    _swift_beginAccess(puVar1,auStack_d0,0x20,0);
    local_e0 = pcVar4;
    local_d8 = uVar8;
    __sSDyq_Sgxcig(apuStack_b8,&local_e0,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_e0);
    _swift_endAccess(auStack_d0);
    if (local_a0 == 0) {
      pppuVar7 = (undefined8 ***)apuStack_b8;
      FUN_021c7fc0();
      local_1b0 = (undefined8 ***)0x0;
    }
    else {
      uVar8 = 0;
      FUN_021c80bc(0);
      pppuVar7 = &local_100;
      _swift_dynamicCast(pppuVar7,apuStack_b8,PTR___sypN_02578b08 + 8,uVar8,6);
      if (((ulong)pppuVar7 & 1) == 0) {
        local_1a8 = (undefined8 ***)0x0;
      }
      else {
        local_1a8 = local_100;
      }
      local_1b0 = local_1a8;
    }
    bVar2 = (undefined8 ***)local_1b0 == (undefined8 ***)0x0;
    if (bVar2) {
      local_1d0 = 0;
    }
    else {
      FUN_02222360(local_1b0,local_170);
      (*(code *)PTR__objc_release_02578630)();
      pppuVar7 = (undefined8 ***)local_1b0;
    }
    local_f0 = local_1d0;
    if (bVar2) {
      local_1e8 = DAT_02323d00;
    }
    else {
      local_1e8 = local_1d0;
    }
    local_f8 = local_1e8;
    local_e8 = bVar2;
    FUN_021c8058();
    puVar3 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
    __ss3minyxx_xtSLRzlF(&local_98,&local_f8);
    __ss3maxyxx_xtSLRzlF(&local_80,&local_88,auStack_90,puVar3,pppuVar7);
    local_1f0 = local_80;
  }
  return local_1f0;
}

