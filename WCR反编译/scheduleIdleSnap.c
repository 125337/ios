// scheduleIdleSnap @ 015ea5ec

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::scheduleIdleSnap(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelIdleSnap_026b12a0);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sidebarExpanded_026b1248);
  if ((((IVar1 & 1) == 0) &&
      (IVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ballDragging_026b1380)
      , (IVar1 & 1) == 0)) &&
     (IVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768),
     (IVar1 & 1) == 0)) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ballAvatarHost_026b12f8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar2 & 1) != 0) {
      _objc_initWeak(auStack_28,local_18);
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_015ea818;
      local_40 = &DAT_0257be28;
      _objc_copyWeak(auStack_38,auStack_28);
      uVar3 = 0;
      _dispatch_block_create(0,&local_58);
      local_30 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIdleSnapBlock__026b12e0,uVar3);
      dVar4 = _dispatch_time(0,3000000000);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar4,puVar5,local_30);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_30,0);
      _objc_destroyWeak(auStack_38);
      _objc_destroyWeak(auStack_28);
    }
  }
  return;
}

