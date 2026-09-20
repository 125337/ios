// FUN_0020dec0 @ 0020dec0

void FUN_0020dec0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long local_b0;
  long local_98;
  bool local_61;
  long local_60;
  long local_58;
  bool local_49;
  long local_48;
  long local_40;
  long local_38;
  undefined4 local_30;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (((local_18 == 0) || (local_20 == 0)) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_msgBannerBgUseImageBackground_026a06a8),
     (uVar2 & 1) == 0)) {
    local_30 = 1;
  }
  else {
    local_98 = local_18;
    FUN_0021081c();
    _objc_retainAutoreleasedReturnValue();
    local_49 = false;
    bVar1 = local_98 == 0;
    local_38 = local_98;
    if (bVar1) {
      local_98 = 0;
    }
    else {
      FUN_00211fd4();
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_98;
    }
    local_49 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_98;
    if ((local_49 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    local_61 = local_38 == 0;
    if (local_61) {
      local_b0 = 0;
    }
    else {
      local_b0 = local_38;
      _objc_getAssociatedObject(local_38,&DAT_028c9195);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_b0;
    }
    local_61 = !local_61;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b0;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_58 == 0) || (local_40 == 0)) {
      local_30 = 1;
    }
    else {
      FUN_00212938(local_58,local_40,local_20);
      local_30 = 0;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

