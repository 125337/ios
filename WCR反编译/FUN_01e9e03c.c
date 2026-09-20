// FUN_01e9e03c @ 01e9e03c

void FUN_01e9e03c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  uVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

