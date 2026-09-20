// FUN_003b7080 @ 003b7080

void FUN_003b7080(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  bVar1 = true;
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098,local_20);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (!bVar1) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,param_3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
               local_20);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

