// downloadCandidatesFromMessageWrap: @ 00f361b0

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::downloadCandidatesFromMessageWrap_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  long *local_1a0;
  ID local_a0;
  long local_98;
  long local_90;
  long local_70;
  undefined *local_68;
  undefined4 local_5c;
  long local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  long local_38 [3];
  
  local_38[2] = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  if (local_58 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_5c = 1;
    local_40 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_70 = 0;
    lVar2 = local_58;
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_70;
    local_70 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar2 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_70;
    local_38[0] = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_38[1] = lVar3;
    for (local_90 = 0; puVar1 = local_68, local_90 < 2; local_90 = local_90 + 1) {
      lVar3 = local_38[local_90];
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = lVar3;
      if (lVar3 == 0) {
        local_5c = 5;
      }
      else {
        IVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringValueFromObject_key__026abfe0,lVar3,&cf_m_aesKey);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
        if (IVar4 == 0) {
          IVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_stringValueFromObject_key__026abfe0,local_98,&cf_aesKey);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_a0;
          local_a0 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        IVar4 = local_48;
        puVar1 = local_68;
        IVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringValueFromObject_key__026abfe0,local_98,&cf_m_cdnUrlString);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_appendCandidate_url_aesKey__026ac070,puVar1);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar4 = local_48;
        puVar1 = local_68;
        IVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringValueFromObject_key__026abfe0,local_98,
                   &cf_m_encryptUrlString);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_appendCandidate_url_aesKey__026ac070,puVar1,IVar5,local_a0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar4 = local_48;
        puVar1 = local_68;
        IVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringValueFromObject_key__026abfe0,local_98,&cf_m_nsExternUrl);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_appendCandidate_url_aesKey__026ac070,puVar1,IVar5,0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar4 = local_48;
        puVar1 = local_68;
        IVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringValueFromObject_key__026abfe0,local_98,&cf_m_tpUrlString);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_appendCandidate_url_aesKey__026ac070,puVar1,IVar5,0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar4 = local_48;
        puVar1 = local_68;
        IVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringValueFromObject_key__026abfe0,local_98,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_appendCandidate_url_aesKey__026ac070,puVar1,IVar5,0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar4 = local_48;
        puVar1 = local_68;
        IVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringValueFromObject_key__026abfe0,local_98,&cf_encryptUrl);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_appendCandidate_url_aesKey__026ac070,puVar1,IVar5,local_a0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar4 = local_48;
        puVar1 = local_68;
        IVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringValueFromObject_key__026abfe0,local_98,&cf_cdnUrlString);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_appendCandidate_url_aesKey__026ac070,puVar1,IVar5,0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        _objc_storeStrong(&local_a0,0);
        local_5c = 0;
      }
      _objc_storeStrong(&local_98,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar1;
    local_5c = 1;
    local_1a0 = local_38 + 2;
    do {
      local_1a0 = local_1a0 + -1;
      _objc_storeStrong(local_1a0,0);
    } while (local_1a0 != local_38);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_38[2]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_40;
}

