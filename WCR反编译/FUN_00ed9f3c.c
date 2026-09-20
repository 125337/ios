// FUN_00ed9f3c @ 00ed9f3c

bool FUN_00ed9f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  dVar1 = *(double *)(param_1 + 0x20);
  dVar2 = dVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doubleValue_026ca608);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return dVar1 - dVar2 < 30.0;
}

