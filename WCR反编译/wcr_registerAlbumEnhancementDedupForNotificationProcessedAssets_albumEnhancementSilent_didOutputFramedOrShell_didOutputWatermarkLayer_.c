// wcr_registerAlbumEnhancementDedupForNotificationProcessedAssets:albumEnhancementSilent:didOutputFramedOrShell:didOutputWatermarkLayer: @ 0070fdb4

/* Function Stack Size: 0x24 bytes */

void WCRefineScreenshotFrameProcessor::
     wcr_registerAlbumEnhancementDedupForNotificationProcessedAssets_albumEnhancementSilent_didOutputFramedOrShell_didOutputWatermarkLayer_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5,bool param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_180;
  ulong local_178;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8 [3];
  undefined *local_d0;
  undefined4 local_c8;
  byte local_c3;
  byte local_c2;
  undefined1 local_c1;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c1 = (undefined1)param_4;
  local_c2 = (byte)param_5;
  local_c3 = (byte)param_6;
  if ((param_4 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e8[0] = puVar3;
    _memset(auStack_130,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_178 != 0) {
      lVar4 = *local_120;
      local_180 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar1);
          }
          lVar5 = *(long *)(local_128 + local_180 * 8);
          local_f0 = lVar5;
          if (lVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_localIdentifier_026a6f90);
            _objc_retainAutoreleasedReturnValue();
            local_138 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 == 0) {
              local_c8 = 5;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_addObject__0269d180,local_138)
              ;
              if ((((local_c2 & 1) != 0) &&
                  (puVar2 = local_d0,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d0,PTR_s_screenshotFrameAlbumEnhancementE_026a75c8),
                  ((ulong)puVar2 & 1) != 0)) &&
                 (puVar2 = local_d0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_d0,PTR_s_screenshotFrameEnabled_026a1ef0),
                 ((ulong)puVar2 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_appendScreenshotFrameAlbumEnhanc_026a76c0,local_138);
              }
              if ((((local_c3 & 1) != 0) &&
                  (puVar2 = local_d0,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d0,PTR_s_screenshotWatermarkAlbumEnhancem_026a76c8),
                  ((ulong)puVar2 & 1) != 0)) &&
                 (puVar2 = local_d0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_d0,PTR_s_screenshotWatermarkEnabled_026a1ee0),
                 ((ulong)puVar2 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_appendScreenshotWatermarkAlbumEn_026a76d0,local_138);
              }
              local_c8 = 0;
            }
            _objc_storeStrong(&local_138,0);
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(local_e8);
    _objc_storeStrong(&local_d0,0);
    local_c8 = 0;
  }
  else {
    local_c8 = 1;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

