// FUN_00077e3c @ 00077e3c

void FUN_00077e3c(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_98;
  uint local_80;
  undefined *local_50 [3];
  undefined *local_38;
  byte local_29;
  undefined8 *local_28;
  byte *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_29 = 0;
  local_38 = (undefined *)0x0;
  uVar1 = local_18;
  local_28 = param_3;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,&cf_my_profile);
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_profileLayoutEnabled_0269e0f8);
    local_80 = 0;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_profileAvatarCornerOverrideEnabl_0269e100);
      local_80 = (uint)puVar2;
    }
    local_29 = (byte)local_80 & 1;
    if ((local_80 & 1) == 0) {
      local_98 = (undefined *)0x0;
    }
    else {
      local_98 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_profileAvatarCornerRadius_0269e108);
    }
    local_38 = local_98;
    _objc_storeStrong(local_50,0);
  }
  if (local_20 != (byte *)0x0) {
    *local_20 = local_29 & 1;
  }
  if (local_28 != (undefined8 *)0x0) {
    *local_28 = local_38;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

