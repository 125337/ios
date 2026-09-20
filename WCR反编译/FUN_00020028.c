// FUN_00020028 @ 00020028

void FUN_00020028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  ulong *local_1b0;
  char *local_148;
  cfstringStruct *local_90;
  char *local_88;
  char *local_80;
  byte local_71;
  char *local_70;
  char *local_68;
  char *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  ulong local_40;
  cfstringStruct *local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar3 = (char *)local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsRealChatUsr_0269d190);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = (ulong)pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = (char *)local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_40 = (ulong)pcVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = (char *)local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_bXT;
    local_50 = 1;
    goto LAB_000207d4;
  }
  pcVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
  pcVar7 = local_58;
  if (pcVar5 == (cfstringStruct *)0x0) {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar3 & 1) == 0) {
LAB_000203d8:
      local_148 = (char *)0x0;
    }
    else {
      pcVar3 = "CContactMgr";
      _objc_getClass();
      local_148 = local_60;
      puVar1 = PTR_s_getService__0269d170;
      if (pcVar3 == (char *)0x0) goto LAB_000203d8;
      pcVar3 = "CContactMgr";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(local_148,puVar1,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_148;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_148;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    local_80 = (char *)0x0;
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getContactByName__0269d178,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_80;
      local_80 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    local_88 = (char *)0x0;
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getContactDisplayName_0269d160);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar4;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_88;
      local_88 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = local_80;
      FUN_0001a4fc(local_80,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar4;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_88;
      local_88 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (pcVar3 == (char *)0x0) {
      local_1b0 = &local_40;
    }
    else {
      local_1b0 = (ulong *)&local_88;
    }
    pcVar7 = (cfstringStruct *)*local_1b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar7,local_40);
    pcVar7 = local_90;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar7;
    local_50 = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar7;
    local_50 = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_000207d4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

