// FUN_0077bd00 @ 0077bd00

undefined8 FUN_0077bd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_80;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_20 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = lVar1;
    if (lVar1 == 0) {
      local_80 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_80;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_locationInView__026ca798,local_38);
    local_2c = 1;
    local_18 = param_1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

