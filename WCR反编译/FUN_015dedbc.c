// FUN_015dedbc @ 015dedbc

void FUN_015dedbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long local_30;
  undefined8 local_28;
  long local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_015def38(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

