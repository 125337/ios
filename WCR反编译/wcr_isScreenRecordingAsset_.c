// wcr_isScreenRecordingAsset: @ 006ed424

/* Function Stack Size: 0x18 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_isScreenRecordingAsset_
               (ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mediaType_026a21f8),
     uVar2 != 2)) {
    local_11 = false;
  }
  else {
    uVar1 = 0xd;
    FUN_006e48ac(0,0xd,0);
    if ((uVar1 & 1) == 0) {
      local_11 = true;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mediaSubtypes_026a6fc0);
      local_11 = (uVar2 & 0x80000) != 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

