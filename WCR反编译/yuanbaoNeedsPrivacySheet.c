// yuanbaoNeedsPrivacySheet @ 0111e970

/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::yuanbaoNeedsPrivacySheet(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  pcVar2 = &cf_ChatBotMgr;
  local_28 = param_2;
  local_20 = param_1;
  _NSClassFromString();
  FUN_0111a880();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_hasSignedAllAgreementForUserName_026af0b8;
  local_30 = pcVar2;
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_hasSignedAllAgreementForUserName_026af0b8), ((ulong)pcVar2 & 1) == 0)) {
    local_11 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,&cf_wxid_wi_1d142z0zdj03);
    local_11 = ((byte)pcVar2 ^ 1) & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

