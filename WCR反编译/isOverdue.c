// isOverdue @ 01f10bd4

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoEntry::isOverdue(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_48;
  undefined *local_40;
  undefined1 local_31;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_done_026a1598);
  local_31 = 0;
  bVar2 = true;
  uVar1 = (param_1 & 1) == 0;
  if ((bool)uVar1) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dueDate_026c74b0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == 0;
    local_31 = uVar1;
    local_30 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  puVar5 = PTR_WCRefineToDoStore_026cf6a0;
  if (bVar2) {
    local_11 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_startOfDay__026c7648);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = PTR_WCRefineToDoStore_026cf6a0;
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dueDate_026c74b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_startOfDay__026c7648);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_compare__0269cd10,local_40);
    local_11 = puVar5 == (undefined *)0xffffffffffffffff;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  return local_11 & 1;
}

