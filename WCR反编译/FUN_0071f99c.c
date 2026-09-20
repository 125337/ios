// FUN_0071f99c @ 0071f99c

void FUN_0071f99c(void)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  char *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "MMLanguageMgr";
  local_20 = (cfstringStruct *)pcVar1;
  _objc_getClass();
  local_28 = pcVar2;
  if ((local_20 == (cfstringStruct *)0x0) || (pcVar2 == (char *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__OSSvgqGr;
  }
  else {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__OSSvgqGr;
    }
    else {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__OSSvgqGr;
        local_40 = 1;
      }
      else {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768
                  );
        if (((ulong)pcVar3 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__OSSvgqGr;
          local_40 = 1;
        }
        else {
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_getStringForCurLanguage__0269f768,
                     &cf_MessageContent_SendCaptrue_Maybe);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_a0 = &cf__OSSvgqGr;
          }
          else {
            local_a0 = local_50;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_a0;
          local_40 = 1;
          _objc_storeStrong(&local_50,0);
        }
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

