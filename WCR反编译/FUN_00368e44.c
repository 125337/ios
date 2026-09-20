// FUN_00368e44 @ 00368e44

void FUN_00368e44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  ulong local_160;
  ulong local_158;
  ulong local_100;
  ulong local_98;
  char *local_70;
  ulong local_68;
  byte local_59;
  ulong local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (local_30 == 0) {
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    local_59 = 0;
    local_100 = uVar2;
    if (uVar2 == 0) {
      local_100 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_100;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_100;
    }
    local_59 = uVar2 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_100;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00396798();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar4 = "CMessageMgr";
    local_68 = uVar3;
    _objc_getClass();
    FUN_00392f1c();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_UpdateLastMsgToUnread_;
    local_70 = pcVar4;
    _NSSelectorFromString();
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((uVar2 != 0) &&
       (pcVar4 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar5),
       ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar5,local_40);
    }
    local_98 = 0;
    pcVar5 = &cf_GetUnReadCount_;
    _NSSelectorFromString();
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((uVar2 != 0) &&
       (pcVar4 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar5),
       ((ulong)pcVar4 & 1) != 0)) {
      pcVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar5,local_40);
      local_98 = (ulong)pcVar4 & 0xffffffff;
    }
    uVar2 = local_40;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    FUN_003668c8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSession__0269d2e0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_98 < local_68) {
      local_158 = local_68;
    }
    else {
      local_158 = local_98;
    }
    if (local_158 < 2) {
      local_160 = 1;
    }
    else {
      local_160 = local_158;
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_00367110(uVar2,&cf_m_bShowUnReadAsRedDot);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_00367110(uVar2,&cf_m_uUnReadCount);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    FUN_003694c4(local_30);
    uVar1 = local_28;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    FUN_003b7208(uVar1,uVar2,local_40,&cf_markUnread);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

