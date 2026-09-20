// FUN_01aad60c @ 01aad60c

void FUN_01aad60c(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_90;
  char *local_80;
  bool local_69;
  char *local_68;
  bool local_59;
  char *local_58;
  char *local_50;
  char *local_48;
  uint local_3c;
  char *local_38;
  char *local_30;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  local_20 = param_1;
  _objc_getClass();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) {
LAB_01aad720:
      local_3c = 0;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_3c = (uint)(pcVar1 != (char *)0x0);
      _objc_storeStrong(&local_38,0);
      if (local_3c == 0) goto LAB_01aad720;
    }
    _objc_storeStrong(&local_30,0);
    if (local_3c != 0) goto LAB_01aad964;
  }
  pcVar1 = "MMContext";
  _objc_getClass();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  local_59 = ((ulong)pcVar1 & 1) == 0;
  if (local_59) {
    local_80 = (char *)0x0;
  }
  else {
    local_80 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_80;
  }
  local_59 = !local_59;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_80;
  if (local_59) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_50 == (char *)0x0) &&
     (pcVar1 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_activeUserContext_0269d9a8),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_activeUserContext_0269d9a8);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_50;
    local_50 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
  local_69 = ((ulong)pcVar1 & 1) == 0;
  if (local_69) {
    local_90 = (char *)0x0;
  }
  else {
    local_90 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_90;
  }
  local_69 = !local_69;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_90;
  if (local_69) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  local_3c = 1;
  _objc_storeStrong(&local_50,0);
LAB_01aad964:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

