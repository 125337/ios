// FUN_0160a614 @ 0160a614

void FUN_0160a614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = local_28;
  bVar2 = false;
  if (local_28 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar1 != puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,local_28,
               local_20);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

