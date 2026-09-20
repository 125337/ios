// FUN_009c1ed4 @ 009c1ed4

void FUN_009c1ed4(undefined8 param_1,long param_2)

{
  bool bVar1;
  cfstringStruct *local_60;
  undefined8 local_50;
  undefined8 local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  _os_unfair_lock_lock(&DAT_028e2800);
  bVar1 = local_18 == 0;
  if (bVar1) {
    local_50 = 0;
  }
  else {
    local_50 = DAT_028e27f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e27f8,PTR_s_objectForKeyedSubscript__0269d098,local_18);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_50;
  }
  _objc_storeStrong(&local_28,local_50);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _os_unfair_lock_unlock(&DAT_028e2800);
  if (local_20 != 0) {
    *(bool *)local_20 = local_28 != (cfstringStruct *)0x0;
  }
  if (local_28 == (cfstringStruct *)0x0) {
    local_60 = &cf___;
  }
  else {
    local_60 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_60);
  return;
}

