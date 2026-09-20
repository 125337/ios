// FUN_002f3a6c @ 002f3a6c

uint FUN_002f3a6c(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_gestureScreenshotSaveToAlbum_026a1f20);
  local_2c = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_gestureScreenshotPostProcessOnly_026a1f28);
    local_2c = (uint)uVar1 ^ 1;
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

