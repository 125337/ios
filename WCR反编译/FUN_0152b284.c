// FUN_0152b284 @ 0152b284

void FUN_0152b284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_38;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_18 == 0) {
    local_2c = 1;
  }
  else {
    lVar1 = local_20;
    FUN_0155f0e0(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setImage__026ca978,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setImage__026ca978,lVar1);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

