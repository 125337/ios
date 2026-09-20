// FUN_0073d080 @ 0073d080

void FUN_0073d080(void)

{
  char *pcVar1;
  
  pcVar1 = "SyncCmdHandler";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_HandleBatch_ShowPush__026a7bc0,FUN_0073d3c8,&DAT_028cc5c0);
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_0073dac8,&DAT_028cc5c8);
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_0073dbb4,&DAT_028cc5d0);
  pcVar1 = "CContactMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getContactByName__0269d178,FUN_0073dca0,&DAT_028cc5d8);
  _MSHookMessageEx(pcVar1,PTR_s_isInContactList__0269efe0,FUN_0073dee8,&DAT_028cc5e0);
  _MSHookMessageEx(pcVar1,PTR_s_getContactList_contactType__026a2fc8,FUN_0073e0c4,&DAT_028cc5e8);
  pcVar1 = "ContactsDataLogic";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getContactsArrayWith__0269f9a8,FUN_0073e174,&DAT_028cc5f0);
  pcVar1 = "MMNewSessionMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_SessionNewArray_0269d988,FUN_0073e264,&DAT_028cc5f8);
  pcVar1 = "FTSContactMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getAllContactsWithTaskKey__026a6778,FUN_0073e304,&DAT_028cc600);
  _MSHookMessageEx(pcVar1,PTR_s_getBrandContactsWithTaskKey__026a7bc8,FUN_0073e3f4,&DAT_028cc608);
  _MSHookMessageEx(pcVar1,PTR_s_getBrandServiceContactsWithTaskK_026a7bd0,FUN_0073e4e4,&DAT_028cc610
                  );
  _MSHookMessageEx(pcVar1,PTR_s_getBrandStickerContactsWithTaskK_026a7bd8,FUN_0073e5d4,&DAT_028cc618
                  );
  pcVar1 = "FTSContactDataProvider";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isFtsValidContact__026a67a8,FUN_0073e6c4,&DAT_028cc620);
  _MSHookMessageEx(pcVar1,PTR_s_isFtsValidContact_needGroupMembe_026a67b0,FUN_0073e820,&DAT_028cc628
                  );
  pcVar1 = "BrandContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isContactNeedExtraFiltered__026a7be0,FUN_0073e9a4,&DAT_028cc630);
  _MSHookMessageEx(pcVar1,PTR_s_onFilterContactCandidate__026a7be8,FUN_0073eafc,&DAT_028cc638);
  pcVar1 = "BEBrandContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isContactNeedExtraFiltered__026a7be0,FUN_0073ec58,&DAT_028cc640);
  pcVar1 = "CBaseContactInfoAssist";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isInMyContactList_026a67b8,FUN_0073edb0,&DAT_028cc648);
  pcVar1 = "ContactInfoViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isInMyContactList_026a67b8,FUN_0073ef18,&DAT_028cc650);
  return;
}

