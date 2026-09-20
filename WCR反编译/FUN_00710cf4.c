// FUN_00710cf4 @ 00710cf4

void FUN_00710cf4(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  double local_180;
  double local_70;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotPostProcessOnly_026a1f28);
  if (((((ulong)puVar2 & 1) == 0) &&
      (puVar2 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_screenshotFrameEnabled_026a1ef0),
      ((ulong)puVar2 & 1) != 0)) &&
     (puVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_screenshotFrameAlbumEnhancementE_026a75c8)
     , ((ulong)puVar2 & 1) != 0)) {
    lVar3 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_effectiveFrameTemplateRelativePa_026a7608);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_48 = 1;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isDoubleModeTemplate_026a7658);
      if ((uVar4 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (puVar5 == (undefined *)0x0) {
          local_48 = 1;
        }
        else {
          lVar3 = *(long *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar3,PTR_s_wcr_albumEnhancementObserveFetch_026a7708);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar3 == 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_wcr_fetchResultForScreenshotAlbu_026a7710);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),
                       PTR_s_setWcr_albumEnhancementObserveFe_026a7600);
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          lVar3 = *(long *)(param_1 + 0x28);
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_wcr_albumEnhancementObserveFetch_026a7708);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_changeDetailsForFetchResult__026a7718);
          _objc_retainAutoreleasedReturnValue();
          local_58 = lVar3;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (local_58 == 0) {
            local_48 = 1;
          }
          else {
            lVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_fetchResultAfterChanges_026a7720);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),
                       PTR_s_setWcr_albumEnhancementObserveFe_026a7600);
            (*(code *)PTR__objc_release_02578630)(lVar3);
            lVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_insertedObjects_026a7728);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar3);
            if (lVar7 == 0) {
              local_48 = 1;
            }
            else {
              puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar2);
              bVar1 = puVar8 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
              puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if (((ulong)puVar5 & 1) == 0) {
                local_70 = DAT_02324028;
                if (bVar1) {
                  local_70 = DAT_02323f80;
                }
              }
              else {
                local_70 = DAT_02323d40;
                if (bVar1) {
                  local_70 = DAT_02323ec8;
                }
              }
              if (bVar1) {
                uVar6 = *(undefined8 *)(param_1 + 0x20);
                local_180 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_WCR_albumEnhancementExtraDelayAf_026a7730);
                if (local_180 <= local_70) {
                  local_180 = local_70;
                }
                local_70 = local_180;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSObject_026ce188,
                         PTR_s_cancelPreviousPerformRequestsWit_026a4988,
                         *(undefined8 *)(param_1 + 0x20),
                         PTR_s_processAlbumEnhancementScanFromL_026a76e0,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,*(undefined8 *)(param_1 + 0x20),
                         PTR_s_performSelector_withObject_after_026a4990,
                         PTR_s_processAlbumEnhancementScanFromL_026a76e0,0);
              uVar4 = *(ulong *)(param_1 + 0x20);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_wcr_frameAlbumMaxWaitScheduled_026a7738);
              if ((uVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (*(undefined8 *)(param_1 + 0x20),
                           PTR_s_setWcr_frameAlbumMaxWaitSchedule_026a7700,1);
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_02324270,*(undefined8 *)(param_1 + 0x20),
                           PTR_s_performSelector_withObject_after_026a4990,
                           PTR_s_wcr_processFrameAlbumEnhancement_026a76f8,0);
              }
              local_48 = 0;
            }
          }
          _objc_storeStrong(&local_58,0);
        }
      }
      else {
        local_48 = 1;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

