// FUN_021ba82c @ 021ba82c

/* WARNING: Removing unreachable block (ram,0x021ba9c4) */

uint FUN_021ba82c(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  uint local_d4;
  undefined8 local_d0;
  uint local_bc;
  long local_a8;
  long local_a0;
  long local_70 [2];
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  long local_20;
  
  pcVar2 = "fanLeftHand";
  uVar5 = 0xb;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanLeftHand",0xb,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
  _swift_beginAccess(puVar1,auStack_50,0x20,0);
  local_60 = pcVar2;
  local_58 = uVar5;
  __sSDyq_Sgxcig(auStack_38,&local_60,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_60);
  _swift_endAccess(auStack_50);
  if (local_20 == 0) {
    FUN_021c7fc0(auStack_38);
    local_a8 = 0;
  }
  else {
    uVar5 = 0;
    FUN_021c80bc(0);
    plVar3 = local_70;
    _swift_dynamicCast(plVar3,auStack_38,PTR___sypN_02578b08 + 8,uVar5,6);
    if (((ulong)plVar3 & 1) == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_70[0];
    }
    local_a8 = local_a0;
  }
  if (local_a8 == 0) {
    local_bc = 2;
  }
  else {
    lVar4 = local_a8;
    FUN_02222040(local_a8,local_d0);
    local_bc = (uint)lVar4;
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  if ((char)local_bc == '\x02') {
    local_d4 = 0;
  }
  else {
    local_d4 = local_bc & 0xff;
  }
  return local_d4 & 1;
}

