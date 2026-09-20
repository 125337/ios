// FUN_00726d38 @ 00726d38

void FUN_00726d38(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  double dVar11;
  double local_188;
  double local_68;
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
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_screenshotWatermarkEnabled_026a1ee0),
      ((ulong)puVar2 & 1) != 0)) &&
     (puVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_screenshotWatermarkAlbumEnhancem_026a76c8)
     , ((ulong)puVar2 & 1) != 0)) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_wcr_hasAnyScreenshotWatermarkLay_026a79e0);
    if ((uVar3 & 1) == 0) {
      local_48 = 1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_wcr_shouldDeferWatermarkAlbumSca_026a79e8);
      if ((uVar3 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (puVar4 == (undefined *)0x0) {
          local_48 = 1;
        }
        else {
          lVar5 = *(long *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar5,PTR_s_wcr_watermarkAlbumEnhancementObs_026a7a08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar5 == 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_wcr_fetchResultForWatermarkAlbum_026a7a10);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),
                       PTR_s_setWcr_watermarkAlbumEnhancement_026a7898);
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          lVar5 = *(long *)(param_1 + 0x28);
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_wcr_watermarkAlbumEnhancementObs_026a7a08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_changeDetailsForFetchResult__026a7718);
          _objc_retainAutoreleasedReturnValue();
          local_50 = lVar5;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (local_50 == 0) {
            local_48 = 1;
          }
          else {
            lVar5 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fetchResultAfterChanges_026a7720);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),
                       PTR_s_setWcr_watermarkAlbumEnhancement_026a7898);
            (*(code *)PTR__objc_release_02578630)(lVar5);
            lVar5 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_insertedObjects_026a7728);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar5);
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
              puVar4 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if (((ulong)puVar4 & 1) == 0) {
                local_188 = DAT_02324028;
                if (bVar1) {
                  local_188 = DAT_02323f80;
                }
              }
              else {
                local_188 = DAT_02323d40;
                if (bVar1) {
                  local_188 = DAT_02323ec8;
                }
              }
              local_68 = local_188;
              if (bVar1) {
                pcVar9 = &cf_WCRefineScreenshotFrameProcessor;
                dVar11 = local_188;
                _NSClassFromString();
                puVar2 = PTR_s_WCR_albumEnhancementExtraDelayAf_026a7730;
                if ((pcVar9 != (cfstringStruct *)0x0) &&
                   (pcVar10 = pcVar9,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (pcVar9,PTR_s_respondsToSelector__026ca818,
                              PTR_s_WCR_albumEnhancementExtraDelayAf_026a7730),
                   ((ulong)pcVar10 & 1) != 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar9,puVar2);
                  if (local_188 < dVar11) {
                    local_188 = dVar11;
                  }
                  local_68 = local_188;
                }
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSObject_026ce188,
                         PTR_s_cancelPreviousPerformRequestsWit_026a4988,
                         *(undefined8 *)(param_1 + 0x20),
                         PTR_s_processWatermarkAlbumEnhancement_026a79f0,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68,*(undefined8 *)(param_1 + 0x20),
                         PTR_s_performSelector_withObject_after_026a4990,
                         PTR_s_processWatermarkAlbumEnhancement_026a79f0,0);
              uVar3 = *(ulong *)(param_1 + 0x20);
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_wcr_albumMaxWaitScheduled_026a7a18);
              if ((uVar3 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (*(undefined8 *)(param_1 + 0x20),
                           PTR_s_setWcr_albumMaxWaitScheduled__026a7a00,1);
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_02324270,*(undefined8 *)(param_1 + 0x20),
                           PTR_s_performSelector_withObject_after_026a4990,
                           PTR_s_wcr_processWatermarkAlbumEnhance_026a79f8,0);
              }
              local_48 = 0;
            }
          }
          _objc_storeStrong(&local_50,0);
        }
      }
      else {
        local_48 = 1;
      }
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

