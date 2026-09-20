// FUN_021bad3c @ 021bad3c

void FUN_021bad3c(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_60 [24];
  ulong local_48;
  undefined8 local_40;
  
  local_48 = 0;
  local_40 = 0;
  FUN_021bd198();
  uVar2 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  __sSS7isEmptySbvg();
  if ((uVar2 & 1) == 0) {
    FUN_021bc7c0();
    pcVar3 = "wcr.sf.open_menu";
    uVar4 = 0x10;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("wcr.sf.open_menu",0x10,1);
    uVar2 = param_1;
    __sSS2eeoiySbSS_SStFZ(param_1,param_2,pcVar3);
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar2 & 1) == 0) {
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::onGestureActionId);
      _swift_beginAccess(plVar1,auStack_60,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_60);
      }
      else {
        pcVar5 = (code *)*plVar1;
        lVar6 = plVar1[1];
        _swift_retain(lVar6);
        _swift_endAccess(auStack_60);
        _swift_bridgeObjectRetain(param_2);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
        _swift_bridgeObjectRelease(param_2);
        (*pcVar5)(param_1);
        (*(code *)PTR__objc_release_02578630)(param_1);
        _swift_release(lVar6);
      }
      _swift_bridgeObjectRelease(param_2);
    }
    else {
      FUN_021bab7c();
      _swift_bridgeObjectRelease(param_2);
    }
  }
  else {
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}

