// onRescheduleScheduledTask @ 0057e494

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRMomentsScheduledTaskListViewController::onRescheduleScheduledTask
          (WCRMomentsScheduledTaskListViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 in_d0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *local_50;
  uint local_48;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionTask_026a53f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  bVar1 = (param_1 & 1) != 0;
  if (bVar1) {
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_fireAt);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,puVar3,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_initWeak(auStack_58,local_28);
    IVar2 = local_28;
    IVar4 = local_38;
    puVar3 = local_50;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_0057e760;
    local_70 = &DAT_0257df48;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar4;
    _objc_copyWeak(auStack_60,auStack_58);
    _WCRMomentsScheduledPresentDatePicker(IVar2,puVar3,&local_88);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_68);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_50,0);
  }
  local_48 = (uint)!bVar1;
  _objc_storeStrong(&local_38,0);
  return;
}

