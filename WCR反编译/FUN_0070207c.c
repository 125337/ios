// FUN_0070207c @ 0070207c

void FUN_0070207c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_40 [3];
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_wcr_cleanupTempURLs__026a7098,
             *(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (((*(byte *)(param_1 + 0x50) & 1) == 0) || (*(long *)(param_1 + 0x30) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_wcr_finishProcessingWithToast_fo_026a7040,
               &cf_U_O_YtOX_vQ1Y_,*(byte *)(param_1 + 0x52) & 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_appendScreenRecordingFrameProces_026a7060,
                 *(undefined8 *)(param_1 + 0x38));
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_appendScreenRecordingFrameProces_026a7060,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
    }
    if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
      if (lVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_wcr_deleteOriginalRecordingAsset_026a73c8,
                   *(undefined8 *)(param_1 + 0x38));
      }
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_wcr_finishProcessingWithToast_fo_026a7040,
               puVar1,*(byte *)(param_1 + 0x52) & 1);
    _objc_storeStrong(local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

