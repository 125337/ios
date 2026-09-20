// scheduleSettleOnTableView:owner: @ 00fd1654

/* Function Stack Size: 0x20 bytes */

void WCRefineHomeTableHeaderHost::scheduleSettleOnTableView_owner_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  ID local_48;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_34 = 1;
  }
  else {
    if (local_30 != 0) {
      _objc_setAssociatedObject(local_28,&DAT_028e3047,local_30,0);
    }
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028e3048);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028e3048,puVar1,1);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_initWeak(auStack_40,local_28);
      dVar4 = _dispatch_time(0,150000000);
      puVar1 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_00fd18c0;
      local_58 = &DAT_025799c0;
      _objc_copyWeak(auStack_50,auStack_40);
      local_48 = local_18;
      _dispatch_after(dVar4,puVar1,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_40);
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

