// FUN_0111df70 @ 0111df70

void FUN_0111df70(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  ulong uVar6;
  long local_40;
  undefined *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_28 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  local_30 = puVar4;
  if (puVar4 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_applicationState_0269d6d8);
    bVar1 = puVar4 != (undefined *)0x0;
  }
  uVar6 = local_28 - 4;
  if ((3 < local_28) || (uVar6 = (ulong)bVar1, bVar1 != false)) {
    _AudioServicesPlaySystemSound(uVar6,0xfff);
    if (local_28 == 5) {
      dVar5 = _dispatch_time(0,200000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar5,puVar4,&PTR___NSConcreteGlobalBlock_02585798);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    if (3 < local_28) goto LAB_0111e16c;
  }
  local_40 = local_28;
  if (local_28 < 1) {
    local_40 = 1;
  }
  if (3 < local_40) {
    local_40 = 3;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedbackWithIndex__0269f248,local_40);
LAB_0111e16c:
  _objc_storeStrong(&local_30,0);
  return;
}

