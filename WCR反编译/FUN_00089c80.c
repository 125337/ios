// FUN_00089c80 @ 00089c80

void FUN_00089c80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_28 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    pcVar4 = "CContactMgr";
    local_48 = pcVar3;
    _objc_getClass();
    local_50 = pcVar4;
    if ((local_48 != (char *)0x0) && (pcVar4 != (char *)0x0)) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
      if (pcVar3 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                   local_50);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar3;
        if (pcVar3 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar3;
          if (pcVar3 != (char *)0x0) {
            pcVar5 = &cf_m_nsUsrName;
            _NSSelectorFromString();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar5);
            pcVar4 = local_68;
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar5 = &cf_m_nsUsrName;
              _NSSelectorFromString();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_performSelector__026ca7b8,pcVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_70 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((((ulong)pcVar4 & 1) != 0) &&
                 (pcVar3 = local_70,
                 (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
                 pcVar3 != (char *)0x0)) {
                _objc_storeStrong(pcVar3,&local_28,local_70);
              }
              _objc_storeStrong(&local_70,0);
            }
          }
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
  }
  puVar2 = local_28;
  FUN_00071d98();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

