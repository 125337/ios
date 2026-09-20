// wcr_scheduleDraftAtIndex: @ 01bf5a04

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsDraftListViewController::wcr_scheduleDraftAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  ID local_40;
  byte local_31;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_31 = 0;
  bVar1 = true;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if (-1 < (long)param_3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)param_1 <= (long)param_3;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (!bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_initWeak(auStack_48,local_18);
    IVar3 = local_18;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4072c00000000000,PTR__OBJC_CLASS___NSDate_026cdf88,
               PTR_s_dateWithTimeIntervalSinceNow__0269cf50);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01bf5ca0;
    local_70 = &DAT_0258ba90;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar2;
    _objc_copyWeak(auStack_60,auStack_48);
    _WCRMomentsScheduledPresentDatePicker(IVar3,puVar4,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_68);
    _objc_destroyWeak(auStack_48);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

