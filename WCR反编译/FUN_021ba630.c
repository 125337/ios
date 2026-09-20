// FUN_021ba630 @ 021ba630

/* WARNING: Removing unreachable block (ram,0x021ba7d8) */

long FUN_021ba630(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  long local_f0;
  undefined8 local_e8;
  long local_b0;
  long local_a8;
  long local_78 [3];
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  long local_20;
  
  pcVar2 = "ballAppearance";
  uVar4 = 0xe;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("ballAppearance",0xe,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
  _swift_beginAccess(puVar1,auStack_50,0x20,0);
  local_60 = pcVar2;
  local_58 = uVar4;
  __sSDyq_Sgxcig(auStack_38,&local_60,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_60);
  _swift_endAccess(auStack_50);
  if (local_20 == 0) {
    FUN_021c7fc0(auStack_38);
    local_b0 = 0;
  }
  else {
    uVar4 = 0;
    FUN_021c80bc(0);
    plVar3 = local_78;
    _swift_dynamicCast(plVar3,auStack_38,PTR___sypN_02578b08 + 8,uVar4,6);
    if (((ulong)plVar3 & 1) == 0) {
      local_a8 = 0;
    }
    else {
      local_a8 = local_78[0];
    }
    local_b0 = local_a8;
  }
  if (local_b0 == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = local_b0;
    FUN_02222880(local_b0,local_e8);
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  return local_f0;
}

