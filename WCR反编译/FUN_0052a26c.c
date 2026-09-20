// FUN_0052a26c @ 0052a26c

void FUN_0052a26c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  uint local_2c;
  undefined8 local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_28 = param_1;
  local_20 = param_3;
  if (param_3 < 0) {
    local_2c = 1;
  }
  else {
    uVar3 = local_18;
    FUN_0052a52c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
    if (lVar2 < (long)uVar3) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_20);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = &cf_WCImageFullScreenViewContainer;
      local_50[0] = uVar4;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar5);
      uVar3 = local_50[0];
      if ((uVar4 & 1) == 0) {
        local_2c = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = uVar3;
        FUN_0052a7d4();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar3;
        FUN_0052acd4();
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          FUN_0052ad6c(local_28,local_58);
        }
        local_2c = (uint)!bVar1;
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(local_50,0);
    }
    else {
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

