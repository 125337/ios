// _$s8WCRefine24WCRSuperFloatFanMenuViewC15dismissAnimatedyyyycSgF @ 021f21c4

/* WARNING: Removing unreachable block (ram,0x021f23dc) */

void __s8WCRefine24WCRSuperFloatFanMenuViewC15dismissAnimatedyyyycSgF
               (code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long local_138;
  long local_120;
  long local_100;
  long local_f8;
  undefined8 local_e0;
  long local_a0;
  long local_98;
  long local_90;
  undefined1 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long local_40;
  
  local_98 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_022236a0();
  (*(code *)PTR__objc_release_02578630)();
  FUN_021dc60c(1);
  pcVar3 = "fanAnimation";
  uVar5 = 0xc;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanAnimation",0xc,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_70,0x20,0);
  local_80 = pcVar3;
  local_78 = uVar5;
  __sSDyq_Sgxcig(auStack_58,&local_80,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_80);
  _swift_endAccess(auStack_70);
  if (local_40 == 0) {
    FUN_021c7fc0(auStack_58);
    local_100 = 0;
  }
  else {
    uVar5 = 0;
    FUN_021c80bc(0);
    plVar4 = &local_a0;
    _swift_dynamicCast(plVar4,auStack_58,PTR___sypN_02578b08 + 8,uVar5,6);
    if (((ulong)plVar4 & 1) == 0) {
      local_f8 = 0;
    }
    else {
      local_f8 = local_a0;
    }
    local_100 = local_f8;
  }
  bVar2 = local_100 == 0;
  if (bVar2) {
    local_120 = 0;
  }
  else {
    local_120 = local_100;
    FUN_02222880(local_100,local_e0);
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  local_90 = local_120;
  if (bVar2) {
    local_138 = 1;
  }
  else {
    local_138 = local_120;
  }
  local_98 = local_138;
  local_88 = bVar2;
  if (local_138 == 1) {
    FUN_021f24d4(0,param_1,param_2);
  }
  else if (local_138 + -2 == 0) {
    FUN_021f3f38(param_1,param_2);
  }
  else {
    FUN_0219fb8c(local_138 + -2,param_1,param_2);
    if (param_1 != (code *)0x0) {
      (*param_1)();
      _swift_release(param_2);
    }
  }
  return;
}

