// FUN_0074454c @ 0074454c

void FUN_0074454c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_currentThread_026a11e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_objectForKeyedSubscript__0269d098,
             &cf_com_qimiao_wcrefine_small_signal_override_send_yo_type_depth);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
             puVar2 + 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
             &cf_com_qimiao_wcrefine_small_signal_override_send_yo_type_depth);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_18,0);
  return;
}

