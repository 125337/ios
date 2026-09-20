// FUN_007ece18 @ 007ece18

void FUN_007ece18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = DAT_028cce98;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cce98,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_processedCount);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,lVar2 + 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_processedCount);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

