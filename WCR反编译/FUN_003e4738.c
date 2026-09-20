// FUN_003e4738 @ 003e4738

void FUN_003e4738(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_48;
  undefined4 local_3c;
  long local_38 [3];
  undefined8 local_20;
  long local_18;
  
  FUN_003e4d48();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lock_026a3390);
  lVar2 = DAT_028ca330;
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_unlock_026a3398);
  lVar1 = local_38[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
  lVar2 = local_38[0];
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lock_026a3390);
    _objc_storeStrong(local_38,DAT_028ca330);
    lVar2 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      FUN_003e4dbc();
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar2;
      if (lVar2 != 0) {
        _objc_storeStrong(&DAT_028ca330,lVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_unlock_026a3398);
      if (local_48 != 0) {
        FUN_003e4ed8(local_48);
      }
      lVar2 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar2;
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_unlock_026a3398);
      lVar2 = local_38[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar2;
      local_3c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
    local_3c = 1;
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

