// wechatServiceForClass: @ 01e86aa4

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoCardView::wechatServiceForClass_(ID param_1,SEL param_2,CLASS param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *local_40;
  char *local_38;
  CLASS local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  pcVar1 = "MMContext";
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  local_38 = pcVar1;
  if ((pcVar1 == (char *)0x0) || (local_30 == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    local_40 = (char *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if ((local_40 == (char *)0x0) ||
       (pcVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

