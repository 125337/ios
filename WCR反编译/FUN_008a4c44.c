// FUN_008a4c44 @ 008a4c44

void FUN_008a4c44(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_asset_026a97d0);
  uVar2 = local_20;
  if ((uVar1 & 1) == 0) {
    FUN_008a4394(local_20,PTR_s_assetInfo_026a97f8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

