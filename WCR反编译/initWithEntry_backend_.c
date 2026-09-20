// initWithEntry:backend: @ 01ea4954

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoItemEditViewController::initWithEntry_backend_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 *local_40;
  undefined *local_38;
  long_long local_30;
  long local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_40;
  local_38 = PTR_WCRefineToDoItemEditViewController_026d01b8;
  local_30 = param_4;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    _objc_storeStrong((long)local_18 + (long)_entry,local_28);
    *(long_long *)((long)local_18 + (long)_backend) = local_30;
    *(bool *)((long)local_18 + (long)_isNew) = local_28 == 0;
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dueDate_026c74b0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)((long)local_18 + (long)_editingDueDate);
    *(long *)((long)local_18 + (long)_editingDueDate) = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startTime_026c74b8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)((long)local_18 + (long)_editingStartTime);
    *(long *)((long)local_18 + (long)_editingStartTime) = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_endTime_026c74c0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)((long)local_18 + (long)_editingEndTime);
    *(long *)((long)local_18 + (long)_editingEndTime) = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_daily_026c7138);
    *(char *)((long)local_18 + (long)_editingDaily) = (char)lVar3;
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

