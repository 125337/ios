// FUN_021ed618 @ 021ed618

uint FUN_021ed618(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  double dVar8;
  double local_190;
  undefined8 local_168;
  uint local_154;
  long local_140;
  long local_138;
  long local_100;
  long local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long local_30;
  
  local_b8 = 0.0;
  local_f8 = 0;
  pcVar3 = "fanAnchorOnRight";
  uVar7 = 0x10;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanAnchorOnRight",0x10,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_60,0x20,0);
  local_70 = pcVar3;
  local_68 = uVar7;
  __sSDyq_Sgxcig(auStack_48,&local_70,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_70);
  _swift_endAccess(auStack_60);
  if (local_30 == 0) {
    FUN_021c7fc0(auStack_48);
    local_140 = 0;
  }
  else {
    uVar7 = 0;
    FUN_021c80bc(0);
    plVar4 = &local_100;
    _swift_dynamicCast(plVar4,auStack_48,PTR___sypN_02578b08 + 8,uVar7,6);
    if (((ulong)plVar4 & 1) == 0) {
      local_138 = 0;
    }
    else {
      local_138 = local_100;
    }
    local_140 = local_138;
  }
  if (local_140 == 0) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_168);
    local_90 = param_1;
    local_88 = param_2;
    local_80 = param_3;
    local_78 = param_4;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021b0958(param_1,param_2);
    local_190 = 2.0;
    if (param_1 <= 2.0) {
      puVar6 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      _objc_opt_self();
      FUN_02222a00();
      _objc_retainAutoreleasedReturnValue();
      FUN_02222060();
      local_b0 = local_190;
      local_a8 = param_1;
      local_a0 = param_3;
      local_98 = param_4;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      FUN_021b0958(local_190,param_1,param_3,param_4);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222060(unaff_x20,local_168);
      local_f0 = local_190;
      local_e8 = param_1;
      local_e0 = param_3;
      local_d8 = param_4;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      FUN_021b0958(local_190,param_1,param_3,param_4);
    }
    local_b8 = local_190;
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::origin);
    _swift_beginAccess(pdVar2,auStack_d0,0x20,0);
    dVar8 = *pdVar2;
    _swift_endAccess(auStack_d0);
    local_154 = (uint)(local_190 * 0.5 < dVar8);
  }
  else {
    local_f8 = local_140;
    lVar5 = local_140;
    FUN_02222040(local_140,local_168);
    local_154 = (uint)lVar5;
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  return local_154 & 1;
}

