// FUN_021c53d0 @ 021c53d0

void FUN_021c53d0(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long local_50;
  undefined1 auStack_48 [24];
  long local_30;
  undefined8 local_28;
  
  local_50 = 0;
  param_2 = param_2 + 0x10;
  local_30 = param_2;
  local_28 = param_1;
  _swift_beginAccess(param_2,auStack_48,0x20,0);
  _swift_unknownObjectWeakLoadStrong();
  _swift_endAccess(auStack_48);
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_2 + WCRSuperFloatBallWindow::menuExpanded);
    local_50 = param_2;
    _swift_beginAccess(pbVar1,auStack_68,0x20,0);
    bVar3 = *pbVar1;
    _swift_endAccess(auStack_68);
    if ((bVar3 & 1) != 0) {
      pbVar1 = (byte *)(param_2 + WCRSuperFloatBallWindow::isDismissingMenu);
      _swift_beginAccess(pbVar1,auStack_80,0x20,0);
      bVar3 = *pbVar1;
      _swift_endAccess(auStack_80);
      if ((bVar3 & 1) == 0) {
        puVar2 = (undefined8 *)(param_2 + WCRSuperFloatBallWindow::onActionSelected);
        _swift_beginAccess(puVar2,auStack_98,0x20,0);
        uVar4 = *puVar2;
        uVar6 = puVar2[1];
        FUN_021c7530();
        _swift_endAccess(auStack_98);
        FUN_021c7530();
        (*(code *)PTR__objc_retain_02578638)(param_1);
        puVar5 = &DAT_0258db00;
        _swift_allocObject(&DAT_0258db00,0x28,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar4;
        *(undefined8 *)(puVar5 + 0x18) = uVar6;
        *(undefined8 *)(puVar5 + 0x20) = param_1;
        FUN_0219eddc(1,FUN_021cdcc8);
        FUN_021c71dc(FUN_021cdcc8,puVar5);
        FUN_0219fae8(uVar4,uVar6);
        (*(code *)PTR__objc_release_02578630)(param_2);
        return;
      }
    }
    (*(code *)PTR__objc_release_02578630)(param_2);
  }
  return;
}

