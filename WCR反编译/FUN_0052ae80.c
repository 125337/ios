// FUN_0052ae80 @ 0052ae80

void FUN_0052ae80(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0052b0bc;
  }
  uVar2 = local_20;
  FUN_0052b0f0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  FUN_0052b1d8();
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_WCMediaImageScrollView;
    local_48[0] = uVar3;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
    if ((uVar3 & 1) == 0) {
LAB_0052b06c:
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = local_48[0];
      FUN_0052b0f0();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      FUN_0052b1d8();
      uVar3 = local_50;
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_50,0);
      if (local_24 == 0) goto LAB_0052b06c;
    }
    _objc_storeStrong(local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_24 = 1;
  }
  _objc_storeStrong(&local_30,0);
LAB_0052b0bc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

