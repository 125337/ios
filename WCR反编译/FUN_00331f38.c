// FUN_00331f38 @ 00331f38

void FUN_00331f38(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (local_28 = param_3, local_20 = param_2, local_18 = param_1,
     _class_getInstanceMethod(param_1,param_2), param_1 != 0)) {
    local_30 = 0;
    _MSHookMessageEx(local_18,local_20,local_28,&local_30);
    if (local_30 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithPointer__026a2118,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_0033240c();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_18;
      FUN_00332480(local_18,local_20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  return;
}

