// FUN_01c22c28 @ 01c22c28

long FUN_01c22c28(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeAllObjects_0269d508);
  }
  _objc_storeStrong(&local_18,0);
  return lVar1;
}

