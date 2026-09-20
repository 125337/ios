// toggleSidebarVisibility @ 015ec920

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::toggleSidebarVisibility(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  ID IVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wakeFromIdleAnimated__026b1400,1);
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sidebarExpanded_026b1248);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSidebarExpanded__026b12c8,(uint)IVar1 ^ 1)
  ;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sidebarExpanded_026b1248);
  if ((IVar1 & 1) != 0) {
    puVar2 = PTR_WCRQuickChatRuntime_026ce698;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layoutChrome_026b1410);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sidebarExpanded_026b1248);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sidebarExpanded_026b1248);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scheduleIdleSnap_026b12d0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancelIdleSnap_026b12a0);
    _objc_initWeak(auStack_28,local_18);
    dVar3 = _dispatch_time(0,16000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_015ecc64;
    local_38 = &DAT_0257be28;
    _objc_copyWeak(auStack_30,auStack_28);
    _dispatch_after(dVar3,puVar2,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

