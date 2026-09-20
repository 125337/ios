// FUN_006a4e04 @ 006a4e04

void FUN_006a4e04(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  uint local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = param_1;
  if (param_1 == 0) {
    local_18 = (cfstringStruct *)0x0;
    goto LAB_006a5198;
  }
  pcVar2 = &cf_MMContext;
  _NSClassFromString();
  local_30 = (cfstringStruct *)0x0;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_30 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if ((local_30 == (cfstringStruct *)0x0) &&
     (pcVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_activeUserContext_0269d9a8),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeUserContext_0269d9a8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_30 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if ((local_30 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar2 & 1) == 0)) {
LAB_006a4fc4:
    pcVar2 = &cf_MMServiceCenter;
    _NSClassFromString();
    bVar1 = false;
    local_48 = pcVar2;
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar2 & 1) == 0)) {
      local_80 = (cfstringStruct *)0x0;
    }
    else {
      local_80 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_58 = local_80;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_80;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    bVar1 = false;
    if ((local_50 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar2 & 1) == 0)) {
      local_90 = (cfstringStruct *)0x0;
    }
    else {
      local_90 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_68 = local_90;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    local_3c = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_3c = (uint)(pcVar2 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_38,0);
    if (local_3c == 0) goto LAB_006a4fc4;
  }
  _objc_storeStrong(&local_30,0);
LAB_006a5198:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

