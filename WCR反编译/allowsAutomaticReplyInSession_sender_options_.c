// allowsAutomaticReplyInSession:sender:options: @ 009bc874

/* Function Stack Size: 0x28 bytes */

bool WCRefineAIStore::allowsAutomaticReplyInSession_sender_options_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ulong uVar5;
  ID IVar6;
  byte local_124;
  byte local_114;
  ulong local_c0;
  ID local_98;
  ID local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  byte local_65;
  int local_64;
  long local_60;
  long local_58;
  ulong local_50;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  lVar2 = local_40;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_48;
  local_58 = lVar2;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_58;
  local_60 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_21 = 0;
    local_64 = 1;
    goto LAB_009bcfc8;
  }
  lVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  local_65 = (byte)lVar2;
  IVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_profileSessionSettingsEnabled_026a0b50);
  if ((IVar4 & 1) != 0) {
    uVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_wcrAutoReplyEnabled);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 0;
    local_c0 = uVar5;
    if (uVar5 == 0) {
      local_c0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_wcrConversationEnabled);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_c0;
    }
    local_79 = uVar5 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_c0;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    if (local_70 == 0) {
      local_64 = 0;
    }
    else {
      uVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_boolValue_026ca540);
      if ((uVar5 & 1) == 0) {
        local_21 = 0;
        local_64 = 1;
      }
      else {
        if ((local_65 & 1) != 0) {
          IVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
          uVar5 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_wcrReplyMembers);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_sanitizedUserNames__026aad80);
          _objc_retainAutoreleasedReturnValue();
          local_88 = IVar4;
          (*(code *)PTR__objc_release_02578630)(uVar5);
          IVar4 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
          if ((IVar4 == 0) ||
             ((lVar2 = local_60,
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0), lVar2 != 0 &&
              (IVar4 = local_88,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_containsObject__0269cbb8,local_60), (IVar4 & 1) != 0)))) {
            local_64 = 0;
          }
          else {
            local_21 = 0;
            local_64 = 1;
          }
          _objc_storeStrong(&local_88,0);
          if (local_64 != 0) goto LAB_009bcbf4;
        }
        local_21 = 1;
        local_64 = 1;
      }
    }
LAB_009bcbf4:
    _objc_storeStrong(&local_70,0);
    if (local_64 != 0) goto LAB_009bcfc8;
  }
  if ((local_65 & 1) == 0) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatAgentSelectedContacts_026a0b48);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    local_114 = 1;
    if ((IVar6 & 1) == 0) {
      lVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      local_124 = 0;
      bVar1 = lVar2 != 0;
      if (bVar1) {
        local_98 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatAgentSelectedContacts_026a0b48);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_124 = (byte)IVar6;
      }
      local_114 = local_124;
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatAgentContactRule_026aad98);
    if (IVar4 == 1) {
      local_64 = 1;
      local_21 = local_114 & 1;
    }
    else {
      local_21 = local_114 & 1 ^ 1;
      local_64 = 1;
    }
  }
  else {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatAgentSelectedGroups_026aad88);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatAgentGroupRule_026aad90);
    if (IVar4 == 1) {
      if ((IVar6 & 1) == 0) {
        local_21 = 0;
        local_64 = 1;
        goto LAB_009bcfc8;
      }
    }
    else if ((IVar6 & 1) != 0) {
      local_21 = 0;
      local_64 = 1;
      goto LAB_009bcfc8;
    }
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatAgentSelectedMembers_026a0b40);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (IVar6 == 0) {
      local_21 = 1;
      local_64 = 1;
    }
    else {
      lVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (lVar2 == 0) {
        local_21 = 0;
        local_64 = 1;
      }
      else {
        IVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
        IVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatAgentSelectedMembers_026a0b40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_groupMemberList_containsGroup_me_026a0b08,IVar6,local_58,local_60);
        local_21 = (byte)IVar4 & 1;
        (*(code *)PTR__objc_release_02578630)(IVar6);
        local_64 = 1;
      }
    }
  }
LAB_009bcfc8:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

