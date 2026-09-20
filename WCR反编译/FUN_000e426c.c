// FUN_000e426c @ 000e426c

void FUN_000e426c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_90;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_000d8d08(local_18,"m_footerView");
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if (uVar1 == 0) {
    local_30 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_000d8d08(local_18,"m_arrMsg");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_90 = 0;
    }
    else {
      local_90 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    }
    local_40 = local_90;
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c8399);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    if (local_40 == 0) {
      pcVar3 = &cf_onStateOfNoData_;
      _NSSelectorFromString();
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar3,&cf___);
      }
      local_30 = 1;
    }
    else {
      pcVar3 = &cf_resetStatus_;
      _NSSelectorFromString();
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
      uVar1 = local_20;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_boolValue_026ca540);
        uVar5 = 2;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar3,uVar5);
      }
      local_30 = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

