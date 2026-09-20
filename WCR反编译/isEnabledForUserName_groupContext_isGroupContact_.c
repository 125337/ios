// isEnabledForUserName:groupContext:isGroupContact: @ 0109e598

/* Function Stack Size: 0x24 bytes */

bool WCRefineMessageBlockSupport::isEnabledForUserName_groupContext_isGroupContact_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte local_b4;
  byte local_8c;
  undefined *local_78;
  long local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  long local_48;
  byte local_39;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_39 = (byte)param_5;
  lVar2 = local_30;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_4c = 1;
    goto LAB_0109e9a0;
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  if ((local_39 & 1) == 0) {
    lVar2 = local_38;
    FUN_0109a9f4();
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
LAB_0109e860:
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockContactEnabledIDs_026a0b10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar7 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_b4 = 0;
      bVar1 = ((ulong)puVar7 & 1) != 0;
      if (bVar1) {
        local_78 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockContactEnabledIDs_026a0b10)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_b4 = (byte)puVar6;
      }
      local_11 = local_b4 & 1;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_70);
      IVar5 = local_20;
      if ((IVar4 & 1) == 0) goto LAB_0109e860;
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_messageBlockGroupMemberEnabledID_026a0b00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_groupMemberList_containsGroup_me_026a0b08,puVar3,local_70,local_48);
      local_11 = (byte)IVar5 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_4c = 1;
    _objc_storeStrong(&local_70,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_messageBlockGroupEnabledIDs_026a41c0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_61 = 0;
    local_8c = 0;
    if (((ulong)puVar7 & 1) != 0) {
      puVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockGroupEnabledIDs_026a41c0);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_8c = (byte)puVar6;
    }
    local_11 = local_8c & 1;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_4c = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_0109e9a0:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

