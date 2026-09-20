// FUN_01e9c080 @ 01e9c080

void FUN_01e9c080(void)

{
  long lVar1;
  undefined *puVar2;
  long local_48;
  long local_38;
  byte local_29;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  local_18 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_29 = 0;
  local_48 = lVar1;
  if (lVar1 == 0) {
    _NSHomeDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_48;
  }
  local_29 = lVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_48;
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByAppendingPathComponent__026cab30,&cf_P);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar1);
  return;
}

