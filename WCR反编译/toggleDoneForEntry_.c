// toggleDoneForEntry: @ 01f1b6dc

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::toggleDoneForEntry_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_58;
  ulong local_40;
  bool local_31;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backend_026c7148);
  if (uVar3 == 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_done_026a1598);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDone__026a15a0,(uint)uVar3 ^ 1);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_done_026a1598);
    local_31 = false;
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      local_58 = (undefined *)0x0;
    }
    else {
      local_58 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      local_30 = local_58;
    }
    local_31 = !bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCompletedAt__026c81e8,local_58);
    if ((local_31 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_done_026a1598);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_appendHistoryForEntry_eventType__026c8308,local_28,&cf_completed);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateLocalEntry__026c8320,local_28);
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_done_026a1598);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finishOfficialEntry__026c8328,local_28);
    }
    else {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entryId_026c7430);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDone__026a15a0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCompletedAt__026c81e8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_clearOfficialMetaForId__026c8348,local_40);
      IVar2 = local_18;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dueDate_026c74b0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startTime_026c74b8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_endTime_026c74c0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_daily_026c7138);
      uVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_note_026c7618);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_addOfficialEntryWithText_dueDate_026c7250,uVar3,uVar4,uVar5,uVar6,
                 uVar7 & 0xffffffff);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_40,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_broadcastChanged_026c8298);
  _objc_storeStrong(&local_28,0);
  return;
}

