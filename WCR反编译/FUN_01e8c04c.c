// FUN_01e8c04c @ 01e8c04c

void FUN_01e8c04c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  uVar1 = 0xe;
  _NSSearchPathForDirectoriesInDomains(0xe,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

