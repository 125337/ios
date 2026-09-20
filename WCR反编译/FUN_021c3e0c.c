// FUN_021c3e0c @ 021c3e0c

void FUN_021c3e0c(long param_1,byte param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long local_50;
  undefined1 auStack_48 [24];
  byte local_30;
  long local_28;
  
  local_50 = 0;
  param_1 = param_1 + 0x10;
  local_30 = param_2 & 1;
  local_28 = param_1;
  _swift_beginAccess(param_1,auStack_48,0x20,0);
  _swift_unknownObjectWeakLoadStrong();
  _swift_endAccess(auStack_48);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + WCRSuperFloatBallWindow::snapAfterIdleWorkItem);
    local_50 = param_1;
    _swift_beginAccess(puVar1,auStack_68,0x21);
    uVar4 = *puVar1;
    *puVar1 = 0;
    _swift_release(uVar4);
    _swift_endAccess(auStack_68);
    pbVar2 = (byte *)(param_1 + WCRSuperFloatBallWindow::autoSnapEnabled);
    _swift_beginAccess(pbVar2,auStack_80,0x20,0);
    bVar3 = *pbVar2;
    _swift_endAccess(auStack_80);
    if ((bVar3 & 1) != 0) {
      pbVar2 = (byte *)(param_1 + WCRSuperFloatBallWindow::menuExpanded);
      _swift_beginAccess(pbVar2,auStack_98,0x20,0);
      bVar3 = *pbVar2;
      _swift_endAccess(auStack_98);
      if ((bVar3 & 1) == 0) {
        FUN_021b998c(param_2 & 1);
        (*(code *)PTR__objc_release_02578630)(param_1);
        return;
      }
    }
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

