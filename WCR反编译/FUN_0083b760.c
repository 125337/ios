// FUN_0083b760 @ 0083b760

void FUN_0083b760(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "MMContext";
  _objc_getClass();
  pcVar3 = "MMThemeManager";
  local_20 = pcVar2;
  _objc_getClass();
  local_28 = pcVar3;
  if (((local_20 != (char *)0x0) && (pcVar3 != (char *)0x0)) &&
     (pcVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar2 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_30,0);
    if (bVar1) goto LAB_0083b8bc;
  }
  local_18 = (char *)0x0;
LAB_0083b8bc:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

