// setEnabled:forUserName:groupContext:isGroupContact: @ 0109e9dc

/* Function Stack Size: 0x28 bytes */

void WCRefineMessageBlockSupport::setEnabled_forUserName_groupContext_isGroupContact_
               (ID param_1,SEL param_2,bool param_3,ID param_4,ID param_5,bool param_6)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_d0;
  undefined *local_b8;
  undefined *local_a0;
  undefined *local_80;
  undefined *local_78;
  ID local_70;
  long local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  long local_48;
  byte local_39;
  long local_38;
  long local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_39 = (byte)param_6;
  lVar1 = local_30;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_4c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    if ((local_39 & 1) == 0) {
      lVar1 = local_38;
      FUN_0109a9f4();
      _objc_retainAutoreleasedReturnValue();
      local_68 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if ((lVar1 == 0) ||
         (IVar3 = local_18,
         (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isChatRoomID__0269ec68,local_68),
         (IVar3 & 1) == 0)) {
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockContactEnabledIDs_026a0b10)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_d0 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_d0 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mutableCopy_0269d8a0);
        local_80 = local_d0;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if ((local_21 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeObject__0269d678,local_48);
        }
        else {
          puVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_containsObject__0269cbb8,local_48);
          if (((ulong)puVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addObject__0269d180,local_48);
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setMessageBlockContactEnabledIDs_026a4230,local_80);
        _objc_storeStrong(&local_80,0);
        local_4c = 0;
      }
      else {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_groupMemberKeyForGroup_member__026a4228,local_68,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
        if (IVar3 == 0) {
          local_4c = 1;
        }
        else {
          puVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_messageBlockGroupMemberEnabledID_026a0b00);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_b8 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mutableCopy_0269d8a0);
          local_78 = local_b8;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_21 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_removeObject__0269d678,local_70);
          }
          else {
            puVar2 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsObject__0269cbb8,local_70);
            if (((ulong)puVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,local_70);
            }
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setMessageBlockGroupMemberEnable_026a4240,local_78);
          local_4c = 1;
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_messageBlockGroupEnabledIDs_026a41c0);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_a0 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_mutableCopy_0269d8a0);
      local_60 = local_a0;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_21 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObject__0269d678,local_48);
      }
      else {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsObject__0269cbb8,local_48);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_48);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setMessageBlockGroupEnabledIDs__026a4238,local_60);
      local_4c = 1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

