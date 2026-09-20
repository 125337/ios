// wcr_hasPhotoReadWriteAuthorization @ 006eadbc

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_hasPhotoReadWriteAuthorization
               (ID param_1,SEL param_2)

{
  ulong uVar1;
  bool local_2c;
  undefined1 *local_28;
  
  uVar1 = 0;
  FUN_006e48ac(0xe,0);
  local_28 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_authorizationStatus_026a1770);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,
               PTR_s_authorizationStatusForAccessLeve_026a1760,2);
  }
  local_2c = 1;
  if (local_28 != (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    local_2c = (bool)((dword *)local_28 == &MACH_HEADER.cputype);
  }
  return local_2c;
}

