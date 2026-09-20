// wcr_reloadFromLocalInviteHistory @ 0152c36c

/* Function Stack Size: 0x10 bytes */

void WCRInvitedMemberListViewController::wcr_reloadFromLocalInviteHistory(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_historyReloadStarted_026b03a8);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHistoryReloadStarted__026b03b0,1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_roomId_026b03b8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_initWeak(auStack_30,local_18);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0152c514;
    local_48 = &DAT_02579c60;
    _objc_copyWeak(auStack_38,auStack_30);
    IVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar1;
    _dispatch_async(puVar3,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_40);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

