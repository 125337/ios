// wcr_pump: @ 014f24a0

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsEngine::wcr_pump_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  char *pcVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  char *pcVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint local_734;
  uint local_72c;
  char *local_670;
  char *local_668;
  char *local_5f8;
  char *local_5f0;
  uint local_514;
  char *local_478;
  char *local_470;
  undefined *local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  code *local_3e8;
  undefined *local_3e0;
  ID local_3d8;
  unsigned_long_long local_3d0;
  undefined *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  code *local_3b8;
  undefined *local_3b0;
  ID local_3a8;
  unsigned_long_long local_3a0;
  byte local_396;
  byte local_395;
  byte local_394;
  byte local_393;
  byte local_392;
  byte local_391;
  uint local_390;
  uint local_38c;
  undefined1 auStack_388 [8];
  long local_380;
  long *local_378;
  undefined8 local_348;
  long local_340;
  uint local_334;
  uint local_330;
  byte local_329;
  ID local_328;
  ID local_320;
  ID local_318;
  uint local_30c;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  undefined8 local_2c8;
  uint local_2c0;
  char local_2b9;
  char *local_2b8;
  int local_2ac;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  ID local_288;
  unsigned_long_long local_280;
  byte local_272;
  byte local_271;
  uint local_270;
  uint local_26c;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  long local_220;
  byte local_211;
  uint local_210;
  uint local_20c;
  char *local_208;
  int local_1fc;
  char *local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  unsigned_long_long local_1c8;
  unsigned_long_long local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = param_3;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_generation_026af8a8);
  if (param_3 != param_1) goto LAB_014f4694;
  puVar6 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar13 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar6 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar8 = local_1b0;
    local_1f0 = PTR___NSConcreteStackBlock_02578660;
    local_1e8 = 0xc2000000;
    local_1e4 = 0;
    local_1e0 = FUN_014f46c4;
    local_1d8 = &DAT_0257cc98;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = IVar8;
    local_1c8 = local_1c0;
    _dispatch_async(puVar13,&local_1f0);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    _objc_storeStrong(&local_1d0,0);
    goto LAB_014f4694;
  }
  pcVar7 = "CMessageMgr";
  _objc_getClass();
  FUN_014e23b8();
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = pcVar7;
  if (pcVar7 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b0,PTR_s_wcr_finishSession_cancelled__026afc30,local_1c0,0);
    local_1fc = 1;
  }
  else {
    IVar8 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobAppMsgPhase_026afc38);
    pcVar7 = local_1f8;
    if ((IVar8 & 1) == 0) {
      local_2ac = 0;
      IVar8 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobUsr_026afba0);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromID_026afc80);
      IVar10 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromCreateTime_026afc88);
      IVar11 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobPreferCreateTime_026afc90);
      FUN_014f4a98(pcVar7,IVar8,IVar9 & 0xffffffff,IVar10 & 0xffffffff,IVar11,&local_2ac);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(IVar8);
      IVar8 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobPreferCreateTime_026afc90);
      if (((((IVar8 & 1) != 0) &&
           (IVar8 = local_1b0,
           (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromID_026afc80),
           (int)IVar8 == 0)) &&
          (IVar8 = local_1b0,
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromCreateTime_026afc88),
          (int)IVar8 == 0)) &&
         (pcVar7 = local_2b8, (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0),
         pcVar7 == (char *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setJobPreferCreateTime__026afae8,0);
        pcVar12 = local_1f8;
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobUsr_026afba0);
        _objc_retainAutoreleasedReturnValue();
        IVar9 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromID_026afc80);
        IVar10 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromCreateTime_026afc88);
        FUN_014f4a98(pcVar12,IVar8,IVar9 & 0xffffffff,IVar10,0,&local_2ac);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_2b8;
        local_2b8 = pcVar12;
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(IVar8);
      }
      IVar8 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromID_026afc80);
      local_2b9 = false;
      if ((int)IVar8 == 0) {
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromCreateTime_026afc88);
        local_2b9 = (int)IVar8 == 0;
      }
      if (((bool)local_2b9 == false) ||
         (pcVar7 = local_2b8, (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0),
         pcVar7 == (char *)0x0)) {
LAB_014f37bc:
        local_329 = 0;
        local_330 = 0;
        local_334 = 0;
        local_340 = 0;
        pcVar7 = local_2b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0);
        if (pcVar7 != (char *)0x0) {
          _memset(auStack_388,0,0x40);
          pcVar7 = local_2b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_668 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_388,auStack_1a8,
                     0x10);
          if (local_668 != (char *)0x0) {
            lVar14 = *local_378;
            local_670 = (char *)0x0;
            do {
              do {
                pcVar12 = local_668;
                if (*local_378 - lVar14 != 0) {
                  pcVar12 = pcVar7;
                  _objc_enumerationMutation(*local_378 - lVar14);
                }
                local_348 = *(undefined8 *)(local_380 + (long)local_670 * 8);
                _objc_autoreleasePoolPush();
                uVar15 = local_348;
                FUN_014e48f4(local_348,&cf_m_uiCreateTime);
                local_38c = (uint)uVar15;
                uVar15 = local_348;
                FUN_014e48f4(local_348,&cf_m_uiMesLocalID);
                local_390 = (uint)uVar15;
                if ((local_390 == 0) || ((local_330 != 0 && (local_330 <= local_390)))) {
                  if ((local_390 == local_330) &&
                     ((local_38c != 0 && ((local_334 == 0 || (local_38c < local_334)))))) {
                    local_334 = local_38c;
                  }
                }
                else {
                  local_334 = local_38c;
                  local_330 = local_390;
                }
                IVar8 = local_1b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobNewestLocalID_026afca0);
                if (((int)IVar8 == 0) && (local_390 != 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b0,PTR_s_setJobNewestLocalID__026afa78,local_390);
                }
                IVar8 = local_1b0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b0,PTR_s_wcr_keepWrap__026afc50,local_348);
                if ((IVar8 & 1) == 0) {
                  local_340 = local_340 + 1;
                  local_1fc = 7;
                }
                else {
                  IVar8 = local_1b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowEnd_026afb00);
                  uVar3 = local_38c;
                  if (((int)IVar8 == 0) ||
                     (IVar8 = local_1b0,
                     (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowEnd_026afb00),
                     uVar3 <= (uint)IVar8)) {
                    IVar8 = local_1b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowStart_026afaf8);
                    uVar3 = local_38c;
                    bVar5 = false;
                    if (((int)IVar8 != 0) && (bVar5 = false, local_38c != 0)) {
                      IVar8 = local_1b0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowStart_026afaf8)
                      ;
                      bVar5 = uVar3 < (uint)IVar8;
                    }
                    local_391 = bVar5;
                    IVar8 = local_1b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_overviewMode_026af898);
                    if (((IVar8 & 1) == 0) || ((local_391 & 1) == 0)) {
                      if (((local_391 & 1) == 0) &&
                         (IVar8 = local_1b0,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_1b0,PTR_s_jobLifeActivePhase_026afc58), (IVar8 & 1) == 0))
                      {
                        IVar8 = local_1b0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
                        IVar9 = local_1b0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
                        FUN_014f4968(IVar8,IVar9);
                        if ((IVar8 & 1) == 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1b0,PTR_s_wcr_tallyWrap_createTime__026afc78,local_348,
                                     local_38c);
                          IVar8 = local_1b0;
                          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
                          IVar9 = local_1b0;
                          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
                          FUN_014f4968(IVar8,IVar9);
                          if (((IVar8 & 1) == 0) ||
                             (IVar8 = local_1b0,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_1b0,PTR_s_overviewMode_026af898), (IVar8 & 1) == 0)) {
                            local_1fc = 0;
                          }
                          else {
                            local_1fc = 6;
                          }
                          goto LAB_014f3d54;
                        }
                      }
                      IVar8 = local_1b0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_overviewMode_026af898);
                      if (((IVar8 & 1) == 0) &&
                         (((*(code *)PTR__objc_msgSend_02578628)
                                     (local_1b0,PTR_s_wcr_noteLifeActiveWrap_createTim_026afc68,
                                      local_348,local_38c), (local_391 & 1) != 0 ||
                          ((IVar8 = local_1b0,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_1b0,PTR_s_jobLifeActivePhase_026afc58), (IVar8 & 1) != 0
                           && (IVar8 = local_1b0,
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_1b0,PTR_s_jobWindowStart_026afaf8), (int)IVar8 == 0))
                          )))) {
                        IVar8 = local_1b0;
                        IVar9 = local_1b0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1b0,PTR_s_jobLifeActiveCount_026afc70);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (IVar8,PTR_s_setJobLifeActiveCount__026af9d8,IVar9 + 1);
                        IVar8 = local_1b0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1b0,PTR_s_jobLifeActiveCount_026afc70);
                        if (23999 < IVar8) {
                          local_329 = 1;
                          local_1fc = 6;
                          goto LAB_014f3d54;
                        }
                      }
                      local_1fc = 7;
                    }
                    else {
                      local_329 = 1;
                      local_1fc = 7;
                    }
                  }
                  else {
                    local_1fc = 7;
                  }
                }
LAB_014f3d54:
                _objc_autoreleasePoolPop(pcVar12);
                if ((local_1fc != 0) && (local_1fc != 7)) goto LAB_014f3de4;
                local_670 = local_670 + 1;
              } while (local_670 < local_668);
              local_668 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_388,
                         auStack_1a8,0x10);
              local_670 = (char *)0x0;
            } while (local_668 != (char *)0x0);
          }
          local_1fc = 0;
LAB_014f3de4:
          (*(code *)PTR__objc_release_02578630)(pcVar7);
        }
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobPreferCreateTime_026afc90);
        pcVar1 = &cf_GetMsgByCreateTime;
        if ((IVar8 & 1) == 0) {
          pcVar1 = &cf_GetMsg;
        }
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobUsr_026afba0);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_2b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0);
        lVar14 = local_340;
        IVar9 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
        IVar10 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
        FUN_014f49b4(pcVar1,IVar8,pcVar7,lVar14,IVar9,IVar10);
        (*(code *)PTR__objc_release_02578630)(IVar8);
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
        IVar9 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
        FUN_014f4968(IVar8,IVar9);
        local_392 = (byte)IVar8;
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_overviewMode_026af898);
        if (((IVar8 & 1) == 0) && (((local_392 & 1) != 0 || ((local_329 & 1) != 0)))) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setJobLifeActivePhase__026af9e0,1);
        }
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_overviewMode_026af898);
        if ((IVar8 & 1) == 0) {
          bVar5 = true;
          if ((local_329 & 1) == 0) {
            IVar8 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobLifeActiveCount_026afc70);
            bVar5 = 23999 < IVar8;
          }
        }
        else {
          bVar2 = 1;
          if ((local_392 & 1) == 0) {
            bVar2 = local_329;
          }
          bVar5 = (bool)(bVar2 & 1);
        }
        local_393 = bVar5 != false;
        local_394 = true;
        if (local_330 != 0) {
          IVar8 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromID_026afc80);
          uVar3 = local_330;
          local_394 = false;
          if ((int)IVar8 != 0) {
            IVar8 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobFromID_026afc80);
            local_394 = (uint)IVar8 <= uVar3;
          }
        }
        local_395 = true;
        if (local_2ac == 0) {
          pcVar7 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0);
          local_395 = "" < pcVar7;
        }
        bVar2 = 1;
        if ((local_393 & 1) == 0) {
          pcVar7 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0);
          bVar2 = 1;
          if ((pcVar7 != (char *)0x0) && (bVar2 = 1, (local_394 & 1) == 0)) {
            bVar2 = local_395 ^ 1;
          }
        }
        local_396 = bVar2 & 1;
        if (((bVar2 & 1) == 0) && (local_330 != 0)) {
          if (local_330 < 2) {
            local_396 = 1;
          }
          else {
            IVar8 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobPreferCreateTime_026afc90);
            if ((IVar8 & 1) == 0) {
              local_72c = local_330 - 1;
            }
            else {
              local_72c = local_330;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setJobFromID__026afa68,local_72c);
            IVar8 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobLifeActivePhase_026afc58);
            if ((((IVar8 & 1) == 0) ||
                (IVar8 = local_1b0,
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowStart_026afaf8),
                uVar3 = local_334, (int)IVar8 == 0)) ||
               (IVar8 = local_1b0,
               (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowStart_026afaf8),
               uVar3 <= (uint)IVar8)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_setJobFromCreateTime__026afa70,local_334);
            }
            else {
              IVar8 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowStart_026afaf8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_setJobFromCreateTime__026afa70,IVar8);
            }
          }
        }
        if ((local_396 & 1) == 0) {
          IVar8 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobProgress_026afb88);
          _objc_retainAutoreleasedReturnValue();
          local_734 = 0;
          if (IVar8 != 0) {
            IVar9 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_overviewMode_026af898);
            local_734 = (uint)IVar9 ^ 1;
          }
          (*(code *)PTR__objc_release_02578630)(IVar8);
          if ((local_734 & 1) != 0) {
            IVar8 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobProgress_026afb88);
            _objc_retainAutoreleasedReturnValue();
            IVar9 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
            IVar10 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
            puVar13 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
            (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_stringWithFormat__0269cca8,&::cf__);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(IVar8 + 0x10))(IVar8,IVar9,IVar10);
            (*(code *)PTR__objc_release_02578630)(puVar13);
            (*(code *)PTR__objc_release_02578630)(IVar8);
          }
          puVar13 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          IVar8 = local_1b0;
          local_3c8 = PTR___NSConcreteStackBlock_02578660;
          local_3c0 = 0xc2000000;
          local_3bc = 0;
          local_3b8 = FUN_014f4f04;
          local_3b0 = &DAT_0257cc98;
          (*(code *)PTR__objc_retain_02578638)();
          local_3a8 = IVar8;
          local_3a0 = local_1c0;
          _dispatch_async(puVar13,&local_3c8);
          (*(code *)PTR__objc_release_02578630)(puVar13);
          local_1fc = 1;
          _objc_storeStrong(&local_3a8,0);
        }
        else if ((local_392 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setJobAppMsgPhase__026afa90,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setJobAppFromID__026afa98);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setJobAppFromTime__026afaa0,0);
          puVar13 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          IVar8 = local_1b0;
          local_3f8 = PTR___NSConcreteStackBlock_02578660;
          local_3f0 = 0xc2000000;
          local_3ec = 0;
          local_3e8 = FUN_014f4f4c;
          local_3e0 = &DAT_0257cc98;
          (*(code *)PTR__objc_retain_02578638)();
          local_3d8 = IVar8;
          local_3d0 = local_1c0;
          _dispatch_async(puVar13,&local_3f8);
          (*(code *)PTR__objc_release_02578630)(puVar13);
          local_1fc = 1;
          _objc_storeStrong(&local_3d8,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_wcr_finishSession_cancelled__026afc30,local_1c0,0);
          local_1fc = 0;
        }
      }
      else {
        local_2c0 = 0;
        _memset(auStack_308,0,0x40);
        pcVar7 = local_2b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_5f0 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_128,
                   0x10);
        if (local_5f0 != (char *)0x0) {
          lVar14 = *local_2f8;
          local_5f8 = (char *)0x0;
          do {
            do {
              if (*local_2f8 - lVar14 != 0) {
                _objc_enumerationMutation(*local_2f8 - lVar14,pcVar7);
              }
              uVar15 = *(undefined8 *)(local_300 + (long)local_5f8 * 8);
              local_2c8 = uVar15;
              FUN_014e48f4(uVar15,&cf_m_uiMesLocalID);
              local_30c = (uint)uVar15;
              if (local_2c0 < local_30c) {
                local_2c0 = local_30c;
              }
              local_5f8 = local_5f8 + 1;
            } while (local_5f8 < local_5f0);
            local_5f0 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,
                       auStack_128,0x10);
            local_5f8 = (char *)0x0;
          } while (local_5f0 != (char *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        if (local_2c0 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_setJobNewestLocalID__026afa78,local_2c0);
        }
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_overviewMode_026af898);
        if (((IVar8 & 1) != 0) || (local_2c0 == 0)) goto LAB_014f37bc;
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_class_0269cd60);
        IVar9 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobUsr_026afba0);
        _objc_retainAutoreleasedReturnValue();
        IVar10 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTimeRange_026afac8);
        IVar11 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowStart_026afaf8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar8,PTR_s_cacheKeyForUsr_timeRange_windowS_026afc98,IVar9,IVar10,IVar11,
                   local_2c0);
        _objc_retainAutoreleasedReturnValue();
        local_318 = IVar8;
        (*(code *)PTR__objc_release_02578630)();
        FUN_014f4e90();
        _objc_retainAutoreleasedReturnValue();
        IVar8 = IVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_320 = IVar8;
        (*(code *)PTR__objc_release_02578630)(IVar9);
        IVar8 = local_320;
        puVar13 = PTR_WCRefineSessionStatsResult_026ced38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineSessionStatsResult_026ced38,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_isKindOfClass__0269cd68,puVar13);
        if ((IVar8 & 1) == 0) {
          local_1fc = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setRunning__026acb08,0);
          IVar8 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobSessionDone_026af888);
          _objc_retainAutoreleasedReturnValue();
          local_328 = IVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_wcr_clearJob_026af8b8);
          if (local_328 != 0) {
            (**(code **)(local_328 + 0x10))(local_328,local_320);
          }
          local_1fc = 1;
          _objc_storeStrong(&local_328,0);
        }
        _objc_storeStrong(&local_320);
        _objc_storeStrong(&local_318,0);
        if (local_1fc == 0) goto LAB_014f37bc;
      }
      _objc_storeStrong(&local_2b8,0);
    }
    else {
      IVar8 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobUsr_026afba0);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobAppFromID_026afc40);
      IVar10 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobAppFromTime_026afc48);
      FUN_014f470c(pcVar7,IVar8,IVar9 & 0xffffffff,IVar10);
      _objc_retainAutoreleasedReturnValue();
      local_208 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(IVar8);
      local_20c = 0;
      local_210 = 0;
      local_211 = 0;
      local_220 = 0;
      pcVar7 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
      if (pcVar7 != (char *)0x0) {
        _memset(auStack_268,0,0x40);
        pcVar7 = local_208;
        (*(code *)PTR__objc_retain_02578638)();
        local_470 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_a8,
                   0x10);
        if (local_470 != (char *)0x0) {
          lVar14 = *local_258;
          local_478 = (char *)0x0;
          do {
            do {
              pcVar12 = local_470;
              if (*local_258 - lVar14 != 0) {
                pcVar12 = pcVar7;
                _objc_enumerationMutation(*local_258 - lVar14);
              }
              local_228 = *(undefined8 *)(local_260 + (long)local_478 * 8);
              _objc_autoreleasePoolPush();
              uVar15 = local_228;
              FUN_014e48f4(local_228,&cf_m_uiCreateTime);
              local_26c = (uint)uVar15;
              uVar15 = local_228;
              FUN_014e48f4(local_228,&cf_m_uiMesLocalID);
              local_270 = (uint)uVar15;
              if ((local_270 == 0) || ((local_20c != 0 && (local_20c <= local_270)))) {
                if ((local_270 == local_20c) &&
                   ((local_26c != 0 && ((local_210 == 0 || (local_26c < local_210)))))) {
                  local_210 = local_26c;
                }
              }
              else {
                local_210 = local_26c;
                local_20c = local_270;
              }
              IVar8 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_wcr_keepWrap__026afc50,local_228);
              if ((IVar8 & 1) == 0) {
                local_220 = local_220 + 1;
                local_1fc = 3;
              }
              else {
                IVar8 = local_1b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowEnd_026afb00);
                uVar3 = local_26c;
                if (((int)IVar8 == 0) ||
                   (IVar8 = local_1b0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowEnd_026afb00),
                   uVar3 <= (uint)IVar8)) {
                  IVar8 = local_1b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowStart_026afaf8);
                  uVar3 = local_26c;
                  bVar5 = false;
                  if (((int)IVar8 != 0) && (bVar5 = false, local_26c != 0)) {
                    IVar8 = local_1b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobWindowStart_026afaf8);
                    bVar5 = uVar3 < (uint)IVar8;
                  }
                  local_271 = bVar5;
                  if (((bool)local_271 == false) &&
                     (IVar8 = local_1b0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_1b0,PTR_s_jobLifeActivePhase_026afc58), (IVar8 & 1) == 0)) {
                    IVar8 = local_1b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
                    IVar9 = local_1b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
                    FUN_014f4968(IVar8,IVar9);
                    if ((IVar8 & 1) == 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1b0,PTR_s_wcr_tallyWrap_createTime__026afc78,local_228,
                                 local_26c);
                      IVar8 = local_1b0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
                      IVar9 = local_1b0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
                      FUN_014f4968(IVar8,IVar9);
                      if ((IVar8 & 1) == 0) {
                        local_1fc = 0;
                      }
                      else {
                        local_1fc = 2;
                      }
                      goto LAB_014f2bd0;
                    }
                  }
                  IVar8 = local_1b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_overviewMode_026af898);
                  if (((IVar8 & 1) == 0) &&
                     (((*(code *)PTR__objc_msgSend_02578628)
                                 (local_1b0,PTR_s_wcr_noteLifeActiveWrap_createTim_026afc68,
                                  local_228,local_26c), (local_271 & 1) != 0 ||
                      ((IVar8 = local_1b0,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_1b0,PTR_s_jobLifeActivePhase_026afc58), (IVar8 & 1) != 0 &&
                       (IVar8 = local_1b0,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_1b0,PTR_s_jobWindowStart_026afaf8), (int)IVar8 == 0)))))) {
                    IVar8 = local_1b0;
                    IVar9 = local_1b0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1b0,PTR_s_jobLifeActiveCount_026afc70);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar8,PTR_s_setJobLifeActiveCount__026af9d8,IVar9 + 1);
                    IVar8 = local_1b0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1b0,PTR_s_jobLifeActiveCount_026afc70);
                    if (23999 < IVar8) {
                      local_1fc = 2;
                      goto LAB_014f2bd0;
                    }
                  }
                  local_1fc = 3;
                }
                else {
                  local_1fc = 3;
                }
              }
LAB_014f2bd0:
              _objc_autoreleasePoolPop(pcVar12);
              if ((local_1fc != 0) && (local_1fc != 3)) goto LAB_014f2c60;
              local_478 = local_478 + 1;
            } while (local_478 < local_470);
            local_470 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_a8
                       ,0x10);
            local_478 = (char *)0x0;
          } while (local_470 != (char *)0x0);
        }
        local_1fc = 0;
LAB_014f2c60:
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        if ((local_20c == 0) ||
           (((IVar8 = local_1b0,
             (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobAppFromID_026afc40),
             uVar3 = local_20c, (int)IVar8 != 0 &&
             (IVar8 = local_1b0,
             (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobAppFromID_026afc40),
             uVar4 = local_210, (uint)IVar8 <= uVar3)) &&
            (IVar8 = local_1b0,
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobAppFromTime_026afc48),
            (uint)IVar8 <= uVar4)))) {
          local_211 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setJobAppFromID__026afa98,local_20c)
          ;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_setJobAppFromTime__026afaa0,local_210);
        }
      }
      IVar8 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobUsr_026afba0);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
      lVar14 = local_220;
      IVar9 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
      IVar10 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
      FUN_014f49b4(&cf_GetAppMsgList,IVar8,pcVar7,lVar14,IVar9,IVar10);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      IVar8 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
      IVar9 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
      FUN_014f4968(IVar8,IVar9);
      bVar2 = 1;
      if ((IVar8 & 1) == 0) {
        pcVar7 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
        bVar2 = 1;
        if (pcVar7 != (char *)0x0) {
          bVar2 = local_211;
        }
      }
      local_272 = bVar2 & 1;
      if ((bVar2 & 1) == 0) {
        IVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobProgress_026afb88);
        _objc_retainAutoreleasedReturnValue();
        local_514 = 0;
        if (IVar8 != 0) {
          IVar9 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_overviewMode_026af898);
          local_514 = (uint)IVar9 ^ 1;
        }
        (*(code *)PTR__objc_release_02578630)(IVar8);
        if ((local_514 & 1) != 0) {
          IVar8 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobProgress_026afb88);
          _objc_retainAutoreleasedReturnValue();
          IVar9 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
          IVar10 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobCap_026afc60);
          puVar13 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_jobTotal_026afbc8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(IVar8 + 0x10))(IVar8,IVar9,IVar10);
          (*(code *)PTR__objc_release_02578630)(puVar13);
          (*(code *)PTR__objc_release_02578630)(IVar8);
        }
        puVar13 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar8 = local_1b0;
        local_2a8 = PTR___NSConcreteStackBlock_02578660;
        local_2a0 = 0xc2000000;
        local_29c = 0;
        local_298 = FUN_014f4a50;
        local_290 = &DAT_0257cc98;
        (*(code *)PTR__objc_retain_02578638)();
        local_288 = IVar8;
        local_280 = local_1c0;
        _dispatch_async(puVar13,&local_2a8);
        (*(code *)PTR__objc_release_02578630)(puVar13);
        local_1fc = 1;
        _objc_storeStrong(&local_288,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b0,PTR_s_wcr_finishSession_cancelled__026afc30,local_1c0,0);
        local_1fc = 1;
      }
      _objc_storeStrong(&local_208,0);
    }
  }
  _objc_storeStrong(&local_1f8,0);
LAB_014f4694:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

