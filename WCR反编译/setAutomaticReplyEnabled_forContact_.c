// setAutomaticReplyEnabled:forContact: @ 009bd020

/* Function Stack Size: 0x1c bytes */

void WCRefineAIStore::setAutomaticReplyEnabled_forContact_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  byte local_21;
  SEL local_20;
  undefined *local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_30;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar1 & 1) != 0)) {
    local_3c = 1;
  }
  else {
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatAgentSelectedContacts_026a0b48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_50 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_70;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_21 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObject__0269d678,local_38);
    }
    else {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_38);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,local_38);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setChatAgentSelectedContacts__026aada0,local_48);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

