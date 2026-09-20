// wcr_resolveCurrentUserWxidUncached @ 00fa9fc0

/* Function Stack Size: 0x10 bytes */

ID WCRefineHelper::wcr_resolveCurrentUserWxidUncached(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_160;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  char *local_80;
  cfstringStruct *local_78;
  undefined4 local_6c;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  pcVar1 = "MMContext";
  local_38 = param_2;
  local_30 = param_1;
  _objc_getClass();
  pcVar2 = &cf_activeUserContext;
  local_40 = (cfstringStruct *)pcVar1;
  _NSSelectorFromString();
  local_58 = pcVar2;
  if ((local_40 == (cfstringStruct *)0x0) ||
     (pcVar3 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
  }
  else {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,local_58);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_serviceCenter;
    local_60 = pcVar3;
    _NSSelectorFromString();
    local_68 = pcVar2;
    if ((local_60 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2),
       ((ulong)pcVar3 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &::cf___;
      local_6c = 1;
    }
    else {
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar2;
      if ((pcVar2 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar2 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &::cf___;
        local_6c = 1;
      }
      else {
        pcVar1 = "CContactMgr";
        _objc_getClass();
        local_80 = pcVar1;
        if (pcVar1 == (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &::cf___;
          local_6c = 1;
        }
        else {
          pcVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getService__0269d170,pcVar1);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &::cf___;
            local_6c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
            if (((ulong)pcVar2 & 1) == 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &::cf___;
              local_6c = 1;
            }
            else {
              pcVar2 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
              _objc_retainAutoreleasedReturnValue();
              local_90 = pcVar2;
              if (pcVar2 == (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &::cf___;
                local_6c = 1;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
                if (((ulong)pcVar2 & 1) == 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &::cf___;
                  local_6c = 1;
                }
                else {
                  pcVar2 = local_90;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_90,PTR_s_performSelector__026ca7b8,PTR_s_m_nsUsrName_0269d638);
                  _objc_retainAutoreleasedReturnValue();
                  local_160 = pcVar2;
                  if (pcVar2 == (cfstringStruct *)0x0) {
                    local_160 = &::cf___;
                  }
                  local_98 = pcVar2;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = local_160;
                  local_6c = 1;
                  _objc_storeStrong(&local_98,0);
                }
              }
              _objc_storeStrong(&local_90,0);
            }
          }
          _objc_storeStrong(&local_88,0);
        }
      }
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

