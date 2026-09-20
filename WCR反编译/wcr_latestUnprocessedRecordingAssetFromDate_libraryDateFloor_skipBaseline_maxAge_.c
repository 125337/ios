// wcr_latestUnprocessedRecordingAssetFromDate:libraryDateFloor:skipBaseline:maxAge: @ 006ec55c

/* Function Stack Size: 0x2c bytes */

ID WCRefineScreenRecordingFrameProcessor::
   wcr_latestUnprocessedRecordingAssetFromDate_libraryDateFloor_skipBaseline_maxAge_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,double param_6)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **local_350;
  undefined *local_338;
  uint local_2c4;
  undefined *local_270;
  undefined *local_268;
  undefined *local_230;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  byte local_199;
  undefined *local_198;
  byte local_189;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined *local_140;
  undefined8 local_138;
  ID local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined4 local_10c;
  undefined *local_108 [3];
  undefined *local_f0;
  double local_e8;
  byte local_d9;
  long local_d8;
  undefined *local_d0;
  SEL local_c8;
  undefined *local_c0;
  ID local_b8;
  undefined1 auStack_b0 [128];
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (undefined *)0x0;
  local_c8 = param_2;
  local_c0 = (undefined *)param_1;
  _objc_storeStrong(&local_d0,param_3);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_4);
  local_d9 = (byte)param_5;
  puVar2 = PTR__OBJC_CLASS___PHFetchOptions_026ce868;
  local_e8 = param_6;
  _objc_alloc_init();
  puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_026ce870;
  local_f0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSortDescriptor_026ce870,
             PTR_s_sortDescriptorWithKey_ascending__026a6f68,&cf_creationDate,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setSortDescriptors__026a6f70);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setFetchLimit__026a6f78,0x3c);
  puVar2 = PTR__OBJC_CLASS___PHAsset_026ce530;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_fetchAssetsWithMediaType_options_026a6f80,2,
             local_f0);
  _objc_retainAutoreleasedReturnValue();
  local_108[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    local_b8 = 0;
    local_10c = 1;
  }
  else {
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_118 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_screenRecordingFrameProcessedIds_026a6f88);
    _objc_retainAutoreleasedReturnValue();
    local_230 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      local_230 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0,local_230);
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar2;
    if (local_d0 == (undefined *)0x0) {
      param_6 = -120.0;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dateByAddingTimeInterval__0269cd18);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_d0;
      local_d0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    if (local_d8 == 0) {
      _objc_storeStrong(&local_d8,local_d0);
    }
    local_130 = 0;
    local_138 = 0;
    _memset(auStack_180,0,0x40);
    puVar2 = local_108[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_268 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_b0,0x10);
    if (local_268 != (undefined *)0x0) {
      lVar5 = *local_170;
      local_270 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar5 != 0) {
            _objc_enumerationMutation(*local_170 - lVar5,puVar2);
          }
          puVar6 = *(undefined **)(local_178 + (long)local_270 * 8);
          local_140 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_localIdentifier_026a6f90);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_120;
          if (puVar4 != (undefined *)0x0) {
            puVar4 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_localIdentifier_026a6f90);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_containsObject__0269cbb8);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if (((ulong)puVar6 & 1) == 0) {
              local_189 = 0;
              local_199 = 0;
              local_2c4 = 0;
              if ((local_d9 & 1) != 0) {
                puVar6 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c0,PTR_s_recordingBaselineAssetIds_026a6f98);
                _objc_retainAutoreleasedReturnValue();
                local_189 = 1;
                puVar4 = local_140;
                local_188 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_localIdentifier_026a6f90);
                _objc_retainAutoreleasedReturnValue();
                local_199 = 1;
                local_198 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_containsObject__0269cbb8);
                local_2c4 = (uint)puVar6;
              }
              if ((local_199 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_198);
              }
              if ((local_189 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_188);
              }
              if ((local_2c4 & 1) == 0) {
                puVar6 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_localIdentifier_026a6f90);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c0,PTR_s_processingLocalIdentifier_026a6fa0);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isEqualToString__0269ccc8);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                if (((((ulong)puVar3 & 1) == 0) &&
                    (puVar6 = local_c0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_c0,PTR_s_wcr_isScreenRecordingAsset__026a6fa8,local_140),
                    ((ulong)puVar6 & 1) != 0)) &&
                   ((*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_duration_0269dd70),
                   DAT_02323da8 < param_6)) {
                  puVar6 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_creationDate_026a6fb0);
                  _objc_retainAutoreleasedReturnValue();
                  local_338 = puVar6;
                  if (puVar6 == (undefined *)0x0) {
                    local_338 = local_128;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1a8 = local_338;
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  puVar6 = local_c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c0,PTR_s_wcr_libraryEventDateForAsset__026a6fb8,local_140);
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar6 == (undefined *)0x0) {
                    local_350 = &local_1a8;
                  }
                  else {
                    local_350 = &local_1b0;
                  }
                  puVar4 = *local_350;
                  local_1b0 = puVar6;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1b8 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar4,PTR_s_timeIntervalSinceDate__0269cb78,local_128);
                  if (param_6 <= 20.0) {
                    param_6 = local_e8;
                    if ((local_e8 <= 0.0) ||
                       ((*(code *)PTR__objc_msgSend_02578628)
                                  (local_1b8,PTR_s_timeIntervalSinceDate__0269cb78,local_128),
                       -local_e8 <= param_6)) {
                      if (local_1b0 == (undefined *)0x0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1a8,PTR_s_timeIntervalSinceDate__0269cb78,local_d0);
                        if (-5.0 <= param_6) {
LAB_006ed170:
                          if ((local_130 == 0) ||
                             (puVar6 = local_1b8,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_1b8,PTR_s_compare__0269cd10,local_138),
                             puVar6 == (undefined *)0x1)) {
                            _objc_storeStrong(0,&local_130,local_140);
                            _objc_storeStrong(&local_138,local_1b8);
                          }
                          local_10c = 0;
                        }
                        else {
                          local_10c = 3;
                        }
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1b0,PTR_s_timeIntervalSinceDate__0269cb78,local_d0);
                        if (-3.0 <= param_6) {
                          if ((local_d8 == 0) ||
                             ((*(code *)PTR__objc_msgSend_02578628)
                                        (local_1b0,PTR_s_timeIntervalSinceDate__0269cb78,local_d8),
                             -3.0 <= param_6)) goto LAB_006ed170;
                          local_10c = 3;
                        }
                        else {
                          local_10c = 3;
                        }
                      }
                    }
                    else {
                      local_10c = 3;
                    }
                  }
                  else {
                    local_10c = 3;
                  }
                  _objc_storeStrong(&local_1b8);
                  _objc_storeStrong(&local_1b0,0);
                  _objc_storeStrong(&local_1a8,0);
                }
              }
            }
          }
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_b0,
                   0x10);
        local_270 = (undefined *)0x0;
      } while (local_268 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = IVar1;
    local_10c = 1;
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(local_108);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_b8;
}

