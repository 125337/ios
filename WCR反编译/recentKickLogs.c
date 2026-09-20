// recentKickLogs @ 00ed90b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatRoomKickHelper::recentKickLogs(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_60;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_logs);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = IVar2;
  if (IVar2 == 0) {
    local_60 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return local_60;
}

