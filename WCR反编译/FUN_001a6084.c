// FUN_001a6084 @ 001a6084

void FUN_001a6084(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_c28 [1024];
  undefined1 uStack_828;
  undefined1 uStack_827;
  undefined1 uStack_826;
  undefined1 uStack_825;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "ContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_doGlobalSearchPrepareWork_0269fe10,FUN_001a65d4,&DAT_028c89d8);
  _MSHookMessageEx(pcVar1,PTR_s_SearchBarBecomeActive_0269fe18,FUN_001a660c,&DAT_028c89e0);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_001a6644,&DAT_028c89e8);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_001a688c,&DAT_028c89f0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_001a68e4,&DAT_028c89f8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_001a6a18,&DAT_028c8a00);
  _MSHookMessageEx(pcVar1,PTR_s_initBarItem_0269fe20,FUN_001a6b44,&DAT_028c8a08);
  _MSHookMessageEx(pcVar1,PTR_s_initSearchBar_0269fe28,FUN_001a6b80,&DAT_028c8a10);
  _MSHookMessageEx(pcVar1,PTR_s_setSearchBarToTableHeaderView_0269fe30,FUN_001a6ca4,&DAT_028c8a18);
  _MSHookMessageEx(pcVar1,PTR_s_checkAndUpdateMenuBarItemSearchS_0269fe38,FUN_001a6dc4,&DAT_028c8a20
                  );
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_WCRefine_officialTopSearchSettin_0269fe40,FUN_001a6ea8);
  uStack_828 = 0x76;
  uStack_827 = 0x40;
  uStack_826 = 0x3a;
  uStack_825 = 0;
  _class_addMethod(pcVar1,PTR_s_WCRefine_onContactsTopBarSearchB_0269fe48,FUN_001a701c);
  auStack_c28[0] = 0x76;
  auStack_c28[1] = 0x40;
  auStack_c28[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_WCRefine_onContactsTopBarSearchB_0269fe50,FUN_001a7214);
  _class_addMethod(pcVar1,PTR_s_WCRefine_openPluginSearchSetting_0269e958,FUN_001a7438);
  pcVar1 = "FTSContactMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setNewestQuery_taskKey__0269fe58,FUN_001a7460,&DAT_028c8a28);
  _MSHookMessageEx(pcVar1,PTR_s_getTaskForKey_queryText__0269fe60,FUN_001a7588,&DAT_028c8a30);
  _MSHookMessageEx(pcVar1,PTR_s_asyncSearch_type_topHitMgr_exten_0269fe68,FUN_001a76d4,&DAT_028c8a38
                  );
  _MSHookMessageEx(pcVar1,PTR_s_asyncSearchWithMixedStrategy_pin_0269fe70,FUN_001a79c0,&DAT_028c8a40
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

