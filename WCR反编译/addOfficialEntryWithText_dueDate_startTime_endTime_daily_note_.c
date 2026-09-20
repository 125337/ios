// addOfficialEntryWithText:dueDate:startTime:endTime:daily:note: @ 01f1ddc4

/* Function Stack Size: 0x3c bytes */

bool WCRefineToDoStore::addOfficialEntryWithText_dueDate_startTime_endTime_daily_note_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7,
               ID param_8)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *local_b8;
  ID local_80;
  ID local_78;
  undefined4 local_6c;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  local_49 = (byte)param_7;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_8);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_toDoCardOfficialTargetUserName_026c7900);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_b8 = &::cf___;
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = local_b8;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_6c = 1;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scheduleManager_026c8208);
    _objc_retainAutoreleasedReturnValue();
    local_78 = IVar3;
    if ((IVar3 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_respondsToSelector__026ca818,PTR_s_addScheduleItem__026a8640),
       (IVar3 & 1) == 0)) {
      local_11 = 0;
      local_6c = 1;
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_sendOfficialToDoMessage_toSessio_026c8378,local_30,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_11 = IVar3 != 0;
      local_80 = IVar3;
      if ((bool)local_11) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_setSentMessageAsOfficialToDo_tar_026c8360,IVar3,local_68,local_30,
                   local_38,local_40,local_48,local_49 & 1);
      }
      local_6c = 1;
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

