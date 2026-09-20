// scheduleTrailingBadgeRecompute @ 015f771c

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatRuntime::scheduleTrailingBadgeRecompute(ID param_1,SEL param_2)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingBadgeRecompute_026b1640);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingBadgeRecompute__026b1648,1);
    _objc_initWeak(auStack_28,local_18);
    dVar1 = _dispatch_time(0,350000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_015f7840;
    local_38 = &DAT_0257be28;
    _objc_copyWeak(auStack_30,auStack_28);
    _dispatch_after(dVar1,puVar2,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

