// keywordAutoReplyRuleSummary: @ 01a1718c

/* Function Stack Size: 0x18 bytes */

ID WCRefineGeneralFunctionViewController::keywordAutoReplyRuleSummary_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_168;
  cfstringStruct *local_120;
  bool local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  ulong local_80;
  byte local_71;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  ulong local_58;
  long local_50;
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_inviteChatRoom);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (uVar3 == 0) {
    local_50 = 0;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_countMode);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_integerValue_026ca750);
      local_50 = (long)(int)(uint)(uVar1 == 1);
    }
    if (local_50 == 1) {
      local_60 = (undefined *)0x0;
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_multiItems);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_68 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
      puVar4 = PTR_WCRefineHelper_026ce000;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_multiContent);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_60;
        local_60 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else {
        puVar5 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_autoReplySanitizedMultiItems__026a3620,local_68
                  );
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_60;
        local_60 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      local_71 = 0;
      uVar1 = local_40;
      local_70 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_randomOneFromMulti);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_80 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_boolValue_026ca540);
        local_71 = (byte)uVar1;
      }
      if (local_70 == (undefined *)0x0) {
        pcVar6 = &cf_Yag_g;
        if ((local_71 & 1) == 0) {
          pcVar6 = &cf_SVYag;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar6;
      }
      else {
        local_89 = 0;
        local_99 = 0;
        local_120 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        if ((local_71 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_SVYag)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = local_120;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Yag_g)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          local_88 = local_120;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_120;
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if ((local_89 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
      }
      local_44 = 1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
    else {
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_a8 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_01a08fe8();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (uVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,&cf_e_g);
      }
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_01a08fe8();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (uVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,&cf_N_);
      }
      pcVar6 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_168 = &cf__gn_;
      }
      else {
        local_168 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_componentsJoinedByString__0269d140,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_168;
      }
      local_b1 = pcVar6 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_168;
      if (local_b1) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      local_44 = 1;
      _objc_storeStrong(&local_a8,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf__;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

