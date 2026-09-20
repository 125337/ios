// convertToBeijingTime: @ 00936b24

/* Function Stack Size: 0x18 bytes */

ID MyAction::convertToBeijingTime_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss);
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_dateFromString__026aa6a8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_18 = (undefined *)0x0;
      local_34 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      _objc_alloc_init();
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss);
      puVar2 = PTR__OBJC_CLASS___NSDateComponents_026ce788;
      _objc_alloc_init();
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHour__026a52f0,8);
      puVar2 = PTR__OBJC_CLASS___NSCalendar_026ce070;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_dateByAddingComponents_toDate_op_026aa700,local_58,local_48,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_50;
      local_68 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_stringFromDate__0269d1d8,puVar2);
      _objc_retainAutoreleasedReturnValue();
      local_34 = 1;
      local_18 = puVar3;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

