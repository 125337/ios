// FUN_00185a3c @ 00185a3c

void FUN_00185a3c(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "ContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00185cec,&DAT_028c8918);
  _MSHookMessageEx(pcVar1,PTR_s_traitCollectionDidChange__0269f168,FUN_00185f34,&DAT_028c8920);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_001864e4,&DAT_028c8928);
  _MSHookMessageEx(pcVar1,PTR_s_tableView_numberOfRowsInSection__0269e8d8,FUN_0018652c,&DAT_028c8930
                  );
  _MSHookMessageEx(pcVar1,PTR_s_tableView_cellForRowAtIndexPath__0269e790,FUN_001866d8,&DAT_028c8938
                  );
  _MSHookMessageEx(pcVar1,PTR_s_tableView_willDisplayCell_forRow_0269fba8,FUN_00186a60,&DAT_028c8940
                  );
  _MSHookMessageEx(pcVar1,PTR_s_tableView_didSelectRowAtIndexPat_0269e8c0,FUN_00186c78,&DAT_028c8948
                  );
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrContactsPack_handlePackedSect_0269fbb0,FUN_00186de4);
  _MSHookMessageEx(pcVar1,PTR_s_mmtableView_numberOfRowsInSectio_0269fbb8,FUN_00186e58,&DAT_028c8950
                  );
  _MSHookMessageEx(pcVar1,PTR_s_mmtableView_cellForRowAtIndexPat_0269fbc0,FUN_00187034,&DAT_028c8958
                  );
  _MSHookMessageEx(pcVar1,PTR_s_mmtableView_willDisplayCell_forR_0269fbc8,FUN_001873bc,&DAT_028c8960
                  );
  _MSHookMessageEx(pcVar1,PTR_s_mmtableView_didSelectRowAtIndexP_0269fbd0,FUN_001875d4,&DAT_028c8968
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

