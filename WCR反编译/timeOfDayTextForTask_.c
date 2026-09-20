// timeOfDayTextForTask: @ 014b647c

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::timeOfDayTextForTask_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_integerInTask_forKey__026a6cc8,local_28,&cf_hour);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_integerInTask_forKey__026a6cc8,local_28,&cf_minute);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__02ld__02ld);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

