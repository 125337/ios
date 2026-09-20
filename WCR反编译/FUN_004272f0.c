// FUN_004272f0 @ 004272f0

void FUN_004272f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 != 0) &&
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsObject__0269cbb8,local_28),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addObject__0269d180,local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

