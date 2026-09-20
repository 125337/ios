// FUN_0032cef0 @ 0032cef0

void FUN_0032cef0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = &cf_BrandServiceContactsViewController;
  local_78 = &cf_OpenIMBrandContactListViewController;
  local_70 = &cf_ChatRoomListViewController;
  local_68 = &cf_ContactRelatedChatRoomListViewController;
  local_60 = &cf_WCRConfiguredContactRelatedChatRoomListViewController;
  local_58 = &cf_ChatBoxSessionListViewController;
  local_50 = &cf_MultiSelectContactsViewController;
  local_48 = &cf_SayHelloViewController;
  local_40 = &cf_ContactTagNewDetailViewController;
  local_38 = &cf_WCPaySelectChatroomMemberViewController;
  local_30 = &cf_MsgFileBrowseViewController;
  local_28 = &cf_ContactsAuthorityManageDetailViewController;
  local_20 = &cf_ChatRoomInfoProfileRoomContactSelectViewController;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80,0xd
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028c9e00;
  DAT_028c9e00 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

