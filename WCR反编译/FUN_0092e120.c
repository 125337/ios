// FUN_0092e120 @ 0092e120

void FUN_0092e120(long param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  _WCRefineCrashReporterLogDirectory();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stringByDeletingLastPathComponen_0269fb90);
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fileSystemRepresentation_026a95c0);
  lVar1 = local_18;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_fileSystemRepresentation_026a95c0);
  if (param_1 != 0) {
    _mkdir(param_1,0x1ed);
  }
  if (lVar1 != 0) {
    _mkdir(lVar1,0x1ed);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

