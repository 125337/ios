// wcr_shouldDeferWatermarkAlbumScanToFrameProcessor @ 00726590

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenshotWatermarkProcessor::wcr_shouldDeferWatermarkAlbumScanToFrameProcessor
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  byte local_11;
  
  pcVar2 = &cf_WCRefineScreenshotFrameProcessor;
  _NSClassFromString();
  puVar1 = PTR_s_WCR_shouldWatermarkAlbumEnhancem_026a79d8;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_WCR_shouldWatermarkAlbumEnhancem_026a79d8);
    if (((ulong)pcVar3 & 1) == 0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
      local_11 = (byte)pcVar2 & 1;
    }
  }
  return (uint)local_11;
}

