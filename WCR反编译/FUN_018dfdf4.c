// FUN_018dfdf4 @ 018dfdf4

long FUN_018dfdf4(double param_1,long param_2)

{
  double dVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_maximumDetentValue_026af2e0);
  dVar1 = *(double *)(param_2 + 0x20);
  _objc_storeStrong(&local_20,0);
  return (long)(param_1 * dVar1);
}

