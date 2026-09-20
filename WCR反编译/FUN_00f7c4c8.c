// FUN_00f7c4c8 @ 00f7c4c8

byte FUN_00f7c4c8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 1;
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    FUN_00f7d558();
    if (((uVar1 & 1) == 0) && (uVar1 = local_28, FUN_00f7d66c(), (uVar1 & 1) == 0)) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                   local_28);
        if (((ulong)puVar3 & 1) == 0) {
          FUN_00f7d78c();
          _objc_retainAutoreleasedReturnValue();
          local_38 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
          if ((puVar3 == (undefined *)0x0) ||
             (uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28,PTR_s_isEqualToString__0269ccc8,local_38), (uVar1 & 1) == 0)) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
          local_2c = 1;
          _objc_storeStrong(&local_38,0);
        }
        else {
          local_11 = 1;
          local_2c = 1;
        }
      }
      else {
        local_11 = 1;
        local_2c = 1;
      }
    }
    else {
      local_11 = 1;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

