// FUN_003de250 @ 003de250

void FUN_003de250(long param_1,byte param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_98;
  char *local_38;
  char *local_30;
  byte local_21;
  long local_20;
  char *local_18;
  
  pcVar1 = "MMBadgeView";
  local_21 = param_2;
  local_20 = param_1;
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    local_38 = (char *)0x0;
    if (local_20 != 0) {
      pcVar2 = &cf_redDotWithNumber_;
      _NSSelectorFromString(local_20);
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar2,local_20);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_38;
        local_38 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if ((local_21 & 1) != 0) {
        pcVar2 = &cf_setAsSmallDotForChatSession;
        _NSSelectorFromString();
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar2);
        }
      }
    }
    pcVar1 = local_38;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar1 & 1) == 0) {
      local_98 = (char *)0x0;
    }
    else {
      local_98 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_98;
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

