// getDefaultAvatarUrl @ 01c246b4

/* Function Stack Size: 0x10 bytes */

ID WCRefineMusicCoverViewController::getDefaultAvatarUrl(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_a8;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  char *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if ((puVar1 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    local_40 = (cfstringStruct *)pcVar2;
    if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = (cfstringStruct *)pcVar2;
      if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &::cf___;
        local_34 = 1;
      }
      else {
        pcVar2 = "CContactMgr";
        _objc_getClass();
        local_50 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &::cf___;
          local_34 = 1;
        }
        else {
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                     pcVar2);
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &::cf___;
            local_34 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
            _objc_retainAutoreleasedReturnValue();
            local_60 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &::cf___;
              local_34 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl);
              _objc_retainAutoreleasedReturnValue();
              local_68 = pcVar3;
              if ((pcVar3 == (cfstringStruct *)0x0) ||
                 ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0),
                 pcVar3 == (cfstringStruct *)0x0)) {
                pcVar4 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_68;
                local_68 = pcVar4;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
              if (local_68 == (cfstringStruct *)0x0) {
                local_a8 = &::cf___;
              }
              else {
                local_a8 = local_68;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = local_a8;
              local_34 = 1;
              _objc_storeStrong(&local_68,0);
            }
            _objc_storeStrong(&local_60,0);
          }
          _objc_storeStrong(&local_58,0);
        }
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

