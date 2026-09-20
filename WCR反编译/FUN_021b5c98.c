// FUN_021b5c98 @ 021b5c98

/* WARNING: Removing unreachable block (ram,0x021b5e48) */

void FUN_021b5c98(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long unaff_x20;
  undefined *local_180;
  void *local_178;
  undefined *local_170;
  long *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  code *local_148;
  long local_140;
  long *local_138;
  uint local_130;
  uint local_12c;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  code *local_60;
  undefined *local_58;
  long local_50;
  long local_48;
  undefined1 auStack_40 [24];
  
  local_88 = 0;
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar4 = 0;
  lVar10 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar11 = (long)&local_180 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = lVar11 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar5 = 0;
  lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar4 = lVar2 - (lVar4 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  lVar5 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar5 = lVar4 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  lVar6 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_40);
  local_48 = 0;
  local_50 = lVar6;
  if (lVar6 == 0) {
    uVar8 = 0;
    FUN_021c82dc();
    local_12c = 1;
  }
  else {
    FUN_021c830c(&local_50,&local_a8);
    lVar6 = local_48;
    if (local_48 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
      uVar8 = 0;
      FUN_021c8298();
      local_12c = 0;
    }
    else {
      local_138 = &local_50;
      __s8WCRefine22WCRSuperFloatPetPlayerCMa(0);
      uVar7 = local_a8;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_a8,lVar6);
      local_130 = (uint)uVar7;
      (*(code *)PTR__objc_release_02578630)(lVar6);
      (*(code *)PTR__objc_release_02578630)(local_a8);
      FUN_021c82dc(local_138);
      uVar8 = (ulong)local_130;
      local_12c = local_130;
    }
  }
  if (((local_12c & 1) == 0) && (FUN_021b61a8(), (uVar8 & 1) == 0)) {
    FUN_021b5b1c(1);
    local_158 = 0;
    __s8Dispatch0A8WorkItemCMa();
    puVar9 = &DAT_0258d448;
    _swift_allocObject(&DAT_0258d448,0x18,7);
    local_180 = puVar9 + 0x10;
    local_170 = puVar9;
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    _swift_unknownObjectWeakInit(local_180,unaff_x20);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    _swift_retain(local_170);
    local_60 = FUN_021c9480;
    local_58 = local_170;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0x42000000;
    local_74 = 0;
    local_70 = FUN_021ae198;
    local_68 = &DAT_0258d708;
    local_178 = __Block_copy(&local_80);
    FUN_021b6410(lVar5);
    FUN_021b6424(lVar4);
    __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfC(lVar5,lVar4,local_178);
    local_140 = lVar5;
    _swift_release(local_58);
    _swift_release(local_170);
    local_88 = local_140;
    _swift_retain();
    local_168 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petTapResetWorkItem);
    local_160 = auStack_a0;
    _swift_beginAccess(local_168,local_160,0x21,0);
    lVar4 = *local_168;
    *local_168 = local_140;
    _swift_release(lVar4);
    _swift_endAccess(local_160);
    uVar7 = local_158;
    FUN_021c6a6c();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    local_150 = uVar7;
    __s8Dispatch0A4TimeV3nowACyFZ(lVar11);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar2,0x3feb333333333333,lVar11);
    local_148 = *(code **)(lVar10 + 8);
    (*local_148)(lVar11,lVar3);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
              (lVar2,local_140);
    (*(code *)PTR__objc_release_02578630)(local_150);
    (*local_148)(lVar2,lVar3);
    _swift_release(local_140);
  }
  return;
}

