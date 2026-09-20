// FUN_0085cc4c @ 0085cc4c

byte FUN_0085cc4c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_11 = 1;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar2;
    while (uVar2 = local_30, local_30 != 0) {
      pcVar1 = &cf_MoreViewController;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_30;
        _objc_getAssociatedObject(local_30,&DAT_028cd4c8);
        _objc_retainAutoreleasedReturnValue();
        local_48[0] = uVar2;
        if (uVar2 == 0) {
LAB_0085cdac:
          local_11 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
          if ((uVar2 & 1) != 0) goto LAB_0085cdac;
          local_11 = 0;
        }
        local_24 = 1;
        _objc_storeStrong(local_48,0);
        goto LAB_0085ce34;
      }
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_11 = 1;
    local_24 = 1;
LAB_0085ce34:
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

