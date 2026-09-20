// FUN_007d9888 @ 007d9888

byte FUN_007d9888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte local_ec;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  uint local_94;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  local_59 = 0;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController);
  local_94 = 1;
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_94 = (uint)puVar2 ^ 1;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_94 & 1) == 0) {
    uVar1 = DAT_028ccd38;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccd38,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_21 = 0;
      local_60 = 1;
    }
    else {
      if (local_38 == (cfstringStruct *)0x0) {
        local_c0 = &cf___;
      }
      else {
        local_c0 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_c0;
      if (local_40 == (cfstringStruct *)0x0) {
        local_d8 = &cf___;
      }
      else {
        local_d8 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_d8;
      uVar1 = DAT_028ccd38;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccd38,PTR_s_isEqualToString__0269ccc8,local_68);
      local_ec = 0;
      if ((uVar1 & 1) != 0) {
        uVar3 = DAT_028ccd40;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccd40,PTR_s_isEqualToString__0269ccc8,local_70)
        ;
        local_ec = (byte)uVar3;
      }
      local_21 = local_ec & 1;
      local_60 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
  }
  else {
    local_21 = 0;
    local_60 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

