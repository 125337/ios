// FUN_007c7b94 @ 007c7b94

void FUN_007c7b94(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  dispatch_time_t dVar2;
  dispatch_queue_t pdVar3;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_38 = param_6;
  local_30 = param_5;
  local_28 = param_4;
  local_20 = param_3;
  local_18 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if ((DAT_028ccd30 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_timeIntervalSinceDate__0269cb78,DAT_028ccd30), 0.5 <= param_1)) {
    _objc_storeStrong(&DAT_028ccd30,local_40);
    DAT_026f46ca = 1;
    _objc_storeStrong(&DAT_028ccd18);
    DAT_026f46c9 = 1;
    _objc_storeStrong(&DAT_028ccd20,0);
    DAT_026f46c8 = 1;
    _objc_storeStrong(&DAT_028ccd28,0);
  }
  else {
    dVar2 = _dispatch_time(0,500000000);
    pdVar3 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar2,pdVar3,&PTR___NSConcreteGlobalBlock_025800a0);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

