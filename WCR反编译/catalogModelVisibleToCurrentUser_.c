// catalogModelVisibleToCurrentUser: @ 0159c454

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoiceCloneHelper::catalogModelVisibleToCurrentUser_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte local_dc;
  byte local_c4;
  cfstringStruct *local_b8;
  cfstringStruct *local_98;
  undefined *local_80;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_11 = 1;
    local_34 = 1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_visibility);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_49 = 0;
    local_59 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_98 = &cf_public;
    }
    else {
      local_98 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_visibility);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_98;
    }
    local_59 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_98;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_private);
    if (((ulong)pcVar3 & 1) == 0) {
      local_11 = 1;
      local_34 = 1;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_ownerWxid);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_71 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_b8 = &::cf___;
      }
      else {
        local_b8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_ownerWxid);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_b8;
      }
      local_71 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_b8;
      if ((local_71 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      local_c4 = 0;
      if (puVar2 != (undefined *)0x0) {
        puVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_68);
        local_dc = 1;
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_isEqualToString__0269ccc8,&cf_wxid_919w3ffmhln712);
          local_dc = (byte)puVar2;
        }
        local_c4 = local_dc;
      }
      local_11 = local_c4 & 1;
      local_34 = 1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

