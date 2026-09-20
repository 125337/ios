// FUN_00ebaa94 @ 00ebaa94

void FUN_00ebaa94(long param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_78;
  char *local_60;
  char *local_58;
  char *local_50;
  uint local_44;
  char *local_40;
  char *local_38;
  char *local_30;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  _objc_getClass();
  local_28 = param_1;
  if (param_1 == 0) {
    local_18 = (char *)0x0;
    goto LAB_00ebade4;
  }
  pcVar2 = "MMContext";
  _objc_getClass();
  local_38 = (char *)0x0;
  local_30 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_38;
      local_38 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if ((local_38 == (char *)0x0) &&
       (pcVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_activeUserContext_0269d9a8),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_activeUserContext_0269d9a8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_38;
      local_38 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  if ((local_38 == (char *)0x0) ||
     (pcVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar2 & 1) == 0)) {
LAB_00ebac70:
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    bVar1 = false;
    local_50 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar2 & 1) == 0)) {
      local_78 = (char *)0x0;
    }
    else {
      local_78 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_60 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_78;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_58 == (char *)0x0) ||
       (pcVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    local_44 = 1;
    _objc_storeStrong(&local_58,0);
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getService__0269d170,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_44 = (uint)(pcVar2 != (char *)0x0);
    _objc_storeStrong(&local_40,0);
    if (local_44 == 0) goto LAB_00ebac70;
  }
  _objc_storeStrong(&local_38,0);
LAB_00ebade4:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

