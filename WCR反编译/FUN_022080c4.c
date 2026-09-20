// FUN_022080c4 @ 022080c4

/* WARNING: Removing unreachable block (ram,0x022081c0) */

void FUN_022080c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *******param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 local_1f0;
  uint local_1c4;
  uint local_180;
  uint local_17c;
  undefined8 local_120;
  long lStack_118;
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f8;
  undefined8 ******local_f0;
  undefined8 local_e8;
  long lStack_e0;
  undefined1 auStack_d8 [30];
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 auStack_b8 [30];
  undefined1 local_9a;
  undefined1 local_99;
  ulong local_98;
  undefined8 ******local_90;
  undefined8 ******local_88;
  undefined1 local_80;
  undefined8 ******local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_80 = 0;
  local_88 = (undefined8 ******)0x0;
  local_98 = 0;
  local_90 = (undefined8 ******)0x0;
  local_70 = 0;
  local_68 = 3;
  pppppppuVar5 = &local_78;
  puVar4 = &DAT_028c71e8;
  local_78 = param_7;
  FUN_021c77d4(&DAT_028c71e8,&DAT_0233bde0);
  __sSN8containsySbxF(pppppppuVar5,puVar4);
  if (((ulong)pppppppuVar5 & 1) == 0) {
    local_180 = 0;
  }
  else {
    FUN_02206c34();
    if ((byte)param_7 == 4) {
      local_17c = 0;
    }
    else {
      local_17c = (uint)(byte)param_7;
    }
    local_180 = local_17c;
    pppppppuVar5 = param_7;
  }
  uVar3 = (undefined1)local_180;
  local_80 = uVar3;
  FUN_02208614();
  uVar6 = (ulong)local_180;
  pppppppuVar9 = pppppppuVar5;
  local_88 = pppppppuVar5;
  FUN_02208754(param_1,param_2,param_3,param_4,param_5);
  local_98 = uVar6;
  local_90 = pppppppuVar9;
  FUN_02208c4c(param_1,param_2,param_3,param_4,param_5,pppppppuVar5);
  local_9a = 0;
  local_99 = uVar3;
  if (local_180 == 0) goto LAB_02208410;
  _swift_bridgeObjectRetain(local_180,pppppppuVar9);
  puVar1 = (undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::lastSignature);
  _swift_beginAccess(puVar1,auStack_d8,0x20,0);
  uVar10 = *puVar1;
  lVar7 = puVar1[1];
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_d8);
  local_f8 = uVar6;
  local_f0 = pppppppuVar9;
  local_e8 = uVar10;
  lStack_e0 = lVar7;
  if (pppppppuVar9 == (undefined8 *******)0x0) {
    if (lVar7 != 0) goto LAB_022083a8;
    FUN_021c811c(&local_f8);
    local_1c4 = 1;
  }
  else {
    FUN_021c848c(&local_f8,&local_108);
    if (lStack_e0 == 0) {
      FUN_021c7f98(&local_108);
LAB_022083a8:
      FUN_021c8458(&local_f8);
      local_1c4 = 0;
    }
    else {
      lStack_118 = lStack_e0;
      local_120 = local_e8;
      __sSS2eeoiySbSS_SStFZ(local_108,local_100,local_e8,lStack_e0);
      local_1c4 = (uint)local_108;
      FUN_021c7f98(&local_120);
      FUN_021c7f98(&local_108);
      FUN_021c811c(&local_f8);
    }
  }
  if ((local_1c4 & 1) != 0) {
    uVar8 = (ulong)local_180;
    FUN_022092ec();
    if ((uVar8 & 1) != 0) {
      _swift_bridgeObjectRelease(pppppppuVar9);
      (*(code *)PTR__objc_release_02578630)(pppppppuVar5);
      return;
    }
  }
LAB_02208410:
  _swift_bridgeObjectRetain(pppppppuVar9);
  puVar2 = (ulong *)(unaff_x20 + WCRefineFloatingGlowView::lastSignature);
  _swift_beginAccess(puVar2,auStack_b8,0x21,0);
  uVar8 = puVar2[1];
  *puVar2 = uVar6;
  puVar2[1] = (ulong)pppppppuVar9;
  _swift_bridgeObjectRelease(uVar8);
  _swift_endAccess(auStack_b8);
  FUN_02207ed4();
  local_ba = 0;
  local_b9 = uVar3;
  if (local_180 == 0) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02223100(unaff_x20,local_1f0,1);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222cc0(0,unaff_x20,local_1f0);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_02209d3c();
    _swift_bridgeObjectRelease(pppppppuVar9);
    (*(code *)PTR__objc_release_02578630)(pppppppuVar5);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02223100(unaff_x20,local_1f0,0);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222cc0(0x3ff0000000000000,unaff_x20,local_1f0);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    if (local_180 != 0) {
      if (local_180 == 1) {
        FUN_02209ebc(0,pppppppuVar5);
      }
      else if (local_180 == 2) {
        FUN_0220ab2c(0,pppppppuVar5);
      }
      else {
        FUN_0220bb5c(pppppppuVar5);
      }
    }
    _swift_bridgeObjectRelease(pppppppuVar9);
    (*(code *)PTR__objc_release_02578630)(pppppppuVar5);
  }
  return;
}

