// onTick @ 00f5f308

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationEngine::onTick(ID param_1,SEL param_2)

{
  bool bVar1;
  u_int32_t uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ID IVar8;
  ID IVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulong local_350;
  ulong local_348;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_260;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  ID local_218;
  byte local_209;
  ID local_208;
  double local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined1 local_1ad;
  ID local_1a0;
  long local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined1 *local_140;
  double local_138;
  byte local_129;
  undefined1 *local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar15 = DAT_02323da8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar13 = DAT_02323da8;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shouldKeepTimer_026ac778);
  if ((param_1 & 1) == 0) {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timer_026a4950);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTimer__026a4970,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_c0 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentTickInterval_026ac780);
    local_d8 = 0x4010000000000000;
    local_e0 = dVar13 * 1.5;
    local_260 = local_e0;
    if (local_e0 <= 4.0) {
      local_260 = 4.0;
    }
    local_e8 = local_260;
    local_d0 = local_260;
    local_c8 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lastTickTime_026ac7a0);
    dVar13 = local_c0;
    if (local_260 <= 0.0) {
      local_280 = local_c8;
    }
    else {
      local_f8 = dVar15;
      local_108 = local_d0;
      dVar14 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lastTickTime_026ac7a0);
      local_110 = dVar13 - dVar14;
      local_270 = local_110;
      if (local_108 < local_110) {
        local_270 = local_108;
      }
      local_118 = local_270;
      local_100 = local_270;
      if (local_270 <= local_f8) {
        local_278 = local_f8;
      }
      else {
        local_278 = local_270;
      }
      local_120 = local_278;
      local_280 = local_278;
    }
    local_f0 = local_280;
    dVar13 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastTickTime__026ac790);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_129 = 0;
    local_128 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fakeLocationMoveRunning_026ac668);
    if ((((ulong)puVar3 & 1) == 0) ||
       (IVar4 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasRoute_026ac648),
       (IVar4 & 1) == 0)) {
      dVar15 = -1.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastSpeed__026ac7b8);
      puVar7 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_fakeLocationMoveRunning_026ac668);
      if (((ulong)puVar7 & 1) == 0) {
        dVar15 = -1.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastCourse__026ac7d0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_fakeLocationMoveSpeedMps_026ac670);
      local_138 = dVar13;
      if (dVar13 < dVar15) {
        local_138 = dVar15;
      }
      puVar7 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_fakeLocationMoveTransportType_026ac7a8);
      local_140 = puVar7;
      if (puVar7 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) {
        local_140 = (undefined1 *)0x0;
      }
      dVar15 = 40.0;
      local_150 = 40.0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_speedMpsForTransportType__026ac640,
                 local_140);
      local_158 = dVar15 * 1.2;
      local_288 = local_158;
      if (local_158 <= local_150) {
        local_288 = local_150;
      }
      local_160 = local_288;
      local_148 = local_288;
      if (local_288 < local_138) {
        local_138 = local_288;
      }
      puVar7 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_fakeLocationJitterEnabled_026ac7b0);
      if (((ulong)puVar7 & 1) != 0) {
        uVar2 = _arc4random_uniform(0xa0);
        local_168 = ((double)uVar2 / 1000.0 - DAT_02323c90) + 1.0;
        local_138 = local_138 * local_168;
      }
      IVar4 = local_b0;
      dVar13 = local_f0;
      dVar15 = local_138;
      dVar14 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traveledMeters_026ac600);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar14 + dVar13 * dVar15,IVar4,PTR_s_setTraveledMeters__026ac5f8);
      dVar15 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastSpeed__026ac7b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traveledMeters_026ac600);
      dVar13 = dVar15;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_routeDistanceMeters_026ac608);
      if (dVar15 < dVar13) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traveledMeters_026ac600);
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setFakeLocationMoveProgress__026ac6c8)
        ;
        IVar4 = local_b0;
        dVar15 = -1.0;
        local_180 = -1.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traveledMeters_026ac600);
        IVar5 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_routeCoords_026ac650);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_coordinateAtDistance_alongRoute__026ac658,IVar5,&local_180);
        local_190 = dVar15;
        local_188 = dVar13;
        (*(code *)PTR__objc_release_02578630)();
        dVar15 = local_190;
        _CLLocationCoordinate2DIsValid(local_190,local_188);
        if ((IVar5 & 1) != 0) {
          dVar15 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastCourse__026ac7d0);
          local_129 = 1;
          puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          iVar10 = 5;
          if (puVar6 != (undefined *)0x0) {
            iVar10 = 0xf;
          }
          lVar11 = (long)iVar10;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          DAT_028e2e10 = DAT_028e2e10 + 1;
          lVar12 = 0;
          if (lVar11 != 0) {
            lVar12 = DAT_028e2e10 / lVar11;
          }
          local_198 = lVar11;
          if (DAT_028e2e10 == lVar12 * lVar11) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_warmWeChatLocationCache_026ac688);
          }
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_routeDistanceMeters_026ac608);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTraveledMeters__026ac5f8);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traveledMeters_026ac600);
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setFakeLocationMoveProgress__026ac6c8)
        ;
        IVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_routeCoords_026ac650);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_178 = dVar15;
        local_170 = dVar13;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)();
        _CLLocationCoordinate2DIsValid(local_178,local_170);
        if ((IVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,local_128,PTR_s_setFakeLocationLatitude__026ac7c0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,local_128,PTR_s_setFakeLocationLongitude__026ac7c8);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_setFakeLocationMoveRunning__026ac6d0,0);
        (*(code *)PTR__objc_msgSend_02578628)(0,local_b0,PTR_s_setLastSpeed__026ac7b8);
        dVar15 = -1.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastCourse__026ac7d0);
        local_129 = 1;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_warmWeChatLocationCache_026ac688);
      }
    }
    IVar5 = local_b0;
    local_1a0 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar5);
    IVar8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_managers_026ac768);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_1a0;
    local_1a0 = IVar9;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    _objc_sync_exit(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar4 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
    if (IVar4 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar6 == (undefined *)0x0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_1ad = bVar1;
      if (((local_129 & 1) != 0) || (bVar1)) {
        _memset(auStack_1f8,0,0x40);
        IVar4 = local_1a0;
        (*(code *)PTR__objc_retain_02578638)();
        local_348 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,0x10
                  );
        if (local_348 != 0) {
          lVar12 = *local_1e8;
          local_350 = 0;
          do {
            do {
              if (*local_1e8 - lVar12 != 0) {
                _objc_enumerationMutation(*local_1e8 - lVar12,IVar4);
              }
              local_1b8 = *(undefined8 *)(local_1f0 + local_350 * 8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_pushToManager__026ac770,local_1b8);
              local_350 = local_350 + 1;
            } while (local_350 < local_348);
            local_348 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,
                       0x10);
            local_350 = 0;
          } while (local_348 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentTickInterval_026ac780);
    IVar4 = local_b0;
    local_200 = dVar15;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timer_026a4950);
    _objc_retainAutoreleasedReturnValue();
    local_209 = 0;
    bVar1 = false;
    if (IVar4 != 0) {
      IVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timer_026a4950);
      _objc_retainAutoreleasedReturnValue();
      local_209 = 1;
      local_208 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = DAT_02323c88 < ABS(dVar15 - local_200);
    }
    if ((local_209 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_208);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (bVar1) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_b0;
      local_238 = PTR___NSConcreteStackBlock_02578660;
      local_230 = 0xc2000000;
      local_22c = 0;
      local_228 = FUN_00f600e0;
      local_220 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_218 = IVar4;
      _dispatch_async(puVar3,&local_238);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_218,0);
    }
    _objc_storeStrong(&local_1a0);
    _objc_storeStrong(&local_128,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

