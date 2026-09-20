// markOwnedOfficialController: @ 0112ec88

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickRemarkEditor::markOwnedOfficialController_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [24];
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  long local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,&DAT_028e357a);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_setAssociatedObject(local_38,&DAT_028e357b,0,1);
    _objc_setAssociatedObject(local_38,&DAT_028e357c,0,1);
    _objc_setAssociatedObject(local_38,&DAT_028e357d,0,1);
    lVar2 = local_38;
    _objc_getAssociatedObject(local_38,&DAT_028e357e);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_38;
    local_48 = lVar2;
    _objc_getAssociatedObject(local_38,&DAT_028e357f);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    local_50 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    if (local_48 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeObserver__0269f128,local_48);
    }
    if (local_50 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeObserver__0269f128,local_50);
    }
    _objc_initWeak(auStack_60,local_38);
    puVar1 = local_58;
    uVar5 = *(undefined8 *)PTR__UIKeyboardDidShowNotification_025781b8;
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_0112f158;
    local_88 = &DAT_025858d0;
    _objc_copyWeak(auStack_80,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar5,0,puVar4,&local_a0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_58;
    uVar5 = *(undefined8 *)PTR__UIKeyboardDidHideNotification_025781b0;
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_0112f56c;
    local_b8 = &DAT_025858d0;
    _objc_copyWeak(auStack_b0,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar5,0,puVar4,&local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_setAssociatedObject(local_38,&DAT_028e357e,local_68,1);
    _objc_setAssociatedObject(local_38,&DAT_028e357f,local_a8,1);
    _objc_storeStrong(&local_a8);
    _objc_destroyWeak(auStack_b0);
    _objc_storeStrong(&local_68,0);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

