// FUN_01085218 @ 01085218

undefined8 FUN_01085218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long local_48;
  long local_40;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_40 = *(long *)(param_1 + 0x20);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_indexOfObject__0269e870);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_48 = *(long *)(param_1 + 0x20);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_indexOfObject__0269e870);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_40 == 0x7fffffffffffffff) {
    local_40 = 0x7fffffffffffffff;
  }
  if (local_48 == 0x7fffffffffffffff) {
    local_48 = 0x7fffffffffffffff;
  }
  if (local_40 < local_48) {
    local_18 = 0xffffffffffffffff;
  }
  else if (local_48 < local_40) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

