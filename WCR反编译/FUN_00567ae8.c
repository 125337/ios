// FUN_00567ae8 @ 00567ae8

byte FUN_00567ae8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_50;
  ulong local_48 [3];
  cfstringStruct *local_30;
  uint local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar2 = &cf_WCCommentView;
    _NSClassFromString();
    uVar3 = local_20;
    local_30 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = uVar3;
    do {
      if (local_48[0] == 0) {
        local_11 = 0;
        local_24 = 1;
        break;
      }
      if ((local_30 != (cfstringStruct *)0x0) &&
         (uVar3 = local_48[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,local_30),
         (uVar3 & 1) != 0)) {
        local_11 = 1;
        local_24 = 1;
        break;
      }
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      FUN_00567738();
      bVar1 = (uVar3 & 1) == 0;
      if (bVar1) {
        uVar4 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48[0];
        local_48[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        local_11 = 1;
      }
      local_24 = (uint)!bVar1;
      _objc_storeStrong(&local_50,0);
    } while (local_24 == 0);
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

