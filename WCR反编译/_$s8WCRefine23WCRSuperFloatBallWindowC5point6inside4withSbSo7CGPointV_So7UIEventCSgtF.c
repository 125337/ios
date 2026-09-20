// _$s8WCRefine23WCRSuperFloatBallWindowC5point6inside4withSbSo7CGPointV_So7UIEventCSgtF @ 021b2000

/* WARNING: Removing unreachable block (ram,0x021b26f0) */
/* WARNING: Removing unreachable block (ram,0x021b270c) */

uint __s8WCRefine23WCRSuperFloatBallWindowC5point6inside4withSbSo7CGPointV_So7UIEventCSgtF
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  long *plVar2;
  double *pdVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong unaff_x20;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint local_3b0;
  uint local_37c;
  uint local_24c;
  undefined8 local_1e0;
  undefined1 auStack_1c8 [24];
  undefined8 local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  double local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar13 = 0;
  uStack_e8 = 0;
  local_f0 = 0.0;
  uStack_d8 = 0;
  local_e0 = 0;
  dVar9 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar6 = unaff_x20;
  FUN_022228e0(unaff_x20,local_1e0);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  if ((uVar6 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02221ea0(unaff_x20,local_1e0);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    if (DAT_02323d38 <= dVar9) {
      dVar10 = DAT_02323d38;
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      uVar6 = unaff_x20;
      FUN_02222900(unaff_x20,local_1e0);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      if ((uVar6 & 1) != 0) {
        pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::isDismissingMenu);
        _swift_beginAccess(pbVar1,auStack_58,0x20,0);
        bVar5 = *pbVar1;
        _swift_endAccess(auStack_58);
        if ((bVar5 & 1) == 0) {
          pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
          _swift_beginAccess(pbVar1,auStack_70,0x20,0);
          bVar5 = *pbVar1;
          _swift_endAccess(auStack_70);
          (*(code *)PTR__objc_retain_02578638)(unaff_x20);
          if ((bVar5 & 1) == 0) {
            (*(code *)PTR__objc_release_02578630)(unaff_x20);
            bVar5 = 0;
          }
          else {
            pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::previewTouchYield);
            _swift_beginAccess(pbVar1,auStack_1c8,0x20,0);
            bVar5 = *pbVar1;
            _swift_endAccess(auStack_1c8);
            bVar5 = bVar5 ^ 1;
            (*(code *)PTR__objc_release_02578630)(unaff_x20);
          }
          if ((bVar5 & 1) == 0) {
            plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
            puVar7 = auStack_88;
            _swift_beginAccess(plVar2,puVar7,0x20,0);
            lVar8 = *plVar2;
            _swift_endAccess();
            lVar8 = lVar8 + -2;
            if (lVar8 == 0) {
              pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::lastSideRight);
              _swift_beginAccess(pbVar1,auStack_108,0x20,0);
              bVar5 = *pbVar1;
              _swift_endAccess(auStack_108);
              if ((bVar5 & 1) == 0) {
                puVar4 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::hiddenHotEdge);
                _swift_beginAccess(puVar4,auStack_120,0x20,0);
                uVar11 = *puVar4;
                uVar12 = uVar11;
                _swift_endAccess(auStack_120);
                (*(code *)PTR__objc_retain_02578638)(unaff_x20);
                FUN_02222060(unaff_x20,local_1e0);
                local_140 = uVar12;
                local_138 = dVar9;
                local_130 = uVar13;
                local_128 = param_4;
                (*(code *)PTR__objc_release_02578630)();
                local_24c = (uint)unaff_x20;
                FUN_021b0994(uVar12,dVar9,uVar13,param_4);
                local_f0 = 0.0;
                local_e0 = uVar11;
                uStack_d8 = uVar12;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)(unaff_x20);
                FUN_02222060(unaff_x20,local_1e0);
                local_160 = dVar10;
                local_158 = dVar9;
                local_150 = uVar13;
                local_148 = param_4;
                (*(code *)PTR__objc_release_02578630)(unaff_x20);
                FUN_021b0958(dVar10,dVar9);
                pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::hiddenHotEdge);
                _swift_beginAccess();
                dVar9 = *pdVar3;
                _swift_endAccess(auStack_178);
                dVar10 = dVar10 - dVar9;
                puVar4 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::hiddenHotEdge);
                _swift_beginAccess(puVar4,auStack_190,0x20,0);
                uVar11 = *puVar4;
                uVar12 = uVar11;
                _swift_endAccess(auStack_190);
                (*(code *)PTR__objc_retain_02578638)(unaff_x20);
                FUN_02222060(unaff_x20,local_1e0);
                local_1b0 = uVar12;
                local_1a8 = dVar9;
                local_1a0 = uVar13;
                local_198 = param_4;
                (*(code *)PTR__objc_release_02578630)();
                local_24c = (uint)unaff_x20;
                FUN_021b0994(uVar12,dVar9,uVar13,param_4);
                local_f0 = dVar10;
                local_e0 = uVar11;
                uStack_d8 = uVar12;
              }
              uStack_e8 = 0;
              FUN_021b1f24(param_1,param_2,local_f0,0,local_e0,uStack_d8);
            }
            else {
              FUN_021ad108(lVar8);
              local_24c = (uint)puVar7;
              if (((ulong)puVar7 & 1) == 0) {
                FUN_021b1b8c(param_1,param_2);
              }
              else {
                plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
                _swift_beginAccess(plVar2,auStack_a0,0x20,0);
                if (*plVar2 == 0) {
                  _swift_endAccess(auStack_a0);
                  local_37c = 2;
                }
                else {
                  lVar8 = *plVar2;
                  (*(code *)PTR__objc_retain_02578638)();
                  _swift_endAccess(auStack_a0);
                  FUN_02222440(lVar8,local_1e0);
                  local_c8 = dVar10;
                  local_c0 = dVar9;
                  local_b8 = uVar13;
                  local_b0 = param_4;
                  (*(code *)PTR__objc_release_02578630)();
                  local_37c = (uint)lVar8;
                  FUN_021b1f24(param_1,param_2,dVar10,dVar9,uVar13,param_4);
                  local_37c = local_37c & 1;
                }
                if ((char)local_37c == '\x02') {
                  local_3b0 = 0;
                }
                else {
                  local_3b0 = (uint)((local_37c & 1) == 1);
                }
                local_24c = local_3b0;
              }
            }
          }
          else {
            local_24c = 1;
          }
          goto LAB_021b2764;
        }
      }
    }
  }
  local_24c = 0;
LAB_021b2764:
  return local_24c & 1;
}

