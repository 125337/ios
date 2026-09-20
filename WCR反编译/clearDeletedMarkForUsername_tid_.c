// clearDeletedMarkForUsername:tid: @ 010c0524

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsMonitor::clearDeletedMarkForUsername_tid_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar3 == 0) ||
     (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setDeletedState_forUsername_tid__026ae730,0,local_28,local_30);
    IVar2 = local_18;
    local_40 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_memoryCache_026ae658);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_40;
    local_40 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_40 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_clearDataItemDeletedFlag__026a4b58,
                 local_40);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

