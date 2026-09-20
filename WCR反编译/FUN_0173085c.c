// FUN_0173085c @ 0173085c

void FUN_0173085c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_20;
  local_28 = puVar2;
  FUN_01729a9c();
  uVar1 = local_18;
  puVar2 = local_28;
  local_38 = uVar3;
  local_30 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

