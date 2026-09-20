// FUN_001b7954 @ 001b7954

byte FUN_001b7954(undefined8 param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  char *local_e0;
  undefined *local_d8;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  byte local_ad;
  int local_ac;
  undefined *local_a8;
  char *local_a0;
  cfstringStruct *local_98;
  ulong local_88;
  byte local_7a;
  byte local_79;
  ulong local_78;
  undefined *local_70;
  ulong local_68;
  undefined4 local_5c;
  ulong local_58 [3];
  ulong local_40;
  byte local_31;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  local_31 = param_2;
  FUN_001b6c90();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  FUN_001b753c();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = uVar3;
  if ((uVar3 == 0) ||
     (uVar4 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar3 = local_30, uVar4 == 0)) {
    local_21 = 0;
    local_5c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar3;
    local_70 = PTR_s_getContactFromDB__0269f000;
    uVar3 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_respondsToSelector__026ca818,PTR_s_getContactFromDB__0269f000);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],local_70,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar3;
      if (uVar3 != 0) {
        _objc_storeStrong(&local_68,uVar3);
      }
      _objc_storeStrong(&local_78,0);
    }
    local_79 = (local_31 ^ 1) & 1;
    local_7a = 0;
    local_88 = 0;
    uVar4 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_valueForKey__0269d128,&cf_m_oContactOPLog);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_88;
    local_88 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    pcVar5 = &cf_add_DeleteContact_isRetainChatHistory_delScene_sync_;
    _NSSelectorFromString();
    local_98 = pcVar5;
    if ((local_88 != 0) &&
       (uVar3 = local_88,
       (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_respondsToSelector__026ca818,pcVar5),
       (uVar3 & 1) != 0)) {
      uVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,local_98,local_40,local_79 & 1,0,1);
      local_7a = (byte)uVar3;
    }
    if ((local_7a & 1) == 0) {
      pcVar6 = "CContactOPLog";
      _objc_getClass();
      local_a8 = PTR_s_start_DeleteContact_isRetainChat_0269ffc8;
      local_a0 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_respondsToSelector__026ca818,
                 PTR_s_start_DeleteContact_isRetainChat_0269ffc8);
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar6 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,local_a8,local_68,local_79 & 1);
        local_ac = (int)pcVar6;
        local_7a = local_ac != 0;
      }
    }
    local_ad = 0;
    pcVar5 = &cf_deleteContact_listType_andScene_sync_local_;
    _NSSelectorFromString();
    uVar3 = local_58[0];
    local_b8 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_respondsToSelector__026ca818,pcVar5);
    if ((uVar3 & 1) != 0) {
      bVar1 = 0;
      if ((local_79 & 1) != 0) {
        bVar1 = local_7a;
      }
      uVar3 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],local_b8,local_68,1,0,1,bVar1 & 1);
      local_ad = (byte)uVar3;
    }
    if ((local_ad & 1) == 0) {
      local_c0 = PTR_s_deleteContact_listType__0269ffd0;
      uVar3 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_respondsToSelector__026ca818,
                 PTR_s_deleteContact_listType__0269ffd0);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],local_c0,local_68,1);
        local_ad = (byte)uVar3;
      }
    }
    local_c8 = PTR_s_deleteContactLocal_listType__0269ffd8;
    local_c9 = 0;
    uVar3 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_respondsToSelector__026ca818,
               PTR_s_deleteContactLocal_listType__0269ffd8);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],local_c8,local_68,1);
      local_c9 = (byte)uVar3;
    }
    if ((local_31 & 1) != 0) {
      local_d8 = PTR_s_deleteContact_listType__0269ffd0;
      uVar3 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_respondsToSelector__026ca818,
                 PTR_s_deleteContact_listType__0269ffd0);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],local_d8,local_68,2);
      }
      pcVar6 = "MMNewSessionMgr";
      _objc_getClass();
      FUN_001b755c();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_s_DeleteSessionOfUser__0269ffe0;
      local_e0 = pcVar6;
      if ((pcVar6 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_DeleteSessionOfUser__0269ffe0),
         ((ulong)pcVar6 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,puVar2,local_40);
      }
      _objc_storeStrong(&local_e0,0);
    }
    local_21 = 1;
    if (((local_ad & 1) == 0) && (local_21 = 1, (local_c9 & 1) == 0)) {
      local_21 = local_7a;
    }
    local_21 = local_21 & 1;
    local_5c = 1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

