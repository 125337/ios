// FUN_0092f900 @ 0092f900

void FUN_0092f900(long param_1)

{
  long local_18;
  
  _WCRefineCrashReporterLogDirectory();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fileSystemRepresentation_026a95c0);
  if (param_1 != 0) {
    _snprintf(&DAT_028ce3b0,0x400,"%s");
    _snprintf(&DAT_028ce7b0,0x400,"%s/pending_crash.log");
    _snprintf(&DAT_028cebb0,0x400,"%s/last_objc_exception.log");
    _snprintf(&DAT_028cefb0,0x400,"%s/breadcrumbs.log");
  }
  _objc_storeStrong(&local_18,0);
  return;
}

