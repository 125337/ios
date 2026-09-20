// FUN_02203200 @ 02203200

/* WARNING: Removing unreachable block (ram,0x02203c24) */
/* WARNING: Removing unreachable block (ram,0x02203c20) */
/* WARNING: Removing unreachable block (ram,0x02203478) */
/* WARNING: Removing unreachable block (ram,0x02203600) */

long FUN_02203200(undefined8 param_1,long param_2,long param_3,code *param_4,uint param_5)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  int iVar10;
  long local_458;
  long local_418;
  undefined8 local_3d0;
  long local_328;
  long local_320;
  long local_308;
  long local_2f0;
  long local_2d0;
  long local_2c8;
  long local_2b0;
  undefined8 local_2a8;
  long local_290;
  long local_270;
  long local_268;
  long local_240;
  long local_238;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  code *local_1e8;
  code *local_1e0;
  code *local_1d8;
  long local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  byte local_1a0;
  code *local_198;
  code *local_190;
  undefined1 auStack_188 [32];
  char *local_168;
  undefined8 local_160;
  undefined1 auStack_158 [24];
  long local_140;
  code *local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined1 local_118;
  char *local_110;
  undefined8 local_108;
  undefined1 auStack_100 [24];
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  long local_90;
  long local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_88 = 0;
  local_d0 = 0;
  local_130 = 0;
  local_138 = (code *)0x0;
  local_1c8 = 0;
  local_1e0 = (code *)0x0;
  FUN_02205614(param_1,auStack_80);
  if (local_68 == 0) {
    FUN_021c7fc0(auStack_80);
    local_240 = 0;
  }
  else {
    puVar3 = &DAT_028c6d50;
    FUN_021c77d4(&DAT_028c6d50,&DAT_0233a7f8);
    plVar4 = &local_208;
    _swift_dynamicCast(plVar4,auStack_80,PTR___sypN_02578b08 + 8,puVar3,6);
    if (((ulong)plVar4 & 1) == 0) {
      local_238 = 0;
    }
    else {
      local_238 = local_208;
    }
    local_240 = local_238;
  }
  if (local_240 == 0) {
    if ((param_5 & 1) == 0) {
      local_458 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_4);
      FUN_021fd460();
      local_458 = param_2;
    }
    local_418 = local_458;
  }
  else {
    local_88 = local_240;
    pcVar5 = "row";
    uVar9 = 3;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("row",3,1);
    local_b8 = pcVar5;
    local_b0 = uVar9;
    __sSDyq_Sgxcig(auStack_a8,&local_b8,local_240,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_b8);
    if (local_90 == 0) {
      FUN_021c7fc0(auStack_a8);
      local_270 = 0;
    }
    else {
      uVar9 = 0;
      FUN_021c80bc(0);
      plVar4 = &local_200;
      _swift_dynamicCast(plVar4,auStack_a8,PTR___sypN_02578b08 + 8,uVar9,6);
      if (((ulong)plVar4 & 1) == 0) {
        local_268 = 0;
      }
      else {
        local_268 = local_200;
      }
      local_270 = local_268;
    }
    bVar1 = local_270 == 0;
    if (bVar1) {
      local_290 = 0;
    }
    else {
      local_290 = local_270;
      FUN_02222880(local_270,local_2a8);
      (*(code *)PTR__objc_release_02578630)(local_270);
    }
    local_c8 = local_290;
    local_2b0 = param_2;
    if (!bVar1) {
      local_2b0 = local_290;
    }
    local_d0 = local_2b0;
    local_e0 = 1;
    pcVar5 = "frames";
    uVar9 = 6;
    local_c0 = bVar1;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("frames",6,1);
    local_110 = pcVar5;
    local_108 = uVar9;
    __sSDyq_Sgxcig(auStack_100,&local_110,local_240,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_110);
    if (local_e8 == 0) {
      FUN_021c7fc0(auStack_100);
      local_2d0 = 0;
    }
    else {
      uVar9 = 0;
      FUN_021c80bc(0);
      plVar4 = &local_1f8;
      _swift_dynamicCast(plVar4,auStack_100,PTR___sypN_02578b08 + 8,uVar9,6);
      if (((ulong)plVar4 & 1) == 0) {
        local_2c8 = 0;
      }
      else {
        local_2c8 = local_1f8;
      }
      local_2d0 = local_2c8;
    }
    bVar1 = local_2d0 == 0;
    if (bVar1) {
      local_2f0 = 0;
    }
    else {
      local_2f0 = local_2d0;
      FUN_02222880(local_2d0,local_2a8);
      (*(code *)PTR__objc_release_02578630)(local_2d0);
    }
    local_120 = local_2f0;
    local_308 = param_3;
    if (!bVar1) {
      local_308 = local_2f0;
    }
    local_128 = local_308;
    local_118 = bVar1;
    __ss3maxyxx_xtSLRzlF(&local_d8,&local_e0,&local_128,PTR___sSiN_025789d8,PTR___sSiSLsWP_025789e8)
    ;
    local_130 = local_d8;
    _swift_bridgeObjectRetain(param_4);
    pcVar5 = "durationsMs";
    uVar9 = 0xb;
    local_138 = param_4;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("durationsMs",0xb,1);
    local_168 = pcVar5;
    local_160 = uVar9;
    __sSDyq_Sgxcig(auStack_158,&local_168,local_240,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_168);
    if (local_140 == 0) {
      FUN_021c7fc0(auStack_158);
      local_328 = 0;
    }
    else {
      puVar3 = &DAT_028c73d8;
      FUN_021c77d4(&DAT_028c73d8,&DAT_0233b6d0);
      plVar4 = &local_1f0;
      _swift_dynamicCast(plVar4,auStack_158,PTR___sypN_02578b08 + 8,puVar3,6);
      if (((ulong)plVar4 & 1) == 0) {
        local_320 = 0;
      }
      else {
        local_320 = local_1f0;
      }
      local_328 = local_320;
    }
    if (local_328 != 0) {
      local_1c8 = local_328;
      local_1d0 = local_328;
      puVar3 = &DAT_028c73d8;
      FUN_021c77d4(&DAT_028c73d8,&DAT_0233b6d0);
      puVar6 = puVar3;
      FUN_022058f8();
      pcVar7 = FUN_02205808;
      __sSTsE10compactMapySayqd__Gqd__Sg7ElementQzKXEKlF
                (FUN_02205808,0,puVar3,PTR___sSdN_025789b8,puVar6);
      puVar3 = &DAT_028c73b0;
      local_1d8 = pcVar7;
      FUN_021c77d4(&DAT_028c73b0,&DAT_0233b6c0);
      puVar6 = puVar3;
      FUN_022056ac();
      pcVar7 = FUN_0220596c;
      FUN_021b8da8(FUN_0220596c,0,puVar3,PTR___sSdN_025789b8,PTR___ss5NeverON_02578ab8,puVar6,
                   PTR___ss5NeverOs5ErrorsWP_02578ac0,local_2a8);
      FUN_02205684(&local_1d8);
      local_1e8 = pcVar7;
      local_1e0 = pcVar7;
      __sSlsE7isEmptySbvg(puVar3,puVar6);
      if (((ulong)puVar3 & 1) == 0) {
        _swift_bridgeObjectRetain(pcVar7);
        pcVar8 = local_138;
        local_138 = pcVar7;
        _swift_bridgeObjectRelease(pcVar8);
      }
      _swift_bridgeObjectRelease(pcVar7);
      _swift_bridgeObjectRelease(local_328);
    }
    while( true ) {
      pcVar7 = local_138;
      _swift_bridgeObjectRetain();
      pcVar8 = pcVar7;
      __sSa5countSivg(pcVar7,PTR___sSdN_025789b8);
      _swift_bridgeObjectRelease(pcVar7);
      pcVar7 = local_138;
      if (local_d8 <= (long)pcVar8) break;
      _swift_bridgeObjectRetain((long)pcVar8 - local_d8);
      local_198 = pcVar7;
      puVar3 = &DAT_028c73b0;
      FUN_021c77d4(&DAT_028c73b0,&DAT_0233b6c0);
      puVar6 = puVar3;
      FUN_02205794();
      __sSKsE4last7ElementQzSgvg(&local_1a8,puVar3,puVar6);
      bVar2 = local_1a0;
      local_3d0 = local_1a8;
      _swift_bridgeObjectRelease(pcVar7);
      local_1b8 = local_3d0;
      iVar10 = bVar2 - 1;
      if (iVar10 == 0) {
        if (bVar2 == 1) {
          iVar10 = 0x2323000;
          local_3d0 = DAT_02323cc0;
        }
        else {
          iVar10 = 0x2323000;
          local_3d0 = DAT_02323cc0;
        }
      }
      else {
      }
      local_1c0 = local_3d0;
      __sSa6appendyyxnF(iVar10,&local_1c0,puVar3);
    }
    _swift_bridgeObjectRetain((long)pcVar8 - local_d8);
    pcVar8 = pcVar7;
    __sSa5countSivg(pcVar7,PTR___sSdN_025789b8);
    _swift_bridgeObjectRelease(pcVar7);
    pcVar7 = local_138;
    if (local_d8 < (long)pcVar8) {
      _swift_bridgeObjectRetain(local_d8 - (long)pcVar8);
      local_190 = pcVar7;
      puVar3 = &DAT_028c73b0;
      FUN_021c77d4(&DAT_028c73b0,&DAT_0233b6c0);
      puVar6 = puVar3;
      FUN_022056ac();
      pcVar7 = (code *)auStack_188;
      __sSlsE6prefixy11SubSequenceQzSiF(local_d8,puVar3,puVar6);
      puVar3 = &DAT_028c73c0;
      FUN_021c77d4(&DAT_028c73c0,&DAT_0233b6c8);
      puVar6 = puVar3;
      FUN_02205720();
      __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC(pcVar7,PTR___sSdN_025789b8,puVar3,puVar6);
      pcVar8 = local_138;
      local_138 = pcVar7;
      _swift_bridgeObjectRelease(pcVar8);
    }
    _swift_bridgeObjectRetain();
    FUN_021fd460();
    FUN_02205684(&local_138);
    _swift_bridgeObjectRelease(local_240);
    local_418 = local_2b0;
  }
  return local_418;
}

