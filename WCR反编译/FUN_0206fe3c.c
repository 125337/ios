// FUN_0206fe3c @ 0206fe3c

/* WARNING: Removing unreachable block (ram,0x0206fef0) */

void FUN_0206fe3c(undefined8 param_1)

{
  undefined *puVar1;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,
               PTR_s_archivedDataWithRootObject_requi_026ae650,local_20,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

