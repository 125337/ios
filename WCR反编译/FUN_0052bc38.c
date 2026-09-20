// FUN_0052bc38 @ 0052bc38

void FUN_0052bc38(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_128;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  char *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  local_48[0] = (cfstringStruct *)0x0;
  local_30 = (cfstringStruct *)pcVar1;
  if (((cfstringStruct *)pcVar1 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48[0];
    local_48[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  if (local_48[0] == (cfstringStruct *)0x0) {
    pcVar1 = "MMServiceCenter";
    _objc_getClass();
    local_50 = (cfstringStruct *)pcVar1;
    if (((cfstringStruct *)pcVar1 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48[0];
      local_48[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  if (local_48[0] == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_54 = 1;
  }
  else {
    pcVar1 = "CContactMgr";
    _objc_getClass();
    local_60 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       (pcVar3 = local_48[0],
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar3 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_54 = 1;
    }
    else {
      pcVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_getService__0269d170,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar3;
      if ((pcVar3 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
         ((ulong)pcVar3 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_54 = 1;
      }
      else {
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getSelfContact_0269da60);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar3;
        if ((pcVar3 == (cfstringStruct *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
           ((ulong)pcVar3 & 1) == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
          local_54 = 1;
        }
        else {
          pcVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_78 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)pcVar3 & 1) == 0) {
            local_128 = &cf___;
          }
          else {
            local_128 = local_78;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = local_128;
          local_54 = 1;
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(local_48,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

