// FUN_01d40378 @ 01d40378

void FUN_01d40378(long param_1)

{
  undefined *puVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,*(undefined8 *)(param_1 + 0x20),
             _kWCRScheduledTaskKeyOnceDateText);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
             _kWCRScheduledTaskKeyLastFiredAt);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

