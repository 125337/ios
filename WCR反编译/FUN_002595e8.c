// FUN_002595e8 @ 002595e8

byte FUN_002595e8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_90;
  ulong local_48 [2];
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    local_38 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_headerViewModel_026a0fa0);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_headerViewModel_026a0fa0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_38 == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      local_48[0] = 0;
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_packageId_026a0fb8);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_packageId_026a0fb8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48[0];
        local_48[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_48[0];
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      local_90 = 0;
      if ((uVar2 & 1) != 0) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonPid);
        local_90 = (byte)uVar2;
      }
      local_11 = local_90 & 1;
      local_30 = 1;
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

