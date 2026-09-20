// FUN_01bc8988 @ 01bc8988

bool FUN_01bc8988(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  FUN_01be3454(local_18,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  bVar1 = true;
  if ((lVar3 != 2) && (bVar1 = true, lVar3 != 3)) {
    bVar1 = lVar3 == 5;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

