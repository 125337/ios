// _$s8WCRefine24WCRSuperFloatFanMenuViewC9configure6origin7actions6configySo7CGPointV_SaySo12NSDictionaryCGSDySSypGtF @ 021d25f4

/* WARNING: Removing unreachable block (ram,0x021d2c50) */
/* WARNING: Removing unreachable block (ram,0x021d2b18) */

void __s8WCRefine24WCRSuperFloatFanMenuViewC9configure6origin7actions6configySo7CGPointV_SaySo12NSDictionaryCGSDySSypGtF
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  long *plVar8;
  undefined *puVar9;
  long unaff_x20;
  long local_308;
  long local_2f0;
  long local_2d0;
  long local_2c8;
  undefined8 local_1e8;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [24];
  long local_140;
  long local_138;
  undefined1 local_130;
  char *local_128;
  undefined8 local_120;
  undefined1 auStack_118 [24];
  long local_100;
  undefined1 auStack_f8 [24];
  double local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  
  local_140 = 0;
  pdVar1 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::origin);
  _swift_beginAccess();
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  _swift_endAccess(auStack_70);
  _swift_bridgeObjectRetain(param_5);
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actions);
  _swift_beginAccess(puVar2,auStack_88,0x21,0);
  uVar5 = *puVar2;
  *puVar2 = param_5;
  _swift_bridgeObjectRelease(uVar5);
  _swift_endAccess(auStack_88);
  _swift_bridgeObjectRetain(param_6);
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar2,auStack_a0,0x21,0);
  uVar5 = *puVar2;
  *puVar2 = param_6;
  _swift_bridgeObjectRelease(uVar5);
  _swift_endAccess(auStack_a0);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222060(unaff_x20,local_1e8);
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = param_4;
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_021b0958(param_1,param_2);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  uVar5 = 0x4000000000000000;
  if (2.0 <= param_1) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_1e8);
    local_e0 = param_1;
    local_d8 = uVar5;
    local_d0 = param_3;
    local_c8 = param_4;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021b0994(param_1,uVar5);
    uVar5 = 0x4000000000000000;
    bVar4 = param_1 < 2.0;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    bVar4 = true;
  }
  if (bVar4) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    puVar6 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    _objc_opt_self();
    FUN_02222a00();
    _objc_retainAutoreleasedReturnValue();
    FUN_02222060();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    FUN_022230c0(param_1,uVar5,param_3,param_4,unaff_x20,local_1e8);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  FUN_02222980(unaff_x20,local_1e8);
  puVar3 = (undefined1 *)(unaff_x20 + WCRSuperFloatFanMenuView::didFireSelect);
  _swift_beginAccess(puVar3,auStack_f8,0x21,0);
  *puVar3 = 0;
  _swift_endAccess(auStack_f8);
  FUN_021d2c54();
  FUN_021d612c(0);
  pcVar7 = "fanAnimation";
  uVar5 = 0xc;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanAnimation",0xc,1);
  local_128 = pcVar7;
  local_120 = uVar5;
  __sSDyq_Sgxcig(auStack_118,&local_128,param_6,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_128);
  if (local_100 == 0) {
    FUN_021c7fc0(auStack_118);
    local_2d0 = 0;
  }
  else {
    uVar5 = 0;
    FUN_021c80bc(0);
    plVar8 = &local_168;
    _swift_dynamicCast(plVar8,auStack_118,PTR___sypN_02578b08 + 8,uVar5,6);
    if (((ulong)plVar8 & 1) == 0) {
      local_2c8 = 0;
    }
    else {
      local_2c8 = local_168;
    }
    local_2d0 = local_2c8;
  }
  bVar4 = local_2d0 == 0;
  if (bVar4) {
    local_2f0 = 0;
  }
  else {
    local_2f0 = local_2d0;
    FUN_02222880(local_2d0,local_1e8);
    (*(code *)PTR__objc_release_02578630)(local_2d0);
  }
  local_138 = local_2f0;
  if (bVar4) {
    local_308 = 1;
  }
  else {
    local_308 = local_2f0;
  }
  local_140 = local_308;
  local_130 = bVar4;
  if (local_308 == 0) {
    puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
    _swift_beginAccess(puVar2,auStack_158,0x20);
    uVar5 = *puVar2;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_158);
    puVar6 = &DAT_028c7100;
    local_160 = uVar5;
    FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
    puVar9 = puVar6;
    FUN_021e282c();
    __sSTsE7forEachyyy7ElementQzKXEKF(FUN_021d63d4,0,puVar6,puVar9);
    FUN_021e28a0(&local_160);
  }
  else if (local_308 + -1 == 0) {
    FUN_021d6484();
  }
  else {
    FUN_021d6e34(local_308 + -1);
  }
  return;
}

