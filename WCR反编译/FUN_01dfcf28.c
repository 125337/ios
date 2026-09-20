// FUN_01dfcf28 @ 01dfcf28

void FUN_01dfcf28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  cfstringStruct *local_40;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  else {
    local_40 = local_18;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

