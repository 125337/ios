// wcr_saveStore @ 00ed7a3c

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomKickHelper::wcr_saveStore(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_store_026ab6d0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_storePath_026ab6c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_writeToFile_atomically__0269f928,IVar2,1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28,0);
  return;
}

