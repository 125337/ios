// FUN_021d612c @ 021d612c

/* WARNING: Removing unreachable block (ram,0x021d62f4) */

void FUN_021d612c(uint param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long local_120;
  undefined8 local_118;
  long local_100;
  long local_e0;
  long local_d8;
  long local_98;
  long local_90;
  long local_88;
  undefined1 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long local_38;
  
  local_90 = 0;
  pcVar3 = "menuStyle";
  uVar5 = 9;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuStyle",9,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_68,0x20,0);
  local_78 = pcVar3;
  local_70 = uVar5;
  __sSDyq_Sgxcig(auStack_50,&local_78,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_78);
  _swift_endAccess(auStack_68);
  if (local_38 == 0) {
    FUN_021c7fc0(auStack_50);
    local_e0 = 0;
  }
  else {
    uVar5 = 0;
    FUN_021c80bc(0);
    plVar4 = &local_98;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_02578b08 + 8,uVar5,6);
    if (((ulong)plVar4 & 1) == 0) {
      local_d8 = 0;
    }
    else {
      local_d8 = local_98;
    }
    local_e0 = local_d8;
  }
  bVar2 = local_e0 == 0;
  if (bVar2) {
    local_100 = 0;
  }
  else {
    local_100 = local_e0;
    FUN_02222880(local_e0,local_118);
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  local_88 = local_100;
  if (bVar2) {
    local_120 = 0;
  }
  else {
    local_120 = local_100;
  }
  local_90 = local_120;
  local_80 = bVar2;
  if (local_120 + -2 != 0) {
    FUN_021e4ca4(local_120 + -2);
  }
  if (local_120 == 1) {
    FUN_021e5138(param_1 & 1);
  }
  else if (local_120 == 2) {
    FUN_021e66f4(param_1 & 1);
  }
  else {
    FUN_021ea740(param_1 & 1);
  }
  return;
}

