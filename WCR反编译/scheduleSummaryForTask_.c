// scheduleSummaryForTask: @ 014b68bc

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::scheduleSummaryForTask_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_98;
  cfstringStruct *local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  ID local_40;
  ID local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_integerInTask_forKey__026a6cc8,local_30,&cf_scheduleMode);
  IVar2 = local_20;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_timeOfDayTextForTask__026af480,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  if (local_38 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_integerInTask_forKey__026a6cc8,local_30,&cf_dayOfMonth);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_kg_);
    _objc_retainAutoreleasedReturnValue();
    local_4c = 1;
    local_18 = pcVar3;
  }
  else if (local_38 == 1) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_integerInTask_forKey__026a6cc8,local_30,&cf_weekday);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar2 = local_20;
    local_58 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_titleForWeekday__026af488,IVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_k_);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_4c = 1;
  }
  else if (local_38 == 2) {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ke);
    _objc_retainAutoreleasedReturnValue();
    local_4c = 1;
    local_18 = pcVar3;
  }
  else if (local_38 == 3) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_integerInTask_forKey__026a6cc8,local_30,&cf_intervalHours);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_k);
    _objc_retainAutoreleasedReturnValue();
    local_4c = 1;
    local_18 = pcVar3;
  }
  else if (local_38 == 4) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_integerInTask_forKey__026a6cc8,local_30,&cf_intervalMinutes);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_k);
    _objc_retainAutoreleasedReturnValue();
    local_4c = 1;
    local_18 = pcVar3;
  }
  else if (local_38 == 5) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_onceDateText);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_014b5580();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_98 = &cf__gn_eg;
    }
    else {
      local_98 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_98;
    local_4c = 1;
    _objc_storeStrong(&local_70,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gn_;
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

