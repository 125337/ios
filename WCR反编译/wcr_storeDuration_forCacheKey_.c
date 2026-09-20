// wcr_storeDuration:forCacheKey: @ 015b0188

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackStore::wcr_storeDuration_forCacheKey_
               (ID param_1,SEL param_2,double param_3,ID param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  uVar1 = DAT_028e3ae8;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3ae8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_30);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_schedulePersistDurationCache_026b0c20);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

