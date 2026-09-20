// FUN_003cd538 @ 003cd538

void FUN_003cd538(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long local_50;
  undefined *local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar1;
  if (lVar1 == 0) {
    local_50 = *(long *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8,local_50);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar2 = local_28;
  uVar3 = local_18;
  FUN_003cd740(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

