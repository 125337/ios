// FUN_007f4d8c @ 007f4d8c

void FUN_007f4d8c(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_11 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_currentThread_026a11e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_11 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_removeObjectForKey__0269d700,&cf_WCRefineToDoDisableUnreadFocusAdjust)
    ;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
               &cf_WCRefineToDoDisableUnreadFocusAdjust);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

