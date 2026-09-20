// FUN_021bc7c0 @ 021bc7c0

/* WARNING: Removing unreachable block (ram,0x021bc974) */

void FUN_021bc7c0(void)

{
  undefined8 *puVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 local_128;
  long local_118;
  undefined8 local_110;
  long local_f8;
  long local_d8;
  long local_d0;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined1 local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long local_30;
  
  local_88 = 0;
  local_98 = 0;
  pcVar3 = "fanHaptic";
  uVar5 = 9;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanHaptic",9,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
  _swift_beginAccess(puVar1,auStack_60,0x20,0);
  local_70 = pcVar3;
  local_68 = uVar5;
  __sSDyq_Sgxcig(auStack_48,&local_70,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_70);
  _swift_endAccess(auStack_60);
  if (local_30 == 0) {
    FUN_021c7fc0(auStack_48);
    local_d8 = 0;
  }
  else {
    uVar5 = 0;
    FUN_021c80bc(0);
    plVar4 = &local_a0;
    _swift_dynamicCast(plVar4,auStack_48,PTR___sypN_02578b08 + 8,uVar5,6);
    if (((ulong)plVar4 & 1) == 0) {
      local_d0 = 0;
    }
    else {
      local_d0 = local_a0;
    }
    local_d8 = local_d0;
  }
  bVar2 = local_d8 == 0;
  if (bVar2) {
    local_f8 = 0;
  }
  else {
    local_f8 = local_d8;
    FUN_02222880(local_d8,local_110);
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  local_80 = local_f8;
  if (bVar2) {
    local_118 = 1;
  }
  else {
    local_118 = local_f8;
  }
  local_88 = local_118;
  if (0 < local_118) {
    if (local_118 == 1) {
      local_90 = 3;
      local_128 = 3;
    }
    else if (local_118 == 2) {
      local_90 = 1;
      local_128 = 1;
    }
    else {
      local_90 = 2;
      local_128 = 2;
    }
    local_78 = bVar2;
    FUN_021c9b0c(0);
    FUN_021bdc4c();
    local_98 = local_128;
    FUN_02222aa0();
    FUN_022225c0(local_128,local_110);
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  return;
}

