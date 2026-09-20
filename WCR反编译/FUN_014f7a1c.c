// FUN_014f7a1c @ 014f7a1c

void FUN_014f7a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,local_20);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_unsignedIntegerValue_026cabb8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar2 + lVar3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
             local_20);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

