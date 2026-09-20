// FUN_021bf8c4 @ 021bf8c4

void FUN_021bf8c4(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_1e0 [8];
  undefined8 *local_1d8;
  undefined1 *local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  code *local_178;
  long local_170;
  long *local_168;
  undefined1 *local_160;
  long local_158;
  long local_150;
  long local_148;
  ulong local_140;
  undefined1 *local_138;
  ulong local_130;
  long local_128;
  long local_120;
  ulong local_118;
  long local_110;
  uint local_104;
  ulong local_100;
  long local_f8;
  undefined1 auStack_d0 [24];
  long local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  local_80 = 0;
  local_b8 = 0;
  lVar3 = 0;
  local_120 = 0;
  local_104 = param_1;
  __s8Dispatch0A4TimeVMa();
  local_148 = *(long *)(lVar3 + -8);
  local_140 = *(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar4 = local_120;
  local_150 = lVar3;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar3 = -local_140;
  local_130 = extraout_x8 + 0xfU & 0xfffffffffffffff0;
  local_138 = auStack_1e0 + lVar3;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar3 = (long)(auStack_1e0 + lVar3) - local_130;
  local_128 = lVar3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_118 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar4 = local_120;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar3 = lVar3 - local_118;
  local_110 = lVar3;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_f8 = lVar3 - local_100;
  FUN_021bc6d8();
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::autoSnapEnabled);
  _swift_beginAccess(pbVar1,auStack_48,0x20,0);
  bVar2 = *pbVar1;
  _swift_endAccess(auStack_48);
  if ((bVar2 & 1) != 0) {
    local_168 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
    local_160 = auStack_60;
    _swift_beginAccess(local_168,local_160,0x20,0);
    local_158 = *local_168;
    _swift_endAccess(local_160);
    if (local_158 == 1) {
      FUN_021b998c(local_104 & 1);
    }
    else {
      local_1d8 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::idleHoverSeconds);
      local_1d0 = auStack_78;
      local_1a8 = 0;
      _swift_beginAccess(local_1d8,local_1d0,0x20);
      local_188 = *local_1d8;
      _swift_endAccess(local_1d0);
      local_80 = local_188;
      local_190 = 0;
      __s8Dispatch0A8WorkItemCMa();
      puVar5 = &DAT_0258d448;
      local_1c0 = 7;
      _swift_allocObject(&DAT_0258d448,0x18);
      local_1c8 = puVar5 + 0x10;
      local_1b0 = puVar5;
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      _swift_unknownObjectWeakInit(local_1c8,unaff_x20);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      _swift_retain(local_1b0);
      puVar5 = &DAT_0258d808;
      _swift_allocObject(&DAT_0258d808,0x19,local_1c0);
      *(undefined **)(puVar5 + 0x10) = local_1b0;
      puVar5[0x18] = (char)local_104;
      local_90 = FUN_021c9c0c;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0x42000000;
      local_a4 = 0;
      local_a0 = FUN_021ae198;
      local_98 = &DAT_0258d820;
      local_88 = puVar5;
      local_1b8 = __Block_copy(&local_b0);
      FUN_021b6410(local_f8);
      FUN_021b6424(local_110);
      lVar3 = local_f8;
      __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfC
                (local_f8,local_110,local_1b8);
      local_170 = lVar3;
      _swift_release(local_88);
      _swift_release(local_1b0);
      local_b8 = local_170;
      _swift_retain();
      local_1a0 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::snapAfterIdleWorkItem);
      local_198 = auStack_d0;
      _swift_beginAccess(local_1a0,local_198,0x21,local_1a8);
      lVar3 = *local_1a0;
      *local_1a0 = local_170;
      _swift_release(lVar3);
      _swift_endAccess(local_198);
      uVar6 = local_190;
      FUN_021c6a6c();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      local_180 = uVar6;
      __s8Dispatch0A4TimeV3nowACyFZ(local_138);
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_128,local_188,local_138);
      local_178 = *(code **)(local_148 + 8);
      (*local_178)(local_138,local_150);
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
                (local_128,local_170);
      (*(code *)PTR__objc_release_02578630)(local_180);
      (*local_178)(local_128,local_150);
      _swift_release(local_170);
    }
  }
  return;
}

