// FUN_0030fc8c @ 0030fc8c

uint FUN_0030fc8c(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_homepageCornerEnabled_0269fc40);
  local_2c = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mainFrameCornerEnabled_026a1ff0);
    local_2c = (uint)uVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

