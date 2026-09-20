// FUN_0074ceec @ 0074ceec

void FUN_0074ceec(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = dVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
  if (30.0 < dVar1 - dVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_20);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

