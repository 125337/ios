// wcr_beginScreenshotPassThrough @ 015e5710

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::wcr_beginScreenshotPassThrough(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sidebarExpanded_026b1248);
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collapseSidebar_026b1250);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setScreenshotPassThrough__026b1258,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_cancelPassThroughRestore_026b1260);
  _objc_initWeak(auStack_28,local_18);
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_015e58d4;
  local_40 = &DAT_0257be28;
  _objc_copyWeak(auStack_38,auStack_28);
  uVar1 = 0;
  _dispatch_block_create(0,&local_58);
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPassThroughRestoreBlock__026b1240,uVar1);
  dVar2 = _dispatch_time(0,800000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar2,puVar3,local_30);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}

