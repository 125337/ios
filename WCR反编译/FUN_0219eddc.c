// FUN_0219eddc @ 0219eddc

/* WARNING: Removing unreachable block (ram,0x0219f058) */

void FUN_0219eddc(uint param_1,code *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_400 [8];
  undefined8 local_3f8;
  code *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  long local_3d8;
  undefined *local_3d0;
  undefined8 local_3c8;
  void *local_3c0;
  undefined *local_3b8;
  long local_3b0;
  long local_3a8;
  long *local_3a0;
  undefined1 *local_398;
  long local_390;
  undefined *local_388;
  void *local_380;
  undefined *local_378;
  long *local_370;
  undefined1 *local_368;
  undefined8 local_360;
  long local_358;
  undefined8 local_350;
  code *local_348;
  undefined *local_340;
  undefined8 local_338;
  undefined *local_330;
  undefined8 local_328;
  undefined *local_320;
  undefined *local_318;
  long local_310;
  long *local_308;
  undefined1 *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined1 *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined8 *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  long *local_2a0;
  uint local_294;
  uint local_290;
  uint local_28c;
  long *local_288;
  undefined1 *local_280;
  long local_278;
  uint local_26c;
  code *local_268;
  long local_260;
  long local_258;
  ulong local_250;
  undefined1 *local_248;
  ulong local_240;
  long local_238;
  long local_230;
  ulong local_228;
  long local_220;
  undefined8 local_218;
  code *local_210;
  uint local_204;
  ulong local_200;
  long local_1f8;
  byte *local_1f0;
  undefined1 *local_1e8;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  code *local_1a0;
  undefined *local_198;
  undefined8 local_190;
  long local_188;
  undefined1 auStack_180 [24];
  code *local_168;
  undefined *local_160;
  undefined1 auStack_158 [24];
  long local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  code *local_118;
  undefined *local_110;
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90;
  long local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  local_268 = FUN_021c71c8;
  local_c8 = 0;
  local_140 = 0;
  local_168 = (code *)0x0;
  local_160 = (undefined *)0x0;
  local_188 = 0;
  lVar2 = 0;
  local_230 = 0;
  local_218 = param_3;
  local_210 = param_2;
  local_204 = param_1;
  __s8Dispatch0A4TimeVMa();
  local_258 = *(long *)(lVar2 + -8);
  local_250 = *(long *)(local_258 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar3 = local_230;
  local_260 = lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = -local_250;
  local_240 = extraout_x8 + 0xfU & 0xfffffffffffffff0;
  local_248 = auStack_400 + lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = (long)(auStack_400 + lVar2) - local_240;
  local_238 = lVar2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_228 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar3 = local_230;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = lVar2 - local_228;
  local_220 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_200 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_1f8 = lVar2 - local_200;
  local_1f0 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
  local_1e8 = auStack_68;
  _swift_beginAccess(local_1f0,local_1e8,0x20,0);
  bVar1 = *local_1f0;
  _swift_endAccess(local_1e8);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if ((bVar1 & 1) == 0) {
    local_288 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
    local_280 = auStack_80;
    _swift_beginAccess(local_288,local_280,0x20,0);
    local_278 = *local_288;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(local_280);
    local_90 = local_278;
    local_88 = 0;
    if (local_278 == 0) {
      FUN_021c7468(&local_90);
      local_28c = 1;
    }
    else {
      FUN_021c7498(&local_90,&local_1c8);
      lVar2 = local_88;
      if (local_88 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_1c8);
        FUN_0219fb48(&local_90);
        local_28c = 0;
      }
      else {
        __s8WCRefine24WCRSuperFloatFanMenuViewCMa(0);
        uVar6 = local_1c8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_1c8,lVar2);
        local_290 = (uint)uVar6;
        (*(code *)PTR__objc_release_02578630)(lVar2);
        (*(code *)PTR__objc_release_02578630)(local_1c8);
        FUN_021c7468(&local_90);
        local_28c = local_290;
      }
    }
    local_294 = local_28c ^ 1;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_26c = local_294;
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_26c = 1;
  }
  if ((local_26c & 1) == 0) {
    FUN_0219fb8c(local_210,local_218);
    if (local_210 == (code *)0x0) {
      return;
    }
    local_3f0 = local_210;
    local_3e8 = local_218;
    local_3f8 = local_218;
    (*local_210)();
    _swift_release(local_3f8);
    return;
  }
  local_2f8 = &DAT_028c6000;
  local_308 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::dismissGeneration);
  local_300 = auStack_a8;
  local_2d8 = 0x21;
  local_2a8 = 0;
  _swift_beginAccess();
  *local_308 = *local_308 + 1;
  _swift_endAccess(local_300);
  local_2f0 = (undefined8 *)(unaff_x20 + local_2f8[0x16b]);
  local_2e8 = auStack_c0;
  local_2b0 = 0x20;
  _swift_beginAccess();
  local_2e0 = *local_2f0;
  _swift_endAccess(local_2e8);
  local_c8 = local_2e0;
  local_2d0 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::isDismissingMenu);
  local_2c8 = auStack_e0;
  _swift_beginAccess(local_2d0,local_2c8,local_2d8,local_2a8);
  *local_2d0 = 1;
  _swift_endAccess(local_2c8);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  uVar4 = 0;
  FUN_0219fbbc(0);
  local_2c0 = &local_f0;
  local_f0 = 0x3ff0000000000000;
  uVar6 = uVar4;
  FUN_0219fc50();
  __s5UIKit01_A23NumericRawRepresentablePAAE1soiyxx_0C5ValueQztFZ
            (&local_e8,PTR__UIWindowLevelStatusBar_02578240,local_2c0,uVar4,uVar6);
  FUN_022236e0(local_e8,unaff_x20,local_2b8);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_022236a0(unaff_x20,local_2b8,0);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  local_2a0 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::dismissWatchdog);
  _swift_beginAccess(local_2a0,auStack_108,local_2b0,local_2a8);
  if (*local_2a0 == 0) {
    _swift_endAccess(auStack_108);
  }
  else {
    local_310 = *local_2a0;
    _swift_retain(local_310);
    _swift_endAccess(auStack_108);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(local_310);
  }
  local_360 = 0;
  __s8Dispatch0A8WorkItemCMa();
  puVar5 = &DAT_0258d448;
  local_340 = &DAT_0258d448;
  local_338 = 0x18;
  local_328 = 7;
  _swift_allocObject();
  local_388 = puVar5 + 0x10;
  local_378 = puVar5;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  _swift_unknownObjectWeakInit(local_388,unaff_x20);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  _swift_retain(local_378);
  puVar5 = &DAT_0258d470;
  _swift_allocObject(&DAT_0258d470,0x20,local_328);
  *(undefined **)(puVar5 + 0x10) = local_378;
  *(undefined8 *)(puVar5 + 0x18) = local_2e0;
  local_118 = FUN_021c6a04;
  local_138 = PTR___NSConcreteStackBlock_02578660;
  local_130 = 0x42000000;
  local_12c = 0;
  local_128 = FUN_021ae198;
  local_120 = &DAT_0258d488;
  local_110 = puVar5;
  local_380 = __Block_copy(&local_138);
  FUN_021b6410(local_1f8);
  FUN_021b6424(local_220);
  lVar2 = local_1f8;
  __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfC
            (local_1f8,local_220,local_380);
  local_358 = lVar2;
  _swift_release(local_110);
  _swift_release(local_378);
  local_140 = local_358;
  _swift_retain();
  local_370 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::dismissWatchdog);
  local_368 = auStack_158;
  _swift_beginAccess(local_370,local_368,0x21,0);
  lVar2 = *local_370;
  *local_370 = local_358;
  _swift_release(lVar2);
  _swift_endAccess(local_368);
  uVar6 = local_360;
  FUN_021c6a6c();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  local_350 = uVar6;
  __s8Dispatch0A4TimeV3nowACyFZ(local_248);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_238,0x3fe3333333333333,local_248);
  local_348 = *(code **)(local_258 + 8);
  (*local_348)(local_248,local_260);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (local_238,local_358);
  (*(code *)PTR__objc_release_02578630)(local_350);
  (*local_348)(local_238,local_260);
  puVar5 = local_340;
  _swift_allocObject(local_340,local_338,local_328);
  local_330 = puVar5 + 0x10;
  local_320 = puVar5;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  _swift_unknownObjectWeakInit(local_330,unaff_x20);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  _swift_retain(local_320);
  FUN_0219fb8c(local_210,local_218);
  _swift_retain(local_320);
  FUN_0219fb8c(local_210,local_218);
  puVar5 = &DAT_0258d4c0;
  _swift_allocObject(&DAT_0258d4c0,0x30,local_328);
  *(undefined **)(puVar5 + 0x10) = local_320;
  *(undefined8 *)(puVar5 + 0x18) = local_2e0;
  *(code **)(puVar5 + 0x20) = local_210;
  *(undefined8 *)(puVar5 + 0x28) = local_218;
  local_168 = FUN_021c71c8;
  local_318 = puVar5;
  local_160 = puVar5;
  _swift_release();
  if ((local_204 & 1) != 0) {
    local_3a0 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
    local_398 = auStack_180;
    _swift_beginAccess(local_3a0,local_398,0x20,0);
    local_390 = *local_3a0;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(local_398);
    if (local_390 != 0) {
      local_3a8 = local_390;
      local_3b0 = local_390;
      FUN_021c71dc(local_210,local_218);
      _swift_release(local_320);
      local_188 = local_3b0;
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_opt_self();
      uVar6 = 0;
      local_3d0 = puVar5;
      FUN_021c720c(0);
      lVar2 = 2;
      local_3e0 = 2;
      __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar6);
      *(undefined8 *)(lVar2 + 0x20) = 0x10000;
      *(undefined8 *)(lVar2 + 0x28) = local_3e0;
      FUN_021b0268();
      local_3d8 = lVar2;
      FUN_021c72a0();
      __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
                (&local_190,local_3d8,uVar6,lVar2);
      local_3c8 = local_190;
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      puVar5 = &DAT_0258d4e8;
      _swift_allocObject(&DAT_0258d4e8,0x18,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      local_1a0 = FUN_021c7404;
      local_1c0 = PTR___NSConcreteStackBlock_02578660;
      local_1b8 = 0x42000000;
      local_1b4 = 0;
      local_1b0 = FUN_021ae198;
      local_1a8 = &DAT_0258d500;
      local_198 = puVar5;
      local_3c0 = __Block_copy(&local_1c0);
      _swift_release(local_198);
      FUN_02221f00(DAT_02323f10,0,local_3d0,local_2b8,local_3c8,local_3c0,0);
      __Block_release(local_3c0);
      _swift_retain(local_318);
      local_3b8 = local_318;
      __s8WCRefine24WCRSuperFloatFanMenuViewC15dismissAnimatedyyyycSgF(local_268);
      FUN_021c71dc(local_268,local_3b8);
      (*(code *)PTR__objc_release_02578630)(local_3b0);
      goto LAB_0219f7fc;
    }
  }
  FUN_021c6acc(local_320,local_2e0,local_210,local_218);
  FUN_021c71dc(local_210,local_218);
  _swift_release(local_320);
LAB_0219f7fc:
  _swift_release(local_318);
  _swift_release(local_358);
  return;
}

