// FUN_000fffb4 @ 000fffb4

void FUN_000fffb4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    _os_unfair_lock_lock(&DAT_028c8460);
    uVar2 = DAT_028c83b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c83b0,PTR_s_objectForKeyedSubscript__0269d098,local_20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _os_unfair_lock_unlock(&DAT_028c8460);
    uVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

