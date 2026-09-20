// FUN_00177848 @ 00177848

void FUN_00177848(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "ContactsItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initView__0269f970,FUN_00177b8c,&DAT_028c8878);
  _MSHookMessageEx(pcVar1,PTR_s_initView_showChatRoomName__0269f978,FUN_00177c30,&DAT_028c8880);
  _MSHookMessageEx(pcVar1,PTR_s_initDescLabel__0269f980,FUN_00177d0c,&DAT_028c8888);
  _MSHookMessageEx(pcVar1,PTR_s_initDescLabel_color__0269f988,FUN_00177e0c,&DAT_028c8890);
  pcVar1 = "NewRemarkViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_00177f98,&DAT_028c8898);
  pcVar1 = "ContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initData_0269ec58,FUN_00178154,&DAT_028c88a0);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00178190,&DAT_028c88a8);
  pcVar1 = "GroupSelectContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initData_0269ec58,FUN_001781d8,&DAT_028c88b0);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00178214,&DAT_028c88b8);
  auStack_428[0] = 0x40;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  auStack_428[3] = 0x40;
  sVar2 = _strlen("q");
  _memcpy(auStack_428 + 4,"q",sVar2);
  sVar2 = _strlen("q");
  auStack_428[(int)sVar2 + 4] = 0;
  _class_addMethod(pcVar1,PTR_s_tableView_titleForHeaderInSectio_0269f990,FUN_0017825c);
  pcVar1 = "ContactSelectView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initData__0269f998,FUN_001788cc,&DAT_028c88c0);
  pcVar1 = "ContactsDataLogic";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getKeysArray_0269f9a0,FUN_00178934,&DAT_028c88c8);
  _MSHookMessageEx(pcVar1,PTR_s_getContactsArrayWith__0269f9a8,FUN_00178b74,&DAT_028c88d0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

