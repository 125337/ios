// FUN_00744160 @ 00744160

void FUN_00744160(long param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_60;
  char *local_58;
  uint local_4c;
  char *local_48 [3];
  char *local_30;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == 0) {
    local_18 = (char *)0x0;
    goto LAB_00744534;
  }
  if (DAT_028cc738 == (char *)0x0) {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    DAT_028cc738 = pcVar2;
  }
  pcVar2 = DAT_028cc738;
  _objc_retainAutoreleaseReturnValue();
  local_28 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar2 & 1) == 0) {
LAB_007442f8:
      local_4c = 0;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = pcVar2;
      if (pcVar2 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_4c = (uint)(pcVar2 != (char *)0x0);
      _objc_storeStrong(local_48,0);
      if (local_4c == 0) goto LAB_007442f8;
    }
    _objc_storeStrong(&local_30,0);
    if (local_4c != 0) goto LAB_00744534;
  }
  if (DAT_028cc740 == (char *)0x0) {
    pcVar2 = "MMContext";
    _objc_getClass();
    DAT_028cc740 = pcVar2;
  }
  pcVar2 = DAT_028cc740;
  _objc_retainAutoreleaseReturnValue();
  local_58 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    local_60 = (char *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_activeUserContext_0269d9a8);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_activeUserContext_0269d9a8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if ((local_60 == (char *)0x0) &&
       (pcVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    bVar1 = ((ulong)pcVar2 & 1) != 0;
    if (bVar1) {
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    local_4c = (uint)bVar1;
    _objc_storeStrong(&local_60,0);
    if (local_4c != 0) goto LAB_00744534;
  }
  local_18 = (char *)0x0;
LAB_00744534:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

