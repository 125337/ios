// performAction:forUsername: @ 015f1dd4

/* Function Stack Size: 0x20 bytes */

void WCRQuickChatWindow::performAction_forUsername_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  long_long local_50;
  long_long local_48;
  long local_40;
  uint local_34;
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
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSidebarExpanded__026b12c8,0);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scheduleIdleSnap_026b12d0);
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    puVar4 = PTR___dispatch_main_q_02578680;
    local_48 = local_28;
    local_40 = lVar3;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_40;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_015f1fc4;
    local_60 = &DAT_0257cc98;
    local_50 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar3;
    _dispatch_async(puVar4,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_30,0);
  return;
}

