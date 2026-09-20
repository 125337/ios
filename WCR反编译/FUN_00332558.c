// FUN_00332558 @ 00332558

long FUN_00332558(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_48 [3];
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  local_28 = param_2;
  _object_getClass();
  local_30 = lVar2;
  while (local_30 != 0) {
    lVar2 = local_30;
    FUN_0033240c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    FUN_00332480(local_30,local_28);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    bVar1 = local_48[0] != 0;
    if (bVar1) {
      lVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_pointerValue_026a2120);
      local_18 = lVar2;
    }
    _objc_storeStrong(local_48,0);
    if (bVar1) goto LAB_00332740;
    _class_getSuperclass();
  }
  local_18 = 0;
LAB_00332740:
  _objc_storeStrong(&local_20,0);
  return local_18;
}

