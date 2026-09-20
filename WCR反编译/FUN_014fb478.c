// FUN_014fb478 @ 014fb478

void FUN_014fb478(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 local_30;
  uint local_24;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  bVar1 = local_20 != 0;
  if (bVar1) {
    uVar2 = local_18;
    FUN_014fc2fc();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    lVar3 = local_20;
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar4 + 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_30);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _objc_storeStrong(&local_30,0);
  }
  local_24 = (uint)!bVar1;
  _objc_storeStrong(&local_20,0);
  return;
}

