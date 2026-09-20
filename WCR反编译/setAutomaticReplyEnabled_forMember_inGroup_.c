// setAutomaticReplyEnabled:forMember:inGroup: @ 009bd288

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x24 bytes */

void WCRefineAIStore::setAutomaticReplyEnabled_forMember_inGroup_
               (ID param_1,SEL param_2,bool param_3,ID param_4,ID param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *local_c0;
  undefined1 *local_a0;
  undefined1 *local_78;
  undefined1 *local_70;
  long local_68;
  byte local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_44;
  undefined1 *local_40;
  long local_38 [2];
  byte local_21;
  SEL local_20;
  undefined1 *local_18;
  
  local_21 = (byte)param_3;
  local_38[1] = 0;
  local_20 = param_2;
  local_18 = (undefined1 *)param_1;
  _objc_storeStrong(local_38 + 1,param_4);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_5);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined1 *)0x0) {
    local_44 = 1;
  }
  else {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatAgentSelectedMembers_026a0b40);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_59 = 0;
    local_a0 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_a0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_a0;
    }
    local_59 = puVar2 == (undefined1 *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_a0;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_21 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObject__0269d678,local_40);
    }
    else {
      puVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,local_40);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_40);
      }
      puVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatAgentGroupRule_026aad90);
      if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        lVar3 = local_38[0];
        FUN_009af3fc(0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_18;
        local_68 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatAgentSelectedGroups_026aad88);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_c0 = puVar2;
        if (puVar2 == (undefined1 *)0x0) {
          local_78 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = local_78;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_c0;
        if (puVar2 == (undefined1 *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        lVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if ((lVar3 != 0) &&
           (puVar1 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsObject__0269cbb8,local_68),
           ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,local_68);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setChatAgentSelectedGroups__026aada8,local_70);
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setChatAgentSelectedMembers__026aadb0,local_50);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  return;
}

