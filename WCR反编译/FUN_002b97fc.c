// FUN_002b97fc @ 002b97fc

void FUN_002b97fc(void)

{
  bool bVar1;
  undefined *local_48;
  undefined *local_30;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c9818;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257b9e8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  bVar1 = DAT_028c9810 == (undefined *)0x0;
  if (bVar1) {
    local_48 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_new_0269d288);
    local_30 = local_48;
  }
  else {
    local_48 = DAT_028c9810;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_autoreleaseReturnValue(local_48);
  return;
}

