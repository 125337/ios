// FUN_002f67a4 @ 002f67a4

byte FUN_002f67a4(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_68;
  long local_60;
  ulong local_58;
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
    goto LAB_002f6c54;
  }
  pcVar2 = &cf_WCRefineLocalEmoticonLibraryViewController;
  _NSClassFromString();
  local_30 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_002f6c54;
  }
  uVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,local_30);
  uVar5 = local_48[0];
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,local_30);
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        local_11 = 1;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_50,0);
      if (local_24 != 0) goto LAB_002f6c34;
    }
    uVar5 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar5;
    local_60 = 0;
    while (local_60 < 8 && local_58 != 0) {
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_30);
      uVar5 = local_58;
      if ((uVar3 & 1) != 0) {
        local_11 = 1;
        local_24 = 1;
        goto LAB_002f6c14;
      }
      puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar5 & 1) != 0) {
        uVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,local_30);
        bVar1 = (uVar5 & 1) != 0;
        if (bVar1) {
          local_11 = 1;
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(&local_68,0);
        if (local_24 != 0) goto LAB_002f6c14;
      }
      local_60 = local_60 + 1;
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_58;
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    local_11 = 0;
    local_24 = 1;
LAB_002f6c14:
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_11 = 1;
    local_24 = 1;
  }
LAB_002f6c34:
  _objc_storeStrong(local_48,0);
LAB_002f6c54:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

