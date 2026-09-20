// saveOfficialMetaForItem:message:target:text:dueDate:startTime:endTime:daily:note: @ 01f1cde0

/* Function Stack Size: 0x54 bytes */

void __thiscall
WCRefineToDoStore::saveOfficialMetaForItem_message_target_text_dueDate_startTime_endTime_daily_note_
          (WCRefineToDoStore *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,
          ID param_6,ID param_7,ID param_8,ID param_9,bool param_10,ID param_11)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_120;
  cfstringStruct *local_110;
  undefined *local_98;
  ID local_90;
  undefined4 local_84;
  long local_80;
  long local_78;
  byte local_69;
  long local_68;
  long local_60;
  long local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  local_69 = (byte)param_10;
  local_78 = 0;
  _objc_storeStrong(&local_78,param_11);
  lVar1 = local_38;
  FUN_01f15094();
  _objc_retainAutoreleasedReturnValue();
  local_80 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_84 = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableOfficialMeta_026c82f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_90 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_69 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_daily);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_completed);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_50 == (cfstringStruct *)0x0) {
      local_110 = &::cf___;
    }
    else {
      local_110 = local_50;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_110,&cf_textSnapshot);
    if (local_48 == (cfstringStruct *)0x0) {
      local_120 = &::cf___;
    }
    else {
      local_120 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_120,&cf_sessionUserName);
    lVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,&cf_note);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (local_58 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_timeIntervalSince1970_0269cfc8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_dueDate);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (local_60 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_timeIntervalSince1970_0269cfc8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_startTime);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (local_68 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_timeIntervalSince1970_0269cfc8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_endTime);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_uiMesLocalID_0269d238);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((int)lVar1 != 0) {
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_uiMesLocalID_0269d238);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithUnsignedInt__0269d800,lVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_localID);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_n64MesSvrID_0269d3e0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (0 < lVar1) {
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_n64MesSvrID_0269d3e0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithLongLong__0269d808,lVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_mesSvrID);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_setObject_forKeyedSubscript__0269d248,local_98,local_80);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveOfficialMeta__026c8300,local_90);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

