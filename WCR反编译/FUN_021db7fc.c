// FUN_021db7fc @ 021db7fc

/* WARNING: Removing unreachable block (ram,0x021db9b4) */

void FUN_021db7fc(void)

{
  undefined8 *puVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long local_110;
  undefined8 local_108;
  long local_f0;
  long local_d0;
  long local_c8;
  long local_90;
  long local_88;
  long local_80;
  undefined1 local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long local_30;
  
  local_88 = 0;
  pcVar3 = "fanHaptic";
  uVar5 = 9;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanHaptic",9,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_60,0x20,0);
  local_70 = pcVar3;
  local_68 = uVar5;
  __sSDyq_Sgxcig(auStack_48,&local_70,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_70);
  _swift_endAccess(auStack_60);
  if (local_30 == 0) {
    FUN_021c7fc0(auStack_48);
    local_d0 = 0;
  }
  else {
    uVar5 = 0;
    FUN_021c80bc(0);
    plVar4 = &local_90;
    _swift_dynamicCast(plVar4,auStack_48,PTR___sypN_02578b08 + 8,uVar5,6);
    if (((ulong)plVar4 & 1) == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = local_90;
    }
    local_d0 = local_c8;
  }
  bVar2 = local_d0 == 0;
  if (bVar2) {
    local_f0 = 0;
  }
  else {
    local_f0 = local_d0;
    FUN_02222880(local_d0,local_108);
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  local_80 = local_f0;
  if (bVar2) {
    local_110 = 1;
  }
  else {
    local_110 = local_f0;
  }
  local_88 = local_110;
  if (0 < local_110) {
    local_78 = bVar2;
    if (local_110 == 1) {
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::impactSoft);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222aa0(uVar5,local_108);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::impactSoft);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_022225c0(uVar5,local_108);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    else if (local_110 == 2) {
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::impactMedium);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222aa0(uVar5,local_108);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::impactMedium);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_022225c0(uVar5,local_108);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::impactHeavy);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222aa0(uVar5,local_108);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::impactHeavy);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_022225c0(uVar5,local_108);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
  }
  return;
}

