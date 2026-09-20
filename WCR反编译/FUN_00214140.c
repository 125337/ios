// FUN_00214140 @ 00214140

undefined8 FUN_00214140(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_48;
  long local_20;
  undefined8 local_18;
  long *plVar2;
  
  plVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar2,param_2);
  uVar1 = (uint)plVar2;
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    FUN_001d6008();
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_msgBannerBgImageOffsetYLight_026a07d8);
      local_48 = param_1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_msgBannerBgImageOffsetYDark_026a07d0);
      local_48 = param_1;
    }
    local_18 = local_48;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

