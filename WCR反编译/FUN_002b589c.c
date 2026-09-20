// FUN_002b589c @ 002b589c

bool FUN_002b589c(double param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c9806);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_20 = lVar2;
  if (lVar2 != 0) {
    _CACurrentMediaTime();
    dVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doubleValue_026ca608);
    bVar1 = param_1 <= dVar3;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

