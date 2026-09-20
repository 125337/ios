// titleForWeekday: @ 014b6298

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::titleForWeekday_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3658;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02585ea0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (((long)param_3 < 1) || (7 < (long)param_3)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_hT;
  }
  else {
    local_28 = DAT_028e3650;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3650,PTR_s_objectAtIndexedSubscript__0269cc78,param_3 - 1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

