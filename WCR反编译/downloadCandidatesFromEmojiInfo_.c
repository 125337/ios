// downloadCandidatesFromEmojiInfo: @ 00f35eac

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::downloadCandidatesFromEmojiInfo_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_18 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_20;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringValueFromObject_key__026abfe0,local_30,&cf_aesKey);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_20;
    puVar2 = local_40;
    IVar4 = local_20;
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringValueFromObject_key__026abfe0,local_30,&cf_url);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_appendCandidate_url_aesKey__026ac070,puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar1 = local_20;
    puVar2 = local_40;
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringValueFromObject_key__026abfe0,local_30,&cf_encryptUrl);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_appendCandidate_url_aesKey__026ac070,puVar2,IVar3,local_48);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar1 = local_20;
    puVar2 = local_40;
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringValueFromObject_key__026abfe0,local_30,&cf_externUrl);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_appendCandidate_url_aesKey__026ac070,puVar2,IVar3,0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar1 = local_20;
    puVar2 = local_40;
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringValueFromObject_key__026abfe0,local_30,&cf_tpUrlString);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_appendCandidate_url_aesKey__026ac070,puVar2,IVar3,0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_34 = 1;
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

