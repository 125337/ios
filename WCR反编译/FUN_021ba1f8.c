// FUN_021ba1f8 @ 021ba1f8

/* WARNING: Removing unreachable block (ram,0x021ba3bc) */
/* WARNING: Removing unreachable block (ram,0x021ba5cc) */

long FUN_021ba1f8(ulong param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  long local_1f0;
  long local_1b8;
  long local_1b0;
  long local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  long local_130;
  long local_128;
  long local_f0 [4];
  char *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90;
  long local_88 [3];
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long local_30;
  
  local_f0[1] = 0;
  FUN_021ad108();
  if ((param_1 & 1) == 0) {
    pcVar2 = "menuOpenTrigger";
    uVar4 = 0xf;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuOpenTrigger",0xf,1);
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
    _swift_beginAccess(puVar1,auStack_60,0x20,0);
    local_70 = pcVar2;
    local_68 = uVar4;
    __sSDyq_Sgxcig(auStack_48,&local_70,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_70);
    _swift_endAccess(auStack_60);
    if (local_30 == 0) {
      FUN_021c7fc0(auStack_48);
      local_1b8 = 0;
    }
    else {
      uVar4 = 0;
      FUN_021c80bc(0);
      plVar3 = local_88;
      _swift_dynamicCast(plVar3,auStack_48,PTR___sypN_02578b08 + 8,uVar4,6);
      if (((ulong)plVar3 & 1) == 0) {
        local_1b0 = 0;
      }
      else {
        local_1b0 = local_88[0];
      }
      local_1b8 = local_1b0;
    }
    if (local_1b8 == 0) {
      local_1f0 = 0;
    }
    else {
      local_1f0 = local_1b8;
      FUN_02222880(local_1b8,local_168);
      (*(code *)PTR__objc_release_02578630)(local_1b8);
    }
    local_180 = local_1f0;
  }
  else {
    pcVar2 = "menuOpenTrigger";
    uVar4 = 0xf;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuOpenTrigger",0xf,1);
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
    _swift_beginAccess(puVar1,auStack_c0,0x20,0);
    local_d0 = pcVar2;
    local_c8 = uVar4;
    __sSDyq_Sgxcig(auStack_a8,&local_d0,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_d0);
    _swift_endAccess(auStack_c0);
    if (local_90 == 0) {
      FUN_021c7fc0(auStack_a8);
      local_130 = 0;
    }
    else {
      uVar4 = 0;
      FUN_021c80bc(0);
      plVar3 = local_f0;
      _swift_dynamicCast(plVar3,auStack_a8,PTR___sypN_02578b08 + 8,uVar4,6);
      if (((ulong)plVar3 & 1) == 0) {
        local_128 = 0;
      }
      else {
        local_128 = local_f0[0];
      }
      local_130 = local_128;
    }
    if (local_130 == 0) {
      local_170 = 2;
    }
    else {
      local_170 = local_130;
      FUN_02222880(local_130,local_168);
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    if (local_170 == 0) {
      local_178 = 0;
    }
    else {
      local_178 = 2;
    }
    local_180 = local_178;
  }
  return local_180;
}

