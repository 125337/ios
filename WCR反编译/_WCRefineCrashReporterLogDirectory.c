// _WCRefineCrashReporterLogDirectory @ 0092d880

void _WCRefineCrashReporterLogDirectory(void)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_38;
  long local_20;
  long local_18;
  
  lVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  local_18 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar1;
  if (lVar1 == 0) {
    local_38 = lVar1;
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_58;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar2);
  return;
}

