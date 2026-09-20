// _$s8WCRefine24WCRSuperFloatFanMenuViewC12selectAction2atSbSi_tF @ 021dcb04

undefined4 __s8WCRefine24WCRSuperFloatFanMenuViewC12selectAction2atSbSi_tF(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  undefined4 local_17c;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatFanMenuView::didFireSelect);
  _swift_beginAccess(pbVar1,auStack_48,0x20,0);
  bVar5 = *pbVar1;
  _swift_endAccess(auStack_48);
  if ((bVar5 & 1) == 0) {
    if (-1 < param_1) {
      plVar2 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::actions);
      _swift_beginAccess(plVar2,auStack_60,0x20,0);
      lVar6 = *plVar2;
      _swift_bridgeObjectRetain();
      _swift_endAccess(auStack_60);
      uVar7 = 0;
      FUN_021c9d78();
      lVar9 = lVar6;
      __sSa5countSivg();
      _swift_bridgeObjectRelease(lVar6);
      if (param_1 < lVar9) {
        puVar3 = (undefined1 *)(unaff_x20 + WCRSuperFloatFanMenuView::didFireSelect);
        _swift_beginAccess();
        *puVar3 = 1;
        _swift_endAccess(auStack_78);
        plVar2 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
        _swift_beginAccess(plVar2,auStack_90,0x21,0);
        *plVar2 = param_1;
        _swift_endAccess(auStack_90);
        FUN_021db7fc();
        plVar2 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::onSelect);
        _swift_beginAccess(plVar2,auStack_a8,0x20,0);
        if (*plVar2 == 0) {
          _swift_endAccess(auStack_a8);
        }
        else {
          pcVar8 = (code *)*plVar2;
          lVar9 = plVar2[1];
          _swift_retain(lVar9);
          _swift_endAccess(auStack_a8);
          puVar4 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actions);
          _swift_beginAccess(puVar4,auStack_c0,0x20,0);
          __sSayxSicig(&local_c8,param_1,*puVar4,uVar7);
          _swift_endAccess(auStack_c0);
          (*pcVar8)(local_c8);
          (*(code *)PTR__objc_release_02578630)(local_c8);
          _swift_release(lVar9);
        }
        return 1;
      }
    }
    local_17c = 0;
  }
  else {
    local_17c = 1;
  }
  return local_17c;
}

