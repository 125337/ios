// summaryForRule: @ 01a0de3c

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAutoReplyListViewController::summaryForRule_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  undefined *local_e8;
  undefined *local_88;
  undefined *local_78;
  ulong local_70;
  byte local_61;
  ID local_60;
  ulong local_58;
  long local_50;
  cfstringStruct *local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &cf__gn_;
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_inviteChatRoom);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (uVar4 == 0) {
    local_50 = 0;
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_countMode);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_integerValue_026ca750);
      local_50 = (long)(int)(uint)(uVar2 == 1);
    }
    if (local_50 == 1) {
      IVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_autoReplyMultiItemsForRule__026bb760,local_40);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      local_61 = 0;
      uVar2 = local_40;
      local_60 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_randomOneFromMulti);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_70 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_boolValue_026ca540);
        local_61 = (byte)uVar2;
      }
      if (local_60 == 0) {
        pcVar8 = &cf_Yag_g;
        if ((local_61 & 1) == 0) {
          pcVar8 = &cf_SVYag;
        }
        _objc_storeStrong(&local_48,pcVar8);
      }
      else {
        bVar1 = (local_61 & 1) == 0;
        local_e8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_SVYag)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_88 = local_e8;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Yag_g)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_e8;
        }
        _objc_storeStrong(&local_48,local_e8);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
      }
      _objc_storeStrong(&local_70,0);
    }
    else {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_01a08fe8();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (uVar4 == 0) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_01a08fe8();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (uVar4 != 0) {
          _objc_storeStrong(uVar4,&local_48,&cf_mo_N_);
        }
      }
      else {
        _objc_storeStrong(uVar4,&local_48,&cf_e_g);
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    _objc_storeStrong(uVar4,&local_48,&cf__);
  }
  IVar6 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_senderScopeForRule__026bb768,local_40);
  local_28 = local_48;
  if (IVar6 == 1) {
    pcVar8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_stringByAppendingString__0269d398,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar8;
  }
  else if (IVar6 == 2) {
    pcVar8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_stringByAppendingString__0269d398,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar8;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

