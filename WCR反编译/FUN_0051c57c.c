// FUN_0051c57c @ 0051c57c

void FUN_0051c57c(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong local_50 [3];
  ulong local_38;
  ulong local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    do {
      if (local_30 == 0) {
        local_18 = 0;
        local_24 = 1;
        break;
      }
      uVar1 = local_30;
      FUN_0051eac8(local_30,&cf_profileModel);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      if (uVar1 == 0) {
        uVar1 = local_30;
        FUN_0051eac8(local_30,&cf_mediaItem);
        _objc_retainAutoreleasedReturnValue();
        local_50[0] = uVar1;
        if (uVar1 == 0) {
LAB_0051c720:
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_30;
          local_30 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          local_24 = 0;
        }
        else {
          pcVar2 = "TLProfileModel";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
          uVar3 = local_50[0];
          if ((uVar1 & 1) == 0) goto LAB_0051c720;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar3;
          local_24 = 1;
        }
        _objc_storeStrong(local_50,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_24 = 1;
        local_18 = uVar1;
      }
      _objc_storeStrong(&local_38,0);
    } while (local_24 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

