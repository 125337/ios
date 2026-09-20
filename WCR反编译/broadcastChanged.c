// broadcastChanged @ 01f1e134

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoStore::broadcastChanged(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

