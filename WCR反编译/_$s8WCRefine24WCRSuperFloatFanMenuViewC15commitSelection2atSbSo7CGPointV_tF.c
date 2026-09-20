// _$s8WCRefine24WCRSuperFloatFanMenuViewC15commitSelection2atSbSo7CGPointV_tF @ 021dc94c

uint __s8WCRefine24WCRSuperFloatFanMenuViewC15commitSelection2atSbSo7CGPointV_tF(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  uint local_104;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  
  __s8WCRefine24WCRSuperFloatFanMenuViewC15updateHighlight2atySo7CGPointV_tF();
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
  _swift_beginAccess(plVar1,auStack_50,0x20,0);
  lVar5 = *plVar1;
  _swift_endAccess(auStack_50);
  if (-1 < lVar5) {
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
    _swift_beginAccess();
    lVar6 = *plVar1;
    _swift_endAccess(auStack_68);
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::actions);
    _swift_beginAccess(plVar1,auStack_80,0x20,0);
    lVar3 = *plVar1;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_80);
    uVar4 = 0;
    FUN_021c9d78(0);
    lVar5 = lVar3;
    __sSa5countSivg(lVar3,uVar4);
    _swift_bridgeObjectRelease(lVar3);
    if (lVar6 < lVar5) {
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
      _swift_beginAccess(puVar2,auStack_98,0x20,0);
      local_104 = (uint)*puVar2;
      _swift_endAccess(auStack_98);
      __s8WCRefine24WCRSuperFloatFanMenuViewC12selectAction2atSbSi_tF();
      goto LAB_021dcaec;
    }
  }
  local_104 = 0;
LAB_021dcaec:
  return local_104 & 1;
}

