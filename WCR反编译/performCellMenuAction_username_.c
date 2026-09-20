// performCellMenuAction:username: @ 015f42c0

/* Function Stack Size: 0x20 bytes */

void WCRQuickChatWindow::performCellMenuAction_username_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || ((long)local_28 < 0)) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    if (local_28 == 0) {
      FUN_015f4794(local_30);
      puVar2 = PTR_WCRQuickChatRuntime_026ce698;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else if (local_28 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_quickChatTopUsernames_026b15f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_30);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_insertObject_atIndex__0269eac0,local_30,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObject__0269d678,local_30);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setQuickChatTopUsernames__026b15f8,local_48);
      puVar2 = PTR_WCRQuickChatRuntime_026ce698;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_48,0);
    }
    else if (local_28 == 2) {
      puVar2 = PTR_WCRQuickChatRuntime_026ce698;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else if (local_28 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_quickChatRemovedUsernames_026b1608);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,local_30);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_30);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setQuickChatRemovedUsernames__026b1610,local_50);
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_quickChatTopUsernames_026b15f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeObject__0269d678,local_30);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setQuickChatTopUsernames__026b15f8,local_58);
      puVar2 = PTR_WCRQuickChatRuntime_026ce698;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_performAction_forUsername__026b1450,local_28 == 5,local_30);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

