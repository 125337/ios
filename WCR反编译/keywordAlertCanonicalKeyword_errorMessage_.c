// keywordAlertCanonicalKeyword:errorMessage: @ 00f9c900

/* Function Stack Size: 0x20 bytes */

ID WCRefineHelper::keywordAlertCanonicalKeyword_errorMessage_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_c8;
  undefined8 local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  long local_88;
  ID local_80;
  ID local_78;
  int local_70;
  bool local_69;
  cfstringStruct *local_68;
  byte local_59;
  undefined *local_58;
  cfstringStruct *local_50;
  ID *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_c8 = local_40;
  local_59 = 0;
  local_69 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_c8 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_c8;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_c8;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    if (local_48 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_48 = (ID)&cf_sQ_N_Nzz;
    }
    local_28 = (cfstringStruct *)0x0;
    local_70 = 1;
    goto LAB_00f9ce94;
  }
  IVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_keywordAlertRegexPatternFromKeyw_026acd78,local_50);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_78 = IVar4;
  if (IVar4 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar3;
    local_70 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    if (IVar4 == 0) {
      if (local_48 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_48 = (ID)&cf_ckRN_Nzz<h_Y;
      }
      local_28 = (cfstringStruct *)0x0;
      local_70 = 1;
    }
    else {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_keywordAlertPatternLooksOverEsca_026acd80,local_78);
      if ((IVar4 & 1) != 0) {
        IVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_keywordAlertCollapseOverEscapedP_026acd88,local_78);
        _objc_retainAutoreleasedReturnValue();
        local_88 = 0;
        local_98 = 0;
        puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        local_80 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,IVar4,1,&local_98);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(&local_88,local_98);
        local_90 = puVar2;
        if ((puVar2 == (undefined *)0x0) || (local_88 != 0)) {
          local_70 = 0;
        }
        else {
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
          _objc_retainAutoreleasedReturnValue();
          local_70 = 1;
          local_28 = pcVar3;
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
        if (local_70 != 0) goto LAB_00f9ce84;
      }
      local_a0 = 0;
      local_b0 = 0;
      puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,local_78,1,&local_b0);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_a0,local_b0);
      local_a8 = puVar2;
      if ((puVar2 == (undefined *)0x0) || (local_a0 != 0)) {
        if (local_48 != (ID *)0x0) {
          IVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_keywordAlertFriendlyRegexError__026acd90,local_a0);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *local_48 = IVar4;
        }
        local_28 = (cfstringStruct *)0x0;
      }
      else {
        pcVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_characterAtIndex__0269fa18,0);
        pcVar3 = local_50;
        if ((int)pcVar5 == 0xff0f) {
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar3;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar3;
        }
      }
      local_70 = 1;
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
    }
  }
LAB_00f9ce84:
  _objc_storeStrong(&local_78,0);
LAB_00f9ce94:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

