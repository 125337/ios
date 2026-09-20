// removeMember:fromGroup: @ 01ad848c

/* Function Stack Size: 0x20 bytes */

bool WCRefineGroupManager::removeMember_fromGroup_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  ID IVar3;
  uint local_5c;
  ID local_58;
  undefined4 local_50;
  byte local_49;
  ID local_48;
  ID local_40;
  undefined8 local_38;
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
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupForId__026a27e0,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_5c = 1;
  local_40 = IVar1;
  if (IVar1 != 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_5c = 1;
    if (lVar2 != 0) {
      IVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_members_0269ea98);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_5c = (uint)IVar1 ^ 1;
    }
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_5c & 1) == 0) {
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_members_0269ea98);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeObject__0269d678,local_30);
    IVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMembers__026b00e0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_persist_026b68b8);
    local_11 = 1;
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_11 = 0;
    local_50 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

