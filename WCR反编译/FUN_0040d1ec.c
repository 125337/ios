// FUN_0040d1ec @ 0040d1ec

void FUN_0040d1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 != 0) &&
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsObject__0269cbb8,local_30),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addObject__0269d180,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

