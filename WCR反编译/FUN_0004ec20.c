// FUN_0004ec20 @ 0004ec20

void FUN_0004ec20(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  uint local_5c;
  char *local_58 [3];
  char *local_40;
  char *local_38;
  long local_30;
  char *local_28;
  
  local_30 = param_1;
  if (param_1 == 0) {
    local_28 = (char *)0x0;
    goto LAB_0004f14c;
  }
  pcVar1 = "MMContext";
  _objc_getClass();
  local_40 = (char *)0x0;
  local_38 = pcVar1;
  if ((pcVar1 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  if (((local_40 == (char *)0x0) && (local_38 != (char *)0x0)) &&
     (pcVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_activeUserContext_0269d9a8),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_activeUserContext_0269d9a8);
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
LAB_0004ee54:
    if ((local_40 != (char *)0x0) &&
       (pcVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_serviceCenter_0269d9b0),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_serviceCenter_0269d9b0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar1 & 1) == 0)) {
LAB_0004efac:
        local_5c = 0;
      }
      else {
        pcVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getService__0269d170,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
        }
        local_5c = (uint)(pcVar1 != (char *)0x0);
        _objc_storeStrong(&local_70,0);
        if (local_5c == 0) goto LAB_0004efac;
      }
      _objc_storeStrong(&local_68,0);
      if (local_5c != 0) goto LAB_0004f12c;
    }
    pcVar1 = "MMServiceCenter";
    _objc_getClass();
    local_78 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar1 & 1) == 0)) {
        local_5c = 0;
      }
      else {
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getService__0269d170,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_5c = 1;
        local_28 = pcVar1;
      }
      _objc_storeStrong(&local_80,0);
      if (local_5c != 0) goto LAB_0004f12c;
    }
    local_28 = (char *)0x0;
    local_5c = 1;
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
    }
    local_5c = (uint)(pcVar1 != (char *)0x0);
    _objc_storeStrong(local_58,0);
    if (local_5c == 0) goto LAB_0004ee54;
  }
LAB_0004f12c:
  _objc_storeStrong(&local_40,0);
LAB_0004f14c:
  _objc_autoreleaseReturnValue(local_28);
  return;
}

