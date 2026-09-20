// attemptLocateMessage:session:remainingAttempts: @ 01ea2e18

/* Function Stack Size: 0x28 bytes */

void WCRefineToDoHistoryViewController::attemptLocateMessage_session_remainingAttempts_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  dispatch_time_t dVar7;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined8 local_78;
  undefined8 local_70;
  long_long local_68;
  undefined4 local_5c;
  undefined *local_58;
  undefined *local_50;
  long_long local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_48 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_01ea311c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_sessionUserNameFromChatControlle_026c7480,local_50);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if ((IVar6 & 1) != 0) {
    local_58 = PTR_s_locateToMsg__0269d608;
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_locateToMsg__0269d608);
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58,local_38);
      local_5c = 1;
      goto LAB_01ea30e4;
    }
  }
  if ((long)local_48 < 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_J_Y_Sb);
    local_5c = 1;
  }
  else {
    dVar7 = _dispatch_time(0,200000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_01ea3568;
    local_88 = &DAT_02582d38;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_38;
    local_80 = IVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_40;
    local_78 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar1;
    local_68 = local_48;
    _dispatch_after(dVar7,puVar3,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    local_5c = 0;
  }
LAB_01ea30e4:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

