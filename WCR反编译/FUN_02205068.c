// FUN_02205068 @ 02205068

/* WARNING: Removing unreachable block (ram,0x022053a0) */

void FUN_02205068(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_270;
  undefined8 local_260;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined1 auStack_48 [24];
  long local_30;
  undefined8 local_28;
  
  local_50 = 0;
  local_140 = 0;
  param_2 = param_2 + 0x10;
  local_30 = param_2;
  local_28 = param_1;
  _swift_beginAccess(param_2,auStack_48,0x20,0);
  _swift_unknownObjectWeakLoadStrong();
  _swift_endAccess(auStack_48);
  if (param_2 != 0) {
    local_60 = 1;
    puVar2 = (undefined8 *)(param_2 + WCRSuperFloatPetPlayer::state);
    local_50 = param_2;
    _swift_beginAccess();
    uVar7 = *puVar2;
    _swift_endAccess(auStack_98);
    puVar2 = (undefined8 *)(param_2 + WCRSuperFloatPetPlayer::specs);
    puVar6 = puVar2;
    _swift_beginAccess(puVar2,auStack_b0,0x20,0);
    uVar9 = *puVar2;
    local_d0 = uVar7;
    FUN_021fd890();
    __sSDyq_Sgxcig(&local_c8,&local_d0,uVar9,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                   &DAT_0258e780);
    _swift_endAccess(auStack_b0);
    local_e8 = local_c8;
    uStack_e0 = local_c0;
    local_d8 = local_b8;
    (*(code *)PTR__objc_retain_02578638)(param_2);
    uStack_f8 = uStack_e0;
    local_100 = local_e8;
    local_f0 = local_d8;
    if (local_d8 == 0) {
      puVar2 = (undefined8 *)(param_2 + WCRSuperFloatPetPlayer::specs);
      _swift_beginAccess(puVar2,auStack_118,0x20,0);
      local_120 = 0;
      __sSDyq_Sgxcig(&local_80,&local_120,*puVar2,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                     &DAT_0258e780,puVar6);
      _swift_endAccess(auStack_118);
      (*(code *)PTR__objc_release_02578630)(param_2);
      if (local_f0 != 0) {
        FUN_021fe238(&local_100);
      }
    }
    else {
      (*(code *)PTR__objc_release_02578630)(param_2);
      uStack_78 = uStack_f8;
      local_80 = local_100;
      local_70 = local_f0;
    }
    local_260 = uStack_78;
    bVar4 = local_70 == 0;
    if (bVar4) {
      local_260 = 0;
    }
    else {
      _swift_bridgeObjectRelease(local_70);
    }
    local_130 = local_260;
    if (bVar4) {
      local_270 = 1;
    }
    else {
      local_270 = local_260;
    }
    local_138 = local_270;
    local_128 = bVar4;
    __ss3maxyxx_xtSLRzlF(&local_58,&local_60,&local_138,PTR___sSiN_025789d8,PTR___sSiSLsWP_025789e8)
    ;
    local_140 = local_58;
    plVar3 = (long *)(param_2 + WCRSuperFloatPetPlayer::frameIndex);
    _swift_beginAccess(plVar3,auStack_158,0x20,0);
    lVar8 = *plVar3;
    _swift_endAccess(auStack_158);
    lVar1 = lVar8 + 1;
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x22055a4);
      (*pcVar5)();
    }
    if (local_58 == 0) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Division by zero in remainder operation",0x27,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x22054a0);
      (*pcVar5)();
    }
    if ((lVar1 == -0x8000000000000000) && (local_58 == -1)) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Division results in an overflow in remainder operation",0x36,2
                 ,"Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x2205514);
      (*pcVar5)();
    }
    lVar8 = 0;
    if (local_58 != 0) {
      lVar8 = lVar1 / local_58;
    }
    plVar3 = (long *)(param_2 + WCRSuperFloatPetPlayer::frameIndex);
    _swift_beginAccess(plVar3,auStack_170,0x21,0);
    *plVar3 = lVar1 - lVar8 * local_58;
    _swift_endAccess(auStack_170);
    FUN_02204248();
    FUN_022043fc();
    (*(code *)PTR__objc_release_02578630)(param_2);
  }
  return;
}

