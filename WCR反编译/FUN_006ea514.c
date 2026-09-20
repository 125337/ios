// FUN_006ea514 @ 006ea514

void FUN_006ea514(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_wcr_shouldObserveRecordingPostPr_026a6db8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_wcr_isApplicationActive_026a6ed8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_waitingForRecordingAsset_026a6eb8);
      if ((uVar1 & 1) == 0) {
        uVar1 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_wcr_shouldRunGlobalAlbumEnhancem_026a6ec8)
        ;
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3feb333333333333,*(undefined8 *)(param_1 + 0x20),
                     PTR_s_wcr_scheduleGlobalRecordingAlbum_026a6ed0,&cf_photochange);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c78,*(undefined8 *)(param_1 + 0x20),
                   PTR_s_wcr_scheduleRecordingScanAfterDe_026a6ec0,&cf_photochange);
      }
    }
  }
  return;
}

