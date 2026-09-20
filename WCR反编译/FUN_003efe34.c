// FUN_003efe34 @ 003efe34

uint FUN_003efe34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint local_54;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  FUN_003f0938(local_18,DAT_026e02f0);
  _objc_retainAutoreleasedReturnValue();
  local_54 = 0;
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_isEqualToString__0269ccc8,local_20);
    local_54 = (uint)lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return local_54 & 1;
}

