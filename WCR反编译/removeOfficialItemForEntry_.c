// removeOfficialItemForEntry: @ 01f1bc08

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::removeOfficialItemForEntry_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  uint local_74;
  uint local_44;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scheduleManager_026c8208);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  if (IVar2 == 0) {
    local_34 = 1;
  }
  else {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_officialItem_026c8338);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 0;
    if (lVar3 != 0) {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_removeItem__026a8650);
      local_44 = (uint)IVar2;
    }
    (*(code *)PTR__objc_release_02578630)(lVar3);
    IVar2 = local_30;
    puVar1 = PTR_s_removeItem__026a8650;
    if ((local_44 & 1) == 0) {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entryId_026c7430);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_74 = 0;
      if (lVar4 != 0) {
        IVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,
                   PTR_s_getScheduleItemWithRemindId__026c8350);
        local_74 = (uint)IVar2;
      }
      (*(code *)PTR__objc_release_02578630)(lVar3);
      IVar2 = local_30;
      puVar1 = PTR_s_getScheduleItemWithRemindId__026c8350;
      if ((local_74 & 1) != 0) {
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entryId_026c7430);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        local_40 = IVar2;
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if ((local_40 != 0) &&
           (IVar2 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_removeItem__026a8650),
           (IVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeItem__026a8650,local_40);
        }
        _objc_storeStrong(&local_40,0);
      }
    }
    else {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_officialItem_026c8338);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,puVar1);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

