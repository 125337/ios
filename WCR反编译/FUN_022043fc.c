// FUN_022043fc @ 022043fc

/* WARNING: Type propagation algorithm not settling */

void FUN_022043fc(void)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *aBlock;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 local_360;
  undefined8 local_238;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  code *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  long local_168 [2];
  undefined1 auStack_158 [8];
  undefined8 local_150;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  lVar5 = WCRSuperFloatPetPlayer::timer;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_170 = 0;
  local_1a0 = 0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::timer);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_40);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_40);
    FUN_022228a0(uVar7,local_238);
    (*(code *)PTR__objc_release_02578630)(uVar7);
  }
  pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatPetPlayer::paused);
  _swift_beginAccess(pbVar2,auStack_58,0x20,0);
  bVar4 = *pbVar2;
  _swift_endAccess(auStack_58);
  if ((bVar4 & 1) == 0) {
    puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::state);
    _swift_beginAccess();
    uVar7 = *puVar3;
    _swift_endAccess(auStack_88);
    puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
    puVar8 = puVar3;
    _swift_beginAccess(puVar3,auStack_a0,0x20,0);
    uVar12 = *puVar3;
    local_c0 = uVar7;
    FUN_021fd890();
    __sSDyq_Sgxcig(&local_b8,&local_c0,uVar12,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                   &DAT_0258e780);
    _swift_endAccess(auStack_a0);
    local_d8 = local_b8;
    uStack_d0 = local_b0;
    local_c8 = local_a8;
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    uStack_e8 = uStack_d0;
    local_f0 = local_d8;
    local_e0 = local_c8;
    if (local_c8 == 0) {
      puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
      _swift_beginAccess(puVar3,auStack_108,0x20,0);
      local_110 = 0;
      __sSDyq_Sgxcig(&local_70,&local_110,*puVar3,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                     &DAT_0258e780,puVar8);
      _swift_endAccess(auStack_108);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      if (local_e0 != 0) {
        FUN_021fe238(&local_f0);
      }
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      uStack_68 = uStack_e8;
      local_70 = local_f0;
      local_60 = local_e0;
    }
    lVar5 = local_60;
    if (local_60 != 0) {
      local_128 = local_70;
      local_120 = uStack_68;
      local_118 = local_60;
      puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::frameIndex);
      _swift_beginAccess(puVar3,auStack_148,0x20,0);
      uVar7 = *puVar3;
      _swift_endAccess(auStack_148);
      local_168[1] = 0;
      local_150 = uVar7;
      _swift_bridgeObjectRetain(lVar5);
      lVar11 = lVar5;
      __sSa5countSivg(lVar5,PTR___sSdN_025789b8);
      _swift_bridgeObjectRelease(lVar5);
      puVar10 = PTR___sSiSLsWP_025789e8;
      puVar9 = PTR___sSiN_025789d8;
      local_168[0] = lVar11 + -1;
      if (SBORROW8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x2204b9c);
        (*pcVar6)();
      }
      __ss3maxyxx_xtSLRzlF(local_168 + 1,local_168);
      __ss3minyxx_xtSLRzlF(&local_130,&local_150,auStack_158,puVar9,puVar10);
      local_170 = local_130;
      local_180 = DAT_02323d80;
      _swift_bridgeObjectRetain(lVar5);
      local_188 = lVar5;
      puVar9 = &DAT_028c73b0;
      FUN_021c77d4(&DAT_028c73b0,&DAT_0233b6c0);
      puVar10 = puVar9;
      FUN_022056ac();
      __sSlsE7isEmptySbvg(puVar9,puVar10);
      _swift_bridgeObjectRelease(lVar5);
      if (((ulong)puVar9 & 1) == 0) {
        _swift_bridgeObjectRetain(lVar5);
        __sSayxSicig(&local_190,local_130,lVar5,PTR___sSdN_025789b8);
        _swift_bridgeObjectRelease(lVar5);
        local_360 = local_190;
      }
      else {
        local_360 = DAT_02323cc0;
      }
      local_198 = local_360;
      __ss3maxyxx_xtSLRzlF
                (&local_178,&local_180,&local_198,PTR___sSdN_025789b8,PTR___sSdSLsWP_025789c8);
      local_1a0 = local_178;
      puVar10 = PTR__OBJC_CLASS___NSTimer_026ce210;
      _objc_opt_self();
      puVar9 = &DAT_0258e6b8;
      _swift_allocObject(&DAT_0258e6b8,0x18,7);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      _swift_unknownObjectWeakInit(puVar9 + 0x10);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      _swift_retain(puVar9);
      local_1b0 = FUN_02205a24;
      local_1d0 = PTR___NSConcreteStackBlock_02578660;
      local_1c8 = 0x42000000;
      local_1c4 = 0;
      local_1c0 = FUN_022055a4;
      local_1b8 = &DAT_0258e6d0;
      local_1a8 = puVar9;
      aBlock = __Block_copy(&local_1d0);
      _swift_release(local_1a8);
      _swift_release(puVar9);
      FUN_02222c40(local_178,puVar10,local_238,0,aBlock);
      _objc_retainAutoreleasedReturnValue();
      __Block_release(aBlock);
      puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::timer);
      _swift_beginAccess(puVar3,auStack_1e8,0x21);
      uVar7 = *puVar3;
      *puVar3 = puVar10;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      _swift_endAccess(auStack_1e8);
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::timer);
      _swift_beginAccess(plVar1,auStack_200,0x20,0);
      lVar11 = *plVar1;
      (*(code *)PTR__objc_retain_02578638)();
      _swift_endAccess(auStack_200);
      if (lVar11 != 0) {
        puVar9 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
        _objc_opt_self();
        FUN_022229e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)PTR__NSRunLoopCommonModes_02578258;
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02221e80(puVar9,local_238,lVar11,uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(lVar11);
      }
      _swift_bridgeObjectRelease(lVar5);
    }
  }
  return;
}

