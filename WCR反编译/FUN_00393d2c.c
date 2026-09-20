// FUN_00393d2c @ 00393d2c

void FUN_00393d2c(long param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_90;
  ulong local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar1 = local_28;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = &cf_indexPathOfSessionUserName_;
    _NSSelectorFromString();
    uVar3 = *(ulong *)(param_1 + 0x20);
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,local_40,local_28);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar3 & 1) == 0) {
        local_90 = 0;
      }
      else {
        local_90 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_90;
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

