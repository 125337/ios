// FUN_00212754 @ 00212754

byte FUN_00212754(undefined8 param_1)

{
  long lVar1;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_msgBannerBgVideoMuted_026a07b0);
    local_11 = (byte)lVar1 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

