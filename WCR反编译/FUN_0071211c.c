// FUN_0071211c @ 0071211c

void FUN_0071211c(long param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  if ((param_2 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    local_28 = param_1;
    local_19 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendScreenshotFrameAlbumEnhanc_026a76c0,
                 *(undefined8 *)(param_1 + 0x20));
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_screenshotWatermarkAlbumEnhancem_026a76c8);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_appendScreenshotWatermarkAlbumEn_026a76d0,
                   *(undefined8 *)(param_1 + 0x20));
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

