// currentSelfAvatarURLForPreview @ 018282b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFrameLibraryViewController::currentSelfAvatarURLForPreview(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined4 local_4c;
  char *local_48 [3];
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_4c = 1;
    }
    else {
      pcVar1 = "CContactMgr";
      _objc_getClass();
      local_58 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_18 = (char *)0x0;
        local_4c = 1;
      }
      else {
        pcVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170
                   ,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar2;
        if ((pcVar2 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
           ((ulong)pcVar2 & 1) == 0)) {
          local_18 = (char *)0x0;
          local_4c = 1;
        }
        else {
          pcVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar1;
          if (pcVar1 == (char *)0x0) {
            local_18 = (char *)0x0;
            local_4c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl);
            _objc_retainAutoreleasedReturnValue();
            local_70 = pcVar1;
            if ((pcVar1 == (char *)0x0) ||
               ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0),
               pcVar1 == (char *)0x0)) {
              pcVar2 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_70;
              local_70 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
            }
            pcVar1 = local_70;
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = pcVar1;
            local_4c = 1;
            _objc_storeStrong(&local_70,0);
          }
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
    }
    _objc_storeStrong(local_48,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

