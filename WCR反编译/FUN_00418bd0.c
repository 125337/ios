// FUN_00418bd0 @ 00418bd0

byte FUN_00418bd0(undefined8 param_1,byte param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong local_38;
  long local_30;
  byte local_21;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_21 = param_2;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,local_38)
    ;
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = local_38;
      FUN_0040a974();
      if ((uVar1 & 1) == 0) {
        local_11 = 1;
      }
      else if ((local_21 & 1) == 0) {
        local_11 = 0;
      }
      else {
        lVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
        if (lVar3 == 0) {
          local_11 = 1;
        }
        else {
          lVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_38);
          local_11 = (byte)lVar3 & 1;
        }
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

